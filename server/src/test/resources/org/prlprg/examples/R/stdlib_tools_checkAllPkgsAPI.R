#? stdlib
`checkAllPkgsAPI` <- function (lib.loc = NULL, priority = NULL, all = FALSE, Ncpus = getOption("Ncpus", 
    1L), verbose = getOption("verbose")) 
{
    p <- rownames(utils::installed.packages(lib.loc = lib.loc, 
        priority = priority))
    checkOne <- function(pkg) {
        data <- checkPkgAPI(pkg, lib.loc = lib.loc, all = all)
        if (!is.null(data)) 
            data$pkg <- rep(pkg, nrow(data))
        data
    }
    val <- do.call(rbind, .package_apply(p, checkOne, Ncpus = Ncpus, 
        verbose = verbose))
    rownames(val) <- NULL
    val
}
