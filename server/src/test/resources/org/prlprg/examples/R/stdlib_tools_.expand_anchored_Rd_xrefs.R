#? stdlib
`.expand_anchored_Rd_xrefs` <- function (db) 
{
    db <- db[, c("Target", "Anchor"), drop = FALSE]
    anchor <- db[, 2L]
    have_equals <- startsWith(anchor, "=")
    if (any(have_equals)) 
        db[have_equals, ] <- cbind(sub("^=", "", anchor[have_equals]), 
            "")
    anchor <- db[, 2L]
    have_colon <- grepl(":", anchor, fixed = TRUE)
    y <- cbind(T_Package = anchor, T_File = db[, 1L])
    y[have_colon, ] <- cbind(sub("([^:]*):(.*)", "\\1", anchor[have_colon]), 
        sub("([^:]*):(.*)", "\\2", anchor[have_colon]))
    y
}
