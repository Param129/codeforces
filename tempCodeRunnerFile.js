const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let lines = [];
let currentLine = 0;

function readLine() {
  return lines[currentLine++];
}

function transpose(mat) {
  const n = mat.length;
  const t = Array.from({ length: n }, () => Array(n).fill(0));
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      t[j][i] = mat[i][j];
    }
  }
  return t;
}

function sol() {
  const [n, m] = readLine().split(' ').map(Number);
  const grid1 = Array.from({ length: n }, () => readLine().split(' ').map(Number));
  const grid2 = Array.from({ length: n }, () => readLine().split(' ').map(Number));

  if (n === m) {
    const stt = new Set();
    for (const v of grid1) {
      const cur = new Set(v);
      stt.add(JSON.stringify(cur));
    }

    for (const v of grid2) {
      const cur = new Set(v);
      if (!stt.has(JSON.stringify(cur))) {
        console.log("NO");
        return;
      }
    }

    const transposedGrid1 = transpose(grid1);
    const transposedGrid2 = transpose(grid2);
    stt.clear();

    for (const v of transposedGrid1) {
      const cur = new Set(v);
      stt.add(JSON.stringify(cur));
    }

    for (const v of transposedGrid2) {
      const cur = new Set(v);
      if (!stt.has(JSON.stringify(cur))) {
        console.log("NO");
        return;
      }
    }

    console.log("YES");
  } else {
    const stt = new Set();
    for (const v of grid1) {
      const cur = new Set(v);
      stt.add(JSON.stringify(cur));
    }

    for (const v of grid2) {
      const cur = new Set(v);
      if (!stt.has(JSON.stringify(cur))) {
        console.log("NO");
        return;
      }
    }

    stt.clear();

    for (let j = 0; j < m; j++) {
      const cur = new Set();
      for (let i = 0; i < n; i++) {
        cur.add(grid1[i][j]);
      }
      stt.add(JSON.stringify(cur));
    }

    for (let j = 0; j < m; j++) {
      const cur = new Set();
      for (let i = 0; i < n; i++) {
        cur.add(grid2[i][j]);
      }
      if (!stt.has(JSON.stringify(cur))) {
        console.log("NO");
        return;
      }
    }

    console.log("YES");
  }
}

function main() {
  const t = parseInt(readLine());
  for (let i = 0; i < t; i++) {
    sol();
  }
}

rl.on('line', function (line) {
  lines.push(line);
});

rl.on('close', function () {
  main();
});
