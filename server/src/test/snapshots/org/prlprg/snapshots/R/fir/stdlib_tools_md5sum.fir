fun main() {
  () -+> V { reg r:cls, reg as_vector:cls, reg md5sum:cls, reg dir:cls, reg R_home:cls, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    r = clos inner2977598387;
    st md5sum = r;
    as_vector = ldf `as.vector`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p2 = prom<V +>{
      md5sum = ldf md5sum;
      p1 = prom<V +>{
        dir = ldf dir;
        p = prom<V +>{
          R_home = ldf `R.home`;
          r1 = dyn R_home();
          return r1;
        };
        r3 = dyn dir[, pattern, `full.names`](p, "^COPY", TRUE);
        return r3;
      };
      r5 = dyn md5sum(p1);
      return r5;
    };
    r7 = dyn as_vector(p2);
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    popenv;
    return r7;
  }
}
fun inner2977598387(files) {
  (reg files:*) -+> V { var files:*, reg path_expand:cls, reg files1:*, reg files2:V, reg p:p(V +), reg r1:V, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg C_Rmd5:*, reg C_Rmd6:V, reg files3:*, reg files4:V, reg vargs:dots, reg r4:V, reg p1:p(V +), reg files5:*, reg files6:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st files = files;
    path_expand = ldf `path.expand`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      files1 = ld files;
      files2 = force? files1;
      checkMissing(files2);
      return files2;
    };
    r1 = dyn path_expand(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st files = r1;
    structure = ldf structure;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      sym = ldf `.Call`;
      base = ldf `.Call` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      C_Rmd5 = ld C_Rmd5;
      C_Rmd6 = force? C_Rmd5;
      checkMissing(C_Rmd6);
      files3 = ld files;
      files4 = force? files3;
      checkMissing(files4);
      vargs = dots[files4];
      r4 = `.Call`(C_Rmd6, vargs, <missing>);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym C_Rmd5>, <sym files>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      files5 = ld files;
      files6 = force? files5;
      checkMissing(files6);
      return files6;
    };
    r7 = dyn structure[, names](p1, p2);
    check L3() else D3();
  D3():
    deopt 10 [r7];
  L3():
    popenv;
    return r7;
  }
}