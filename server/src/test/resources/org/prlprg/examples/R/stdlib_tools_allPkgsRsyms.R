#? stdlib
`allPkgsRsyms` <- function (lib.loc = NULL, Ncpus = getOption("Ncpus", 1L), verbose = getOption("verbose")) 
{
    p <- rownames(utils::installed.packages(lib.loc = lib.loc))
    rbind_list(.package_apply(p, pkgRsyms, Ncpus = Ncpus, verbose = verbose))
}
