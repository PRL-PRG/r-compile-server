#? stdlib
`.write_repository_package_db` <- function (db, dir, rds_compress) 
{
    np <- NROW(db)
    if (np > 0L) {
        db[!is.na(db) & (db == "")] <- NA_character_
        con <- file(file.path(dir, "PACKAGES"), "wt")
        write.dcf(db, con)
        close(con)
        con <- gzfile(file.path(dir, "PACKAGES.gz"), "wt")
        write.dcf(db, con)
        close(con)
        rownames(db) <- db[, "Package"]
        saveRDS(db, file.path(dir, "PACKAGES.rds"), compress = rds_compress)
    }
    invisible(np)
}
