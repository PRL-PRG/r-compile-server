# https://github.com/rbenchmark/benchmarks/blob/9850828078e0858cb55146900afe63e550ed36db/R-benchmark-25/Programmation/att3_5.R
# License: GPL-2+, see server/doc/benchmark-licenses.md
# TODO: Add comment
# 
###############################################################################
# `run` is the timed part of the test in R-benchmark-25.R. The data is built once at top level,
# smaller than upstream; upstream `runs` repeats are dropped.

run <- function(x) {
	Trace <- function(y) {sum(c(y)[1 + 0:(min(dim(y)) - 1) * (dim(y)[1] + 1)], na.rm=FALSE)}
	p <- ncol(x)
	vt <- 1:p                                  # Variables to test
	vr <- NULL                                 # Result: ordered variables
	RV <- 1:p                                  # Result: correlations
	vrt <- NULL
	for (j in 1:p) {                           # loop on the variable number
		Rvmax <- 0
		for (k in 1:(p-j+1)) {                   # loop on the variables
			x2 <- cbind(x, x[,vr], x[,vt[k]])
			R <- cor(x2)                           # Correlations table
			Ryy <- R[1:p, 1:p]
			Rxx <- R[(p+1):(p+j), (p+1):(p+j)]
			Rxy <- R[(p+1):(p+j), 1:p]
			Ryx <- t(Rxy)
			rvt <- Trace(Ryx %*% Rxy) / sqrt(Trace(Ryy %*% Ryy) * Trace(Rxx %*% Rxx)) # RV calculation
			if (rvt > Rvmax) {
				Rvmax <- rvt                         # test of RV
				vrt <- vt[k]                         # temporary held variable
			}
		}
		vr[j] <- vrt                             # Result: variable
		RV[j] <- Rvmax                           # Result: correlation
		vt <- vt[vt!=vr[j]]                      # reidentify variables to test
	}
	list(vr = vr, RV = RV)
}

set.seed(42)
x <- abs(rnorm(35*35)); dim(x) <- c(35, 35)
data <- x
x <- abs(rnorm(4*4)); dim(x) <- c(4, 4)
small <- x

#? benchmark: run(data)

# warmup
for (i in 1:12) {
  run(small)
}
