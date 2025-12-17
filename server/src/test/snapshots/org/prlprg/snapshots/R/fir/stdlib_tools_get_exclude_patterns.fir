fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st get_exclude_patterns = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    c = ldf c in base;
    r2 = dyn c("^\\.Rbuildignore$", "(^|/)\\.DS_Store$", "^\\.(RData|Rhistory)$", "~$", "\\.bak$", "\\.swp$", "(^|/)\\.#[^/]*$", "(^|/)#[^/]*#$", "^TITLE$", "^data/00Index$", "^inst/doc/00Index\\.dcf$", "^config\\.(cache|log|status)$", "(^|/)autom4te\\.cache$", "^src/.*\\.d$", "^src/Makedeps$", "^src/so_locations$", "^inst/doc/Rplots\\.(ps|pdf)$");
    check L3() else D0();
  L2():
    r = dyn base("^\\.Rbuildignore$", "(^|/)\\.DS_Store$", "^\\.(RData|Rhistory)$", "~$", "\\.bak$", "\\.swp$", "(^|/)\\.#[^/]*$", "(^|/)#[^/]*#$", "^TITLE$", "^data/00Index$", "^inst/doc/00Index\\.dcf$", "^config\\.(cache|log|status)$", "(^|/)autom4te\\.cache$", "^src/.*\\.d$", "^src/Makedeps$", "^src/so_locations$", "^inst/doc/Rplots\\.(ps|pdf)$");
    goto L0(r);
  D0():
    deopt 20 [r2];
  L3():
    goto L0(r2);
  }
}