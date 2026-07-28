#? stdlib
`eapply` <- function (env, FUN, ..., all.names = FALSE, USE.NAMES = TRUE) 
{
    FUN <- match.fun(FUN)
    .Internal(eapply(env, FUN, all.names, USE.NAMES))
}

# Examples
require(stats)

env <- new.env(hash = FALSE) # so the order is fixed
env$a <- 1:10
env$beta <- exp(-3:3)
env$logic <- c(TRUE, FALSE, FALSE, TRUE)
# what have we there?
utils::ls.str(env)

# compute the mean for each list element
       eapply(env, mean)
unlist(eapply(env, mean, USE.NAMES = FALSE))

# median and quartiles for each element (making use of "..." passing):
eapply(env, quantile, probs = 1:3/4)
eapply(env, quantile)

