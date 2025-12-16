#? stdlib
`.tryResumeInterrupt` <- function () 
{
    r <- findRestart("resume")
    if (!is.null(r)) 
        invokeRestart(r)
}
