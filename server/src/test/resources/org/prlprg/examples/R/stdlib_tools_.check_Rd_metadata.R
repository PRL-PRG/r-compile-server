#? stdlib
`.check_Rd_metadata` <- function (package, dir, lib.loc = NULL) 
{
    out <- structure(list(), class = "check_Rd_metadata")
    meta <- if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
        rds <- file.path(dir, "Meta", "Rd.rds")
        if (file_test("-f", rds)) {
            readRDS(rds)
        }
    }
    else {
        package <- .get_package_metadata(dir)["Package"]
        Rd_contents(Rd_db(dir = dir))
    }
    if (NROW(meta) == 0L) 
        return(out)
    files <- meta$File
    names <- meta$Name
    aliases <- meta$Aliases
    doctypes <- meta$Type
    files_grouped_by_names <- split(files, names)
    files_with_duplicated_names <- files_grouped_by_names[lengths(files_grouped_by_names) > 
        1L]
    if (length(files_with_duplicated_names)) 
        out$files_with_duplicated_names <- files_with_duplicated_names
    nAliases <- lengths(aliases)
    files_grouped_by_aliases <- split(rep.int(files, nAliases), 
        unlist(aliases, use.names = FALSE))
    files_with_duplicated_aliases <- files_grouped_by_aliases[lengths(files_grouped_by_aliases) > 
        1L]
    if (length(files_with_duplicated_aliases)) 
        out$files_with_duplicated_aliases <- files_with_duplicated_aliases
    files_without_aliases <- files[nAliases == 0L]
    if (length(files_without_aliases)) 
        out$files_without_aliases <- files_without_aliases
    aliases <- unlist(aliases)
    names(aliases) <- rep.int(files, nAliases)
    all_package_aliases <- aliases[endsWith(aliases, "-package")]
    the_package_alias <- sprintf("%s-package", package)
    if (the_package_alias %in% all_package_aliases) {
        all_package_aliases <- all_package_aliases[tolower(all_package_aliases) != 
            tolower(the_package_alias)]
    }
    if (length(all_package_aliases)) 
        out$files_with_bad_package_aliases <- split(all_package_aliases, 
            names(all_package_aliases))
    out
}
