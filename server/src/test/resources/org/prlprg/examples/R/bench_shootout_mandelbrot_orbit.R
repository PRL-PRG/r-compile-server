# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/shootout/mandelbrot/mandelbrot.R
# License: BSD-3-Clause, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
# 
# Contributed by Haichuan Wang
# This is a Type I version mandelbrot.
###############################################################################



run<-function(num) {

    bit_num = 0L;
    byte_acc <- 0L;
    iter <- 50;
    limit <- 2.0;
    
    w <- h <- num;
        
    print("P4");
    cat(w,h, "\n");
    bin_con <- rawConnection(raw(0), "wb") # port: was pipe("cat", "wb")
    for(y in 0:(h-1)) {
        for(x in 0:(w-1)){
            Zr <- Zi <- Tr <- Ti <- 0.0;
            Cr <- (2.0*x/w - 1.5); 
            Ci <- (2.0*y/h - 1.0);
        
           for (i in 1:iter){
               if((Tr+Ti > limit*limit)) { break;}
               Zi <- 2.0*Zr*Zi + Ci;
               Zr <- Tr - Ti + Cr;
               Tr <- Zr * Zr;
               Ti <- Zi * Zi;
            }
    
            byte_acc <- (byte_acc * 2L) %% 256L;
            if(Tr+Ti <= limit*limit) {
                if(byte_acc %% 2L == 0L) {
                    byte_acc <- byte_acc + 1L;                
                }
            }
    
            bit_num <- bit_num + 1L;
    
            if(bit_num == 8L) {
                bytes <- as.raw(byte_acc);
                writeBin(bytes, bin_con)
                byte_acc <- 0L;
                bit_num <- 0L;
            }
            else if(x == (w - 1)) {
                
                byte_acc <- (byte_acc* as.integer(2L^(8-w%%8))) %% 256L;
                bytes <- as.raw(byte_acc);
                writeBin(bytes, bin_con)
                byte_acc <- 0L;
                bit_num <- 0L;
            }
        }
    }
    flush(bin_con)
    # port: return the bytes in place of the binary output
    bytes <- rawConnectionValue(bin_con)
    close(bin_con)
    bytes
}

#? benchmark: run(128L)

# warmup
for (i in 1:12) {
  run(8L)
}
