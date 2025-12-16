fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner560854305;
    st `Sys.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner560854305() {
  () -+> V { reg as_Date:cls, reg as_POSIXlt:cls, reg Sys_time:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    as_Date = ldf `as.Date`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p = prom<V +>{
        Sys_time = ldf `Sys.time`;
        r = dyn Sys_time();
        return r;
      };
      r2 = dyn as_POSIXlt(p);
      return r2;
    };
    r4 = dyn as_Date(p1);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}