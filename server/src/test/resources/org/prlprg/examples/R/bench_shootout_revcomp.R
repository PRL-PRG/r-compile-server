# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/shootout/reverse-complement/revcomp.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md

run<-function(inputfile) {
	exchange = function (i,j,k,l) {		 
		t=complement[[substr(data[i],j,j)]];
		substr(data[i],j,j)<<-complement[[substr(data[k],l,l)]];
		substr(data[k],l,l)<<-t;
	}
	reverse = function(i,j) {
		if (i+1 >= j){
			print("Empty sequence");
			stop();
		}
		
		fLine=i+1;
		bLine=j-1;
		fChar=1;
		bChar=nchar(data[bLine]);
		while (fLine <= bLine && (fLine != bLine || fChar < bChar)) {
			exchange(fLine,fChar,bLine, bChar);
			fChar=fChar+1;
			if (fChar > nchar(data[fLine])){
				fChar=1;
				fLine=fLine+1;
			}
			bChar=bChar-1;
			if (bChar <= 0){
				bLine = bLine-1;
				bChar = nchar(data[bLine]);
			}
		}
		
	}
	
	complement=list();
	complement[c("A","C","G","T","U","M","R","W","S","Y","K","V","H","D","B","N")]=
			c("T","G","C","A","A","K","Y","W","S","R","M","B","D","H","V","N");
	complement[c("a","c","g","t","u","m","r","w","s","y","k","v","h","d","b","n")]=
			c("T","G","C","A","A","K","Y","W","S","R","M","B","D","H","V","N");
	data=inputfile;  # Port: the argument is the input lines, not a file name (was readLines(inputfile))
	headers=c(1:length(data))[substr(data,1,1)==">"]
	# Port: is.na(headers[1]), not is.na(headers): `||` on a vector is an error in R >= 4.3.
	if (is.na(headers[1]) || ((init<-headers[1]) != 1)) {
		print("File does not start with >");
		stop();
	}
	for (i in headers[2:length(headers)]){
		reverse(init,i);
		init=i;
	}
	reverse(init, as.integer(length(data)+1));
	cat(data, sep='\n');
}

# Port: upstream reads the output of fasta from the file revcomp-input<n>.txt. This function makes
# the same lines (the fasta program of bench_shootout_fasta, without output).
fasta_input <- function(n) {
    last <- 42L
    to_lines <- function(chars) {
        starts <- seq(1L, length(chars), 60L)
        substring(paste(chars, collapse=""), starts, starts + 59L)
    }
    random_lines <- function(probs, syms, count) {
        rs <- double(count)
        for (i in seq_len(count)) {
            last <<- (last * 3877L + 29573L) %% 139968L
            rs[[i]] <- last / 139968
        }
        to_lines(syms[findInterval(rs, cumsum(probs), left.open=TRUE) + 1L])
    }
    alu <- strsplit(paste0(
        "GGCCGGGCGCGGTGGCTCACGCCTGTAATCCCAGCACTTTGG",
        "GAGGCCGAGGCGGGCGGATCACCTGAGGTCAGGAGTTCGAGA",
        "CCAGCCTGGCCAACATGGTGAAACCCCGTCTCTACTAAAAAT",
        "ACAAAAATTAGCCGGGCGTGGTGGCGCGCGCCTGTAATCCCA",
        "GCTACTCGGGAGGCTGAGGCAGGAGAATCGCTTGAACCCGGG",
        "AGGCGGAGGTTGCAGTGAGCCGAGATCGCGCCACTGCACTCC",
        "AGCCTGGGCGACAGAGCGAGACTCCGTCTCAAAAA"), "")[[1]]
    c(">ONE Homo sapiens alu", to_lines(rep_len(alu, 2L * n)),
      ">TWO IUB ambiguity codes",
      random_lines(c(0.27, 0.12, 0.12, 0.27, rep(0.02, 11)), strsplit("acgtBDHKMNRSVWY", "")[[1]], 3L * n),
      ">THREE Homo sapiens frequency",
      random_lines(c(0.3029549426680, 0.1979883004921, 0.1975473066391, 0.3015094502008),
                   c("a", "c", "g", "t"), 5L * n))
}

input <- fasta_input(1500L)
warmup_input <- fasta_input(30L)

#? benchmark: capture.output(run(input))

# warmup
for (i in 1:12) {
  capture.output(run(warmup_input))
}
