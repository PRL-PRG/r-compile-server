fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner873979305;
    st `.fetch_headers_via_base` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner873979305(urls, verbose, ids) {
  (reg urls:*, reg verbose:*, reg ids:*) -+> V { var urls:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var ids:*, reg ids_isMissing:L, reg ids_orDefault:*, reg urls1:*, reg urls2:V, reg p:p(V +), reg Map:cls, reg r1:cls, reg p1:p(V +), reg urls3:*, reg urls4:V, reg p2:p(V +), reg verbose1:*, reg verbose2:V, reg p3:p(V +), reg ids1:*, reg ids2:V, reg p4:p(V +), reg r6:V |
    mkenv;
    st urls = urls;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    ids_isMissing = missing.0(ids);
    if ids_isMissing then L1() else L2(ids);
  L1():
    p = prom<V +>{
      urls1 = ld urls;
      urls2 = force? urls1;
      checkMissing(urls2);
      return urls2;
    };
    goto L2(p);
  L2(ids_orDefault):
    st ids = ids_orDefault;
    Map = ldf Map;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p1 = prom<V +>{
      r1 = clos inner3478122648;
      return r1;
    };
    p2 = prom<V +>{
      urls3 = ld urls;
      urls4 = force? urls3;
      checkMissing(urls4);
      return urls4;
    };
    p3 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    p4 = prom<V +>{
      ids1 = ld ids;
      ids2 = force? ids1;
      checkMissing(ids2);
      return ids2;
    };
    r6 = dyn Map(p1, p2, p3, p4);
    check L4() else D1();
  D1():
    deopt 6 [r6];
  L4():
    popenv;
    return r6;
  }
}
fun inner3478122648(u, verbose, i) {
  (reg u:*, reg verbose:*, reg i:*) -+> V { var u:*, var verbose:*, var i:*, reg verbose1:*, reg verbose2:V, reg c:L, reg message:cls, reg sprintf:cls, reg i1:*, reg i2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg tryCatch:cls, reg curlGetHeaders:cls, reg u1:*, reg u2:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg identity:*, reg identity1:V, reg p4:p(V +), reg r9:V |
    mkenv;
    st u = u;
    st verbose = verbose;
    st i = i;
    verbose1 = ld verbose;
    check L2() else D0();
  D0():
    deopt 0 [verbose1];
  L2():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c = `as.logical`(verbose2);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    tryCatch = ldf tryCatch;
    check L7() else D3();
  L3():
    message = ldf message;
    check L4() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L4():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        i1 = ld i;
        i2 = force? i1;
        checkMissing(i2);
        return i2;
      };
      r1 = dyn sprintf("processing %s", p);
      return r1;
    };
    r3 = dyn message(p1);
    check L5() else D2();
  L7():
    p3 = prom<V +>{
      curlGetHeaders = ldf curlGetHeaders;
      p2 = prom<V +>{
        u1 = ld u;
        u2 = force? u1;
        checkMissing(u2);
        return u2;
      };
      r6 = dyn curlGetHeaders(p2);
      return r6;
    };
    p4 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r9 = dyn tryCatch[, error](p3, p4);
    check L8() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 13 [r9];
  L5():
    goto L1();
  L8():
    popenv;
    return r9;
  }
}