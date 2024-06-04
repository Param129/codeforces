use strict;
use warnings;

sub transpose {
    my @mat = @_;
    my $n = @mat;
    my @t;
    for my $i (0 .. $n - 1) {
        for my $j (0 .. $n - 1) {
            $t[$j][$i] = $mat[$i][$j];
        }
    }
    return @t;
}

sub sol {
    my ($n, $m) = split(' ', <STDIN>);
    my @grid1;
    my @grid2;

    for (1 .. $n) {
        push @grid1, [split(' ', <STDIN>)];
    }

    for (1 .. $n) {
        push @grid2, [split(' ', <STDIN>)];
    }

    if ($n == $m) {
        my %stt;
        foreach my $v (@grid1) {
            my $cur = join(',', @$v);
            $stt{$cur} = 1;
        }

        foreach my $v (@grid2) {
            my $cur = join(',', @$v);
            if (!exists $stt{$cur}) {
                print "NO\n";
                return;
            }
        }

        my @transposedGrid1 = transpose(@grid1);
        my @transposedGrid2 = transpose(@grid2);
        %stt = ();

        foreach my $v (@transposedGrid1) {
            my $cur = join(',', @$v);
            $stt{$cur} = 1;
        }

        foreach my $v (@transposedGrid2) {
            my $cur = join(',', @$v);
            if (!exists $stt{$cur}) {
                print "NO\n";
                return;
            }
        }

        print "YES\n";
    } else {
        my %stt;
        foreach my $v (@grid1) {
            my $cur = join(',', @$v);
            $stt{$cur} = 1;
        }

        foreach my $v (@grid2) {
            my $cur = join(',', @$v);
            if (!exists $stt{$cur}) {
                print "NO\n";
                return;
            }
        }

        %stt = ();

        foreach my $j (0 .. $m - 1) {
            my %cur;
            foreach my $i (0 .. $n - 1) {
                $cur{$grid1[$i][$j]} = 1;
            }
            $stt{join(',', keys %cur)} = 1;
        }

        foreach my $j (0 .. $m - 1) {
            my %cur;
            foreach my $i (0 .. $n - 1) {
                $cur{$grid2[$i][$j]} = 1;
            }
            if (!exists $stt{join(',', keys %cur)}) {
                print "NO\n";
                return;
            }
        }

        print "YES\n";
    }
}

sub main {
    my $t = <STDIN>;
    for (1 .. $t) {
        sol();
    }
}

main();

