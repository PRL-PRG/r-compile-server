#? stdlib
`.make_R_license_db_vars` <- function () 
{
    ldb <- R_license_db()
    pos <- which(nzchar(ldb$SSS))
    names(pos) <- ldb$SSS[pos]
    tab_sss <- pos
    has_version <- nzchar(ldb$Version)
    has_abbrev <- nzchar(ldb$Abbrev)
    pos <- which(!has_version)
    names(pos) <- ldb$Name[pos]
    tab_unversioned <- pos
    pos <- which(has_abbrev & !has_version)
    tab_unversioned[ldb$Abbrev[pos]] <- pos
    pos <- which(has_version)
    names(pos) <- ldb$Name[pos]
    tab_versioned_style_A <- split(pos, names(pos))
    tab_versioned_style_B <- pos
    names(tab_versioned_style_B) <- paste(names(pos), ldb$Version[pos])
    pos <- which(has_version & has_abbrev)
    tab_versioned_style_A <- c(tab_versioned_style_A, split(pos, 
        ldb$Abbrev[pos]))
    tab_versioned_style_C <- pos
    names(tab_versioned_style_C) <- sprintf("%s-%s", ldb$Abbrev[pos], 
        ldb$Version[pos])
    operators <- c("<", "<=", ">", ">=", "==", "!=")
    re_numeric_version <- .standard_regexps()$valid_numeric_version
    re_single_version_spec <- paste0("[[:space:]]*", re_or(operators), 
        "[[:space:]]*", re_group(re_numeric_version), "[[:space:]]*")
    re_version_spec <- paste0("\\(", paste0("(", re_single_version_spec, 
        ",)*"), re_single_version_spec, "\\)")
    re_sss <- re_or(names(tab_sss))
    re_unversioned <- re_or(names(tab_unversioned))
    re_versioned_style_A <- paste0(re_or(names(tab_versioned_style_A)), 
        "[[:space:]]*", paste0("(", re_version_spec, ")*"))
    re_versioned_style_B <- re_or(paste0(ldb$Name[has_version], 
        "[[:space:]]+([Vv]ersion[[:space:]]+)?", ldb$Version[has_version]))
    re_versioned_style_C <- re_or(names(tab_versioned_style_C))
    re_license_in_db <- re_or(c(re_sss, re_unversioned, re_versioned_style_A, 
        re_versioned_style_B, re_versioned_style_C))
    re_license_file <- "file LICEN[CS]E"
    re_license_extension <- sprintf("[[:space:]]*\\+[[:space:]]*%s", 
        re_license_file)
    re_component <- re_anchor(re_or(c(sprintf("%s(%s)?", re_license_in_db, 
        re_license_extension), re_license_file, "Unlimited")))
    list(re_component = re_component, re_license_file = re_license_file, 
        re_license_extension = re_license_extension, re_single_version_spec = re_single_version_spec, 
        re_sss = re_sss, re_unversioned = re_unversioned, re_versioned_style_A = re_versioned_style_A, 
        re_versioned_style_B = re_versioned_style_B, re_versioned_style_C = re_versioned_style_C, 
        tab_sss = tab_sss, tab_unversioned = tab_unversioned, 
        tab_versioned_style_A = tab_versioned_style_A, tab_versioned_style_B = tab_versioned_style_B, 
        tab_versioned_style_C = tab_versioned_style_C)
}
