#? stdlib
`manova` <- function (...) 
{
    Call <- fcall <- match.call()
    fcall[[1L]] <- quote(stats::aov)
    result <- eval(fcall, parent.frame())
    if (inherits(result, "aovlist")) {
        for (i in seq_along(result)) {
            if (!inherits(result[[i]], "maov")) 
                stop("need multiple responses")
            class(result[[i]]) <- c("manova", oldClass(result[[i]]))
        }
        attr(result, "call") <- Call
    }
    else {
        if (!inherits(result, "maov")) 
            stop("need multiple responses")
        class(result) <- c("manova", oldClass(result))
        result$call <- Call
    }
    result
}

# Examples
## Set orthogonal contrasts.
op <- options(contrasts = c("contr.helmert", "contr.poly"))

## Fake a 2nd response variable
npk2 <- within(npk, foo <- rnorm(24))
( npk2.aov <- manova(cbind(yield, foo) ~ block + N*P*K, npk2) )
summary(npk2.aov)

( npk2.aovE <- manova(cbind(yield, foo) ~  N*P*K + Error(block), npk2) )
summary(npk2.aovE)

