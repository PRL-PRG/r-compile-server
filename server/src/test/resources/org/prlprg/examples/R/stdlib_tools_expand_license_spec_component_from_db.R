#? stdlib
`expand_license_spec_component_from_db` <- function (x) 
{
    ldb <- R_license_db()
    ldb_vars <- R_license_db_vars()
    .numeric_version_meets_constraints_p <- function(version, 
        constraints) {
        version <- as.numeric_version(version)
        for (term in constraints) {
            re <- ldb_vars$re_single_version_spec
            op <- sub(re, "\\1", term)
            target <- sub(re, "\\2", term)
            if (!do.call(op, list(version, target))) 
                return(FALSE)
        }
        TRUE
    }
    if (x == "Unlimited" || grepl(x, ldb_vars$re_license_file)) 
        return(NULL)
    x <- sub(ldb_vars$re_license_extension, "", x)
    if (grepl(re_anchor(ldb_vars$re_sss), x)) {
        pos <- ldb_vars$tab_sss[x]
        ldb[pos, ]
    }
    else if (grepl(re_anchor(ldb_vars$re_unversioned), x)) {
        pos <- ldb_vars$tab_unversioned[x]
        ldb[pos, ]
    }
    else if (grepl(re <- re_anchor(ldb_vars$re_versioned_style_A), 
        x)) {
        v <- sub(re, "\\2", x)
        x <- sub(re, "\\1", x)
        pos <- ldb_vars$tab_versioned_style_A[[x]]
        entries <- ldb[pos, ]
        v <- sub("[[:space:]]*\\((.*)\\)[[:space:]]*", "\\1", 
            v)
        if (nzchar(v)) {
            constraints <- unlist(strsplit(v, "[[:space:]]*,[[:space:]]*"))
            entries <- entries[vapply(entries$Version, .numeric_version_meets_constraints_p, 
                constraints, FUN.VALUE = NA), ]
        }
        entries
    }
    else if (grepl(re_anchor(ldb_vars$re_versioned_style_B), 
        x)) {
        re <- sprintf("[[:space:]]+([Vv]ersion[[:space:]]+)?(%s)", 
            .standard_regexps()$valid_numeric_version)
        x <- sub(re, " \\2", x)
        pos <- ldb_vars$tab_versioned_style_B[x]
        ldb[pos, ]
    }
    else if (grepl(re_anchor(ldb_vars$re_versioned_style_C), 
        x)) {
        pos <- ldb_vars$tab_versioned_style_C[x]
        ldb[pos, ]
    }
}
