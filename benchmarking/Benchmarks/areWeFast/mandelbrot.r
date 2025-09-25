# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

lim <- 2
iter <- 50

mandelbrot <- function(size) {
    sum = 0
    byteAcc = 0
    bitNum  = 0

    y = 0

    while (y < size) {
      ci = (2.0 * y / size) - 1.0 
      x = 0

      while (x < size) {
        zr   = 0.0
        zrzr = 0.0
        zi   = 0.0
        zizi = 0.0
        cr = (2.0 * x / size) - 1.5
        
        z = 0
        notDone = TRUE
        escape = 0
        while (notDone && (z < 50)) {
          zr = zrzr - zizi + cr
          zi = 2.0 * zr * zi + ci

          # preserve recalculation
          zrzr = zr * zr
          zizi = zi * zi

          if ((zrzr + zizi) > 4.0) {
            notDone = FALSE
            escape  = 1
          }
          z = z + 1
        }

        byteAcc = bitwShiftL(byteAcc, 1) + escape

        bitNum = bitNum + 1

        # Code is very similar for these cases, but using separate blocks
        # ensures we skip the shifting when it's unnecessary, which is most cases.
        if (bitNum == 8) {
          sum = bitwXor(sum, byteAcc)
          byteAcc = 0
          bitNum  = 0
        } else if (x == (size - 1)) {
          byteAcc = bitwShiftL(byteAcc, 8 - bitNum)
          sum = bitwXor(sum, byteAcc)
          byteAcc = 0
          bitNum  = 0
        }
        x = x + 1
      }
      y = y + 1
    }
    return (sum);
}

execute <- function(n = 3000L) {
    mandelbrot(n)
}

verifyResult <- function(result, innerIterations) {
    if (innerIterations == 500) { return (result == 191) }
    if (innerIterations == 750) { return (result == 50)  }
    if (innerIterations ==   1) { return (result == 128) }

    write(paste(paste("No verification result for", innerIterations), "found\n"), stdout())
    write(paste(paste("Result is:", result), " \n"), stdout())
    return (FALSE);
  }

innerBenchmarkLoop.mandelbrot <- function(class, iterations) {
  if (!verifyResult(execute(iterations), iterations)) {
      return(FALSE)
  }
  return(TRUE)
}