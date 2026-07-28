#? stdlib
`changedFiles` <- function (before, after, path = before$path, timestamp = before$timestamp, 
    check.file.info = c("size", "isdir", "mode", "mtime"), md5sum = before$md5sum, 
    digest = before$digest, full.names = before$full.names, ...) 
{
    stopifnot(inherits(before, "fileSnapshot"))
    if (missing(after)) {
        get.file.info <- length(check.file.info) > 0 && before$file.info
        args <- before$args
        newargs <- list(...)
        args[names(newargs)] <- newargs
        after <- do.call(fileSnapshot, c(list(path = path, timestamp = NULL, 
            file.info = get.file.info, md5sum = md5sum, digest = digest, 
            full.names = full.names), args))
    }
    stopifnot(inherits(after, "fileSnapshot"))
    preinfo <- before$info
    postinfo <- after$info
    prenames <- rownames(preinfo)
    postnames <- rownames(postinfo)
    added <- setdiff(postnames, prenames)
    deleted <- setdiff(prenames, postnames)
    common <- intersect(prenames, postnames)
    if (!before$file.info || !after$file.info) 
        check.file.info <- NULL
    if (length(check.file.info)) {
        pre <- preinfo[common, check.file.info, drop = FALSE]
        post <- postinfo[common, check.file.info, drop = FALSE]
        changes <- pre != post
    }
    else changes <- matrix(logical(0), nrow = length(common), 
        ncol = 0, dimnames = list(common, character(0)))
    if (length(timestamp)) 
        if (file.exists(timestamp)) {
            fullnames <- if (after$full.names) 
                common
            else file.path(after$path, common)
            changes <- cbind(changes, Newer = file_test("-nt", 
                fullnames, timestamp))
        }
        else warning("Timestamp file no longer exists.")
    if (md5sum) {
        pre <- preinfo[common, "md5sum"]
        post <- postinfo[common, "md5sum"]
        changes <- cbind(changes, md5sum = pre != post)
    }
    if (!is.null(digest)) {
        pre <- preinfo[common, "digest"]
        post <- postinfo[common, "digest"]
        changes <- cbind(changes, digest = pre != post)
    }
    changed <- rownames(changes)[rowSums(changes, na.rm = TRUE) > 
        0]
    structure(list(added = added, deleted = deleted, changed = changed, 
        unchanged = setdiff(common, changed), changes = changes), 
        class = "changedFiles")
}

# Examples
# Create some files in a temporary directory
dir <- tempfile()
dir.create(dir)
writeBin(1L, file.path(dir, "file1"))
writeBin(2L, file.path(dir, "file2"))
dir.create(file.path(dir, "dir"))

# Take a snapshot
snapshot <- fileSnapshot(dir, timestamp = tempfile("timestamp"), md5sum=TRUE)
Sys.sleep(.01)  
# Change one of the files.
writeBin(3L:4L, file.path(dir, "file2"))

# Display the detected changes.  We may or may not see mtime change...
changedFiles(snapshot)
changedFiles(snapshot)$changes

