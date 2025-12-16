#? stdlib
`glm.control` <- function (epsilon = 1e-08, maxit = 25, trace = FALSE) 
{
    if (!is.numeric(epsilon) || epsilon <= 0) 
        stop("value of 'epsilon' must be > 0")
    if (!is.numeric(maxit) || maxit <= 0) 
        stop("maximum number of iterations must be > 0")
    list(epsilon = epsilon, maxit = maxit, trace = trace)
}

# Examples\donttest{
### A variation on  example(glm) :

## Annette Dobson's example ...
counts <- c(18,17,15,20,10,20,25,13,12)
outcome <- gl(3,1,9)
treatment <- gl(3,3)
oo <- options(digits = 12) # to see more when tracing :
glm.D93X <- glm(counts ~ outcome + treatment, family = poisson(),
                trace = TRUE, epsilon = 1e-14)
options(oo)
coef(glm.D93X) # the last two are closer to 0 than in ?glm's  glm.D93
}
