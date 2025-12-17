fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3408313685;
    st read_CRAN_object = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3408313685(cran, path) {
  (reg cran:*, reg path:*) -+> V { var cran:*, var path:*, reg gzcon:cls, reg url:cls, reg sprintf:cls, reg cran1:*, reg cran2:V, reg p:p(V +), reg path1:*, reg path2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg on_exit:cls, reg r9:V, reg readRDS:cls, reg con:*, reg con1:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st cran = cran;
    st path = path;
    gzcon = ldf gzcon;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p3 = prom<V +>{
      url = ldf url;
      p2 = prom<V +>{
        sprintf = ldf sprintf;
        p = prom<V +>{
          cran1 = ld cran;
          cran2 = force? cran1;
          checkMissing(cran2);
          return cran2;
        };
        p1 = prom<V +>{
          path1 = ld path;
          path2 = force? path1;
          checkMissing(path2);
          return path2;
        };
        r2 = dyn sprintf("%s/%s", p, p1);
        return r2;
      };
      r4 = dyn url[, open](p2, "rb");
      return r4;
    };
    r6 = dyn gzcon(p3);
    check L2() else D1();
  D1():
    deopt 3 [r6];
  L2():
    st con = r6;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    readRDS = ldf readRDS;
    check L5() else D2();
  L3():
    on_exit = ldf `on.exit` in base;
    r9 = dyn on_exit(<lang close(con)>);
    goto L0();
  L4():
    r7 = dyn base(<lang close(con)>);
    goto L0();
  D2():
    deopt 9 [];
  L5():
    p4 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r11 = dyn readRDS(p4);
    check L6() else D3();
  D3():
    deopt 11 [r11];
  L6():
    popenv;
    return r11;
  }
}