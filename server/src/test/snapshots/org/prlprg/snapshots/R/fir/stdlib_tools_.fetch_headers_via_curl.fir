fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3673199276;
    st `.fetch_headers_via_curl` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3673199276(urls, verbose, pool, nobody) {
  (reg urls:*, reg verbose:*, reg pool:*, reg nobody:*) -+> V { var urls:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var pool:*, reg pool_isMissing:L, reg pool_orDefault:*, var nobody:*, reg nobody_isMissing:L, reg nobody_orDefault:*, reg _curl_multi_run_worker:cls, reg urls1:*, reg urls2:V, reg p:p(V +), reg nobody1:*, reg nobody2:V, reg p1:p(V +), reg verbose1:*, reg verbose2:V, reg p2:p(V +), reg pool1:*, reg pool2:V, reg p3:p(V +), reg r4:V, reg vapply:cls, reg out:*, reg out1:V, reg p4:p(V +), reg inherits:*, reg inherits1:V, reg p5:p(V +), reg r7:V, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg ind:*, reg ind1:V, reg any:cls, reg r11:V, reg c:L, reg lapply:cls, reg out2:*, reg out3:V, reg c1:L, reg out5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r12:V, reg p6:p(V +), reg r14:cls, reg p7:p(V +), reg r16:V, reg l:*, reg c2:L, reg r18:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r20:V, reg dx3:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r21:V, reg out6:*, reg out7:V |
    mkenv;
    st urls = urls;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    pool_isMissing = missing.0(pool);
    if pool_isMissing then L1(NULL) else L1(pool);
  L1(pool_orDefault):
    st pool = pool_orDefault;
    nobody_isMissing = missing.0(nobody);
    if nobody_isMissing then L2(TRUE) else L2(nobody);
  L2(nobody_orDefault):
    st nobody = nobody_orDefault;
    _curl_multi_run_worker = ldf `.curl_multi_run_worker`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      urls1 = ld urls;
      urls2 = force? urls1;
      checkMissing(urls2);
      return urls2;
    };
    p1 = prom<V +>{
      nobody1 = ld nobody;
      nobody2 = force? nobody1;
      checkMissing(nobody2);
      return nobody2;
    };
    p2 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    p3 = prom<V +>{
      pool1 = ld pool;
      pool2 = force? pool1;
      checkMissing(pool2);
      return pool2;
    };
    r4 = dyn _curl_multi_run_worker(p, p1, p2, p3);
    check L8() else D1();
  D1():
    deopt 6 [r4];
  L8():
    st out = r4;
    vapply = ldf vapply;
    check L9() else D2();
  D2():
    deopt 9 [];
  L9():
    p4 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    p5 = prom<V +>{
      inherits = ld inherits;
      inherits1 = force? inherits;
      checkMissing(inherits1);
      return inherits1;
    };
    r7 = dyn vapply(p4, p5, NA_LGL, "error");
    check L10() else D3();
  D3():
    deopt 14 [r7];
  L10():
    r8 = `!`(r7);
    st ind = r8;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L3(r10):
    c = `as.logical`(r10);
    if c then L15() else L4();
  L11():
    ind = ld ind;
    check L13() else D4();
  L12():
    r9 = dyn base(<sym ind>);
    goto L3(r9);
  D4():
    deopt 19 [ind];
  L4():
    goto L6();
  L6():
    out6 = ld out;
    check L23() else D9();
  L13():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r11 = dyn any(ind1);
    check L14() else D5();
  L15():
    lapply = ldf lapply;
    check L16() else D6();
  D5():
    deopt 22 [r11];
  D6():
    deopt 24 [];
  D9():
    deopt 35 [out6];
  L14():
    goto L3(r11);
  L16():
    p6 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      c1 = `is.object`(out3);
      if c1 then L1() else L2(out3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", out3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(out5):
      ind2 = ld ind;
      ind3 = force? ind2;
      __ = ldf `[` in base;
      r12 = dyn __(out5, ind3);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p7 = prom<V +>{
      r14 = clos inner2501545716;
      return r14;
    };
    r16 = dyn lapply(p6, p7);
    check L17() else D7();
  L23():
    out7 = force? out6;
    checkMissing(out7);
    popenv;
    return out7;
  D7():
    deopt 27 [r16];
  L17():
    l = ld out;
    c2 = `is.object`(l);
    if c2 then L18() else L19(r16, l);
  L5(r20, dx3):
    st out = dx3;
    goto L6();
  L18():
    dr2 = tryDispatchBuiltin.0("[<-", l, r16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(r16, dr2);
  L19(r18, l2):
    ind4 = ld ind;
    check L21() else D8();
  D8():
    deopt 29 [r18, l2, r16, ind4];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(r16, dx2);
  L21():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r21 = dyn ___(l2, r16, ind5);
    goto L5(r18, r21);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg strsplit:cls, reg rawToChar:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg c1:L, reg r6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r7:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg l:*, reg attr__:cls, reg r9:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    strsplit = ldf strsplit;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      rawToChar = ldf rawToChar;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        c = `is.object`(x2);
        if c then L1() else L2(x2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x4):
        r = `$`(x4, <sym headers>);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r2 = dyn rawToChar(p);
      return r2;
    };
    r4 = dyn strsplit[, , perl](p1, "(?<=\r\n)", TRUE);
    check L2() else D1();
  D1():
    deopt 6 [r4];
  L2():
    c1 = `is.object`(r4);
    if c1 then L3() else L4(r4);
  L0(dx3):
    st y = dx3;
    x5 = ld x;
    check L6() else D2();
  L3():
    dr2 = tryDispatchBuiltin.1("[[", r4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L5() else L4(dr2);
  L4(r6):
    __ = ldf `[[` in base;
    r7 = dyn __(r6, 1);
    goto L0(r7);
  D2():
    deopt 11 [x5];
  L5():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L6():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L8() else L9(x6);
  L7(dx5):
    l = ld y;
    attr__ = ldf `attr<-`;
    check L11() else D3();
  L8():
    dr4 = tryDispatchBuiltin.1("$", x6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L10() else L9(dr4);
  L9(x8):
    r8 = `$`(x8, <sym status_code>);
    goto L7(r8);
  D3():
    deopt 15 [dx5, l, dx5];
  L10():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L11():
    r9 = dyn attr__(l, NULL, "status", dx5);
    check L12() else D4();
  D4():
    deopt 18 [dx5, r9];
  L12():
    st y = r9;
    y = ld y;
    check L13() else D5();
  D5():
    deopt 20 [y];
  L13():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}