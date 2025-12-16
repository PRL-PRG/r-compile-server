#? stdlib
`.vinstall_package_descriptions_as_RDS` <- function (dir, packages) 
{
    for (p in unlist(strsplit(packages, "[[:space:]]+"))) {
        meta_dir <- file.path(dir, p, "Meta")
        if (!dir.exists(meta_dir) && !dir.create(meta_dir)) 
            stop(gettextf("cannot open directory '%s'", meta_dir))
        package_info_dcf_file <- file.path(dir, p, "DESCRIPTION")
        package_info_rds_file <- file.path(meta_dir, "package.rds")
        if (file_test("-nt", package_info_rds_file, package_info_dcf_file)) 
            next
        saveRDS(.split_description(.read_description(package_info_dcf_file)), 
            package_info_rds_file)
    }
    invisible()
}
