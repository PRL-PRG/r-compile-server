#? stdlib
`.p.nls.convInfo` <- function (x, digits, show. = getOption("show.nls.convergence", 
    TRUE)) 
{
    if (!is.null(x$convInfo)) 
        with(x$convInfo, {
            if (identical(x$call$algorithm, "port")) 
                cat("\nAlgorithm \"port\", convergence message: ", 
                  stopMessage, "\n", sep = "")
            else {
                if (!isConv || show.) {
                  cat("\nNumber of iterations", if (isConv) 
                    "to convergence:"
                  else "till stop:", finIter, "\nAchieved convergence tolerance:", 
                    format(finTol, digits = digits))
                  cat("\n")
                }
                if (!isConv) {
                  cat("Reason stopped:", stopMessage)
                  cat("\n")
                }
            }
        })
    invisible()
}
