fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner365332699;
    st strextract = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner365332699(pattern, x, perl, useBytes) {
  (reg pattern:*, reg x:*, reg perl:*, reg useBytes:*) -+> V { var pattern:*, var x:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg regexec:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg perl1:*, reg perl2:V, reg p2:p(V +), reg useBytes1:*, reg useBytes2:V, reg p3:p(V +), reg r4:V, reg unlist:cls, reg regmatches:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg m:*, reg m1:V, reg p5:p(V +), reg r7:V, reg p6:p(V +), reg r9:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L0(FALSE) else L0(perl);
  L0(perl_orDefault):
    st perl = perl_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L1(FALSE) else L1(useBytes);
  L1(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    regexec = ldf regexec;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      perl1 = ld perl;
      perl2 = force? perl1;
      checkMissing(perl2);
      return perl2;
    };
    p3 = prom<V +>{
      useBytes1 = ld useBytes;
      useBytes2 = force? useBytes1;
      checkMissing(useBytes2);
      return useBytes2;
    };
    r4 = dyn regexec[, , perl, useBytes](p, p1, p2, p3);
    check L3() else D1();
  D1():
    deopt 8 [r4];
  L3():
    st m = r4;
    unlist = ldf unlist;
    check L4() else D2();
  D2():
    deopt 11 [];
  L4():
    p6 = prom<V +>{
      regmatches = ldf regmatches;
      p4 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p5 = prom<V +>{
        m = ld m;
        m1 = force? m;
        checkMissing(m1);
        return m1;
      };
      r7 = dyn regmatches(p4, p5);
      return r7;
    };
    r9 = dyn unlist(p6);
    check L5() else D3();
  D3():
    deopt 13 [r9];
  L5():
    popenv;
    return r9;
  }
}