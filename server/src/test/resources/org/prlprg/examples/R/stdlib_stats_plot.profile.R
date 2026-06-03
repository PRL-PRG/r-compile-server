#? stdlib
`plot.profile` <- function (x, ...) 
{
    nulls <- sapply(x, is.null)
    if (all(nulls)) 
        return(NULL)
    x <- x[!nulls]
    nm <- names(x)
    nr <- ceiling(sqrt(length(nm)))
    oldpar <- par(mfrow = c(nr, nr))
    on.exit(par(oldpar))
    for (nm in names(x)) {
        tau <- x[[nm]][[1L]]
        parval <- x[[nm]][[2L]][, nm]
        dev.hold()
        plot(parval, tau, xlab = nm, ylab = "tau", type = "n")
        if (sum(tau == 0) == 1) 
            points(parval[tau == 0], 0, pch = 3)
        splineVals <- spline(parval, tau)
        lines(splineVals$x, splineVals$y)
        dev.flush()
    }
}

# Examples
## see ?profile.glm for another example using glm fits.

## a version of example(profile.nls) from R >= 2.8.0
fm1 <- nls(demand ~ SSasympOrig(Time, A, lrc), data = BOD)
pr1 <- profile(fm1, alphamax = 0.1)
stats:::plot.profile(pr1) ## override dispatch to plot.profile.nls
pairs(pr1) # a little odd since the parameters are highly correlated

## an example from ?nls
x <- -(1:100)/10
y <- 100 + 10 * exp(x / 2) + rnorm(x)/10
nlmod <- nls(y ~  Const + A * exp(B * x), start=list(Const=100, A=10, B=1))
pairs(profile(nlmod))

## example from Dobson (1990) (see ?glm)
counts <- c(18,17,15,20,10,20,25,13,12)
outcome <- gl(3,1,9)
treatment <- gl(3,3)
## this example is only formally a Poisson model. It is really a 
## comparison of 3 multinomials. Only the interaction parameters are of 
## interest.
glm.D93i <- glm(counts ~ outcome * treatment, family = poisson())
pr1 <- profile(glm.D93i)
pr2 <- profile(glm.D93i, which=6:9)
plot(pr1)
plot(pr2)
pairs(pr1)
pairs(pr2)

