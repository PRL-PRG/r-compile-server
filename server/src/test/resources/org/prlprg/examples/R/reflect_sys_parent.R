#? [opt.fir2c.opt.eval]crashes("attempted reflection in environment-elided closure")
f <- function(b) {
  if (b) {
    sys.parent()
    1L
  } else {
    0L
  }
}

r <- 0L
for (i in 1:11) {
  r <- r + f(FALSE)
}
r + f(TRUE)
