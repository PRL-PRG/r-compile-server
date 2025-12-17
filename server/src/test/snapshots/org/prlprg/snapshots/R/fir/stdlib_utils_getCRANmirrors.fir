fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4123334764;
    st getCRANmirrors = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4123334764(all, `local.only`) {
  (reg all:*, reg local_only:*) -+> V { var all:*, reg all_isMissing:L, reg all_orDefault:*, var `local.only`:*, reg local_only_isMissing:L, reg local_only_orDefault:*, reg _getMirrors:cls, reg file_path:cls, reg R_home:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg all1:*, reg all2:V, reg p2:p(V +), reg local_only1:*, reg local_only2:V, reg p3:p(V +), reg r6:V |
    mkenv;
    all_isMissing = missing.0(all);
    if all_isMissing then L0(FALSE) else L0(all);
  L0(all_orDefault):
    st all = all_orDefault;
    local_only_isMissing = missing.0(local_only);
    if local_only_isMissing then L1(FALSE) else L1(local_only);
  L1(local_only_orDefault):
    st `local.only` = local_only_orDefault;
    _getMirrors = ldf `.getMirrors`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r = dyn R_home("doc");
        return r;
      };
      r2 = dyn file_path(p, "CRAN_mirrors.csv");
      return r2;
    };
    p2 = prom<V +>{
      all1 = ld all;
      all2 = force? all1;
      checkMissing(all2);
      return all2;
    };
    p3 = prom<V +>{
      local_only1 = ld `local.only`;
      local_only2 = force? local_only1;
      checkMissing(local_only2);
      return local_only2;
    };
    r6 = dyn _getMirrors[, , all, `local.only`]("https://cran.r-project.org/CRAN_mirrors.csv", p1, p2, p3);
    check L3() else D1();
  D1():
    deopt 8 [r6];
  L3():
    popenv;
    return r6;
  }
}