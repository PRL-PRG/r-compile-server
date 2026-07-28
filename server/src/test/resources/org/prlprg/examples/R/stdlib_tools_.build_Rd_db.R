#? stdlib
`.build_Rd_db` <- function (dir = NULL, files = NULL, encoding = "unknown", db_file = NULL, 
    stages = c("build", "install"), os = .OStype(), step = 3L, 
    built_file = NULL, later_file = NULL, macros = character()) 
{
    if (!is.null(dir)) {
        dir <- file_path_as_absolute(dir)
        macros0 <- loadPkgRdMacros(dir)
        man_dir <- file.path(dir, "man")
        if (!dir.exists(man_dir)) 
            return(structure(list(), names = character()))
        if (is.null(files)) 
            files <- list_files_with_type(man_dir, "docs", OS_subdirs = os)
        encoding <- .get_package_metadata(dir, FALSE)["Encoding"]
        if (is.na(encoding)) 
            encoding <- "unknown"
    }
    else if (!is.null(files)) 
        macros0 <- initialRdMacros()
    else stop("you must specify 'dir' or 'files'")
    if (length(macros)) {
        con <- textConnection(macros)
        macros <- loadRdMacros(con, macros0)
        close(con)
    }
    else {
        macros <- macros0
    }
    .fetch_Rd_object <- function(f, stages) {
        Rd <- prepare_Rd(f, encoding = encoding, defines = os, 
            stages = stages, warningCalls = FALSE, stage2 = step > 
                1L, stage3 = step > 2L, macros = macros)
        structure(Rd, prepared = step)
    }
    if (!is.null(db_file) && file_test("-f", db_file)) {
        db <- fetchRdDB(sub("\\.rdx$", "", db_file))
        db_names <- names(db) <- readRDS(file.path(dirname(db_file), 
            "paths.rds"))
        indf <- (files %in% db_names) & file_test("-nt", files, 
            db_file)
        indf <- indf | (files %notin% db_names)
        ind <- (db_names %notin% files) | (db_names %in% files[indf])
        if (any(ind)) 
            db <- db[!ind]
        files <- files[indf]
    }
    else db <- list()
    basenames <- basename(files)
    names(files) <- files
    files <- as.list(files)
    if (!is.null(built_file) && file_test("-f", built_file)) {
        built <- readRDS(built_file)
        names_built <- names(built)
        if ("install" %in% stages) {
            this_os <- grepl(paste0("^", os, "/"), names_built)
            name_only <- basename(names_built[this_os])
            built[name_only] <- built[this_os]
            some_os <- grepl("/", names(built))
            built <- built[!some_os]
            names_built <- names(built)
        }
        built[names_built %notin% basenames] <- NULL
        if (length(built)) {
            which <- match(names(built), basenames)
            if (all(file_test("-nt", built_file, names(files)[which]))) {
                files[which] <- built
            }
        }
    }
    if ("later" %in% stages) {
        if (!is.null(later_file) && file_test("-f", later_file)) {
            later <- readRDS(later_file)
            names_later <- names(later)
            later[names_later %notin% basenames] <- NULL
            if (length(later)) {
                which <- match(names(later), basenames)
                if (all(file_test("-nt", later_file, names(files)[which]))) {
                  files[which] <- later
                }
            }
        }
        stages <- stages[stages != "later"]
    }
    if (length(files)) {
        db1 <- lapply(files, .fetch_Rd_object, stages)
        names(db1) <- names(files)
        db <- c(db, db1)
    }
    db
}
