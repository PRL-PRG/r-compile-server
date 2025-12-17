fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st CRAN_baseurl_for_src_area = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg Sys_getenv:cls, reg _get_CRAN_repository_URL:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    Sys_getenv = ldf `Sys.getenv`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      _get_CRAN_repository_URL = ldf `.get_CRAN_repository_URL`;
      r = dyn _get_CRAN_repository_URL();
      return r;
    };
    r2 = dyn Sys_getenv("R_CRAN_SRC", p);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}