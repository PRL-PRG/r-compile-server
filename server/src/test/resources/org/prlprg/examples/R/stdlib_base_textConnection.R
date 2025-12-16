#? stdlib
`textConnection` <- function (object, open = "r", local = FALSE, name = deparse1(substitute(object)), 
    encoding = c("", "bytes", "UTF-8")) 
{
    env <- if (local) 
        parent.frame()
    else .GlobalEnv
    type <- match(match.arg(encoding), c("", "bytes", "UTF-8"))
    if (!(is.character(name) && length(name) == 1)) 
        stop("'name' must be a single character string")
    .Internal(textConnection(name, object, open, env, type))
}

# Examples
zz <- textConnection(LETTERS)
readLines(zz, 2)
scan(zz, "", 4)
pushBack(c("aa", "bb"), zz)
scan(zz, "", 4)
close(zz)

zz <- textConnection("foo", "w")
writeLines(c("testit1", "testit2"), zz)
cat("testit3 ", file = zz)
isIncomplete(zz)
cat("testit4\n", file = zz)
isIncomplete(zz)
close(zz)
foo

\donttest{# capture R output: use part of example from help(lm)
zz <- textConnection("foo", "w")
ctl <- c(4.17, 5.58, 5.18, 6.11, 4.5, 4.61, 5.17, 4.53, 5.33, 5.14)
trt <- c(4.81, 4.17, 4.41, 3.59, 5.87, 3.83, 6.03, 4.89, 4.32, 4.69)
group <- gl(2, 10, 20, labels = c("Ctl", "Trt"))
weight <- c(ctl, trt)
sink(zz)
anova(lm.D9 <- lm(weight ~ group))
cat("\nSummary of Residuals:\n\n")
summary(resid(lm.D9))
sink()
close(zz)
cat(foo, sep = "\n")
}

