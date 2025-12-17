fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2820130612;
    st conformToProto = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2820130612(mat, proto) {
  (reg mat:*, reg proto:*) -+> V { var mat:*, var proto:*, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg proto1:*, reg proto2:V, reg r2:I, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg proto3:*, reg proto4:V, reg names:cls, reg r9:V, reg l:*, reg names__:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg proto5:*, reg proto6:V, reg isS4:cls, reg r13:V, reg c:L, reg __:cls, reg r14:V, reg r15:cls, reg ans:*, reg ans1:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg proto7:*, reg proto8:V, reg class:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg as_data_frame:cls, reg ans2:*, reg ans3:V, reg p4:p(V +), reg r23:V |
    mkenv;
    st mat = mat;
    st proto = proto;
    lapply = ldf lapply;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      proto1 = ld proto;
      proto2 = force? proto1;
      checkMissing(proto2);
      r2 = seq_along(proto2);
      goto L0(r2);
    L2():
      r = dyn base(<sym proto>);
      goto L0(r);
    };
    p1 = prom<V +>{
      r4 = clos inner3002224933;
      return r4;
    };
    r6 = dyn lapply(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r6];
  L4():
    st ans = r6;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L0(r8):
    l = ld ans;
    names__ = ldf `names<-`;
    check L9() else D4();
  L5():
    proto3 = ld proto;
    check L7() else D2();
  L6():
    r7 = dyn base1(<sym proto>);
    goto L0(r7);
  D2():
    deopt 8 [proto3];
  D4():
    deopt 13 [r8, l, r8];
  L7():
    proto4 = force? proto3;
    checkMissing(proto4);
    names = ldf names in base;
    r9 = dyn names(proto4);
    check L8() else D3();
  L9():
    r10 = dyn names__(l, NULL, r8);
    check L10() else D5();
  D3():
    deopt 11 [r9];
  D5():
    deopt 15 [r8, r10];
  L8():
    goto L0(r9);
  L10():
    st ans = r10;
    sym2 = ldf isS4;
    base2 = ldf isS4 in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L1(r12):
    c = `as.logical`(r12);
    if c then L15() else L2();
  L11():
    proto5 = ld proto;
    check L13() else D6();
  L12():
    r11 = dyn base2(<sym proto>);
    goto L1(r11);
  D6():
    deopt 19 [proto5];
  L2():
    as_data_frame = ldf `as.data.frame`;
    check L20() else D11();
  L13():
    proto6 = force? proto5;
    checkMissing(proto6);
    isS4 = ldf isS4 in base;
    r13 = dyn isS4(proto6);
    check L14() else D7();
  L15():
    __ = ldf `::`;
    check L16() else D8();
  D7():
    deopt 22 [r13];
  D8():
    deopt 24 [];
  D11():
    deopt 33 [];
  L14():
    goto L1(r13);
  L16():
    r14 = dyn __("methods", "as");
    check L17() else D9();
  L20():
    p4 = prom<V +>{
      ans2 = ld ans;
      ans3 = force? ans2;
      checkMissing(ans3);
      return ans3;
    };
    r23 = dyn as_data_frame[, optional, stringsAsFactors](p4, TRUE, FALSE);
    check L21() else D12();
  D9():
    deopt 27 [r14];
  D12():
    deopt 39 [r23];
  L17():
    checkFun.0(r14);
    r15 = r14 as cls;
    p2 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      return ans1;
    };
    p3 = prom<V +>{
      sym3 = ldf class;
      base3 = ldf class in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      proto7 = ld proto;
      proto8 = force? proto7;
      checkMissing(proto8);
      class = ldf class in base;
      r19 = dyn class(proto8);
      goto L0(r19);
    L2():
      r17 = dyn base3(<sym proto>);
      goto L0(r17);
    };
    r21 = dyn r15(p2, p3);
    check L18() else D10();
  L21():
    popenv;
    return r23;
  D10():
    deopt 31 [r21];
  L18():
    popenv;
    return r21;
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg proto:*, reg proto1:V, reg c:L, reg proto3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r2:V, reg isS4:cls, reg r3:V, reg c1:L, reg __1:cls, reg r4:V, reg r5:cls, reg mat:*, reg mat1:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __2:cls, reg r6:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg proto4:*, reg proto5:V, reg c3:L, reg proto7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __3:cls, reg r10:V, reg class:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg match_fun:cls, reg paste0:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg proto8:*, reg proto9:V, reg c4:L, reg proto11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i7:*, reg i8:V, reg __4:cls, reg r16:V, reg class1:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg p3:p(V +), reg r21:V, reg fun:cls, reg mat4:*, reg mat5:V, reg c5:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i9:*, reg i10:V, reg __5:cls, reg r22:V, reg p4:p(V +), reg r24:V |
    mkenv;
    st i = i;
    sym = ldf isS4;
    base = ldf isS4 in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L11() else L2();
  L3():
    proto = ld proto;
    check L5() else D0();
  L4():
    r = dyn base(<lang `[[`(proto, i)>);
    goto L0(r);
  D0():
    deopt 2 [proto];
  L2():
    match_fun = ldf `match.fun`;
    check L16() else D6();
  L5():
    proto1 = force? proto;
    checkMissing(proto1);
    c = `is.object`(proto1);
    if c then L6() else L7(proto1);
  L11():
    __1 = ldf `::`;
    check L12() else D3();
  D3():
    deopt 10 [];
  D6():
    deopt 19 [];
  L1(dx1):
    isS4 = ldf isS4 in base;
    r3 = dyn isS4(dx1);
    check L10() else D2();
  L6():
    dr = tryDispatchBuiltin.1("[[", proto1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(proto3):
    i1 = ld i;
    check L9() else D1();
  L12():
    r4 = dyn __1("methods", "as");
    check L13() else D4();
  L16():
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        sym2 = ldf class;
        base2 = ldf class in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L2() else L3();
      L0(r15):
        return r15;
      L2():
        proto8 = ld proto;
        proto9 = force? proto8;
        checkMissing(proto9);
        c4 = `is.object`(proto9);
        if c4 then L4() else L5(proto9);
      L3():
        r14 = dyn base2(<lang `[[`(proto, i)>);
        goto L0(r14);
      L1(dx7):
        class1 = ldf class in base;
        r17 = dyn class1(dx7);
        goto L0(r17);
      L4():
        dr6 = tryDispatchBuiltin.1("[[", proto9);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L6() else L5(dr6);
      L5(proto11):
        i7 = ld i;
        i8 = force? i7;
        __4 = ldf `[[` in base;
        r16 = dyn __4(proto11, i8);
        goto L1(r16);
      L6():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L1(dx6);
      };
      r19 = dyn paste0("as.", p2);
      return r19;
    };
    r21 = dyn match_fun(p3);
    check L17() else D7();
  D1():
    deopt 4 [proto3, i1];
  D2():
    deopt 8 [r3];
  D4():
    deopt 13 [r4];
  D7():
    deopt 21 [r21];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    i2 = force? i1;
    __ = ldf `[[` in base;
    r2 = dyn __(proto3, i2);
    goto L1(r2);
  L10():
    goto L0(r3);
  L13():
    checkFun.0(r4);
    r5 = r4 as cls;
    p = prom<V +>{
      mat = ld mat;
      mat1 = force? mat;
      checkMissing(mat1);
      c2 = `is.object`(mat1);
      if c2 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", mat1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      i3 = ld i;
      i4 = force? i3;
      __2 = ldf `[` in base;
      r6 = dyn __2(mat1, <missing>, i4);
      goto L0(r6);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r9):
      return r9;
    L2():
      proto4 = ld proto;
      proto5 = force? proto4;
      checkMissing(proto5);
      c3 = `is.object`(proto5);
      if c3 then L4() else L5(proto5);
    L3():
      r8 = dyn base1(<lang `[[`(proto, i)>);
      goto L0(r8);
    L1(dx5):
      class = ldf class in base;
      r11 = dyn class(dx5);
      goto L0(r11);
    L4():
      dr4 = tryDispatchBuiltin.1("[[", proto5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(proto7):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[[` in base;
      r10 = dyn __3(proto7, i6);
      goto L1(r10);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    r13 = dyn r5(p, p1);
    check L14() else D5();
  L17():
    st fun = r21;
    fun = ldf fun;
    check L18() else D8();
  D5():
    deopt 17 [r13];
  D8():
    deopt 24 [];
  L14():
    popenv;
    return r13;
  L18():
    p4 = prom<V +>{
      mat4 = ld mat;
      mat5 = force? mat4;
      checkMissing(mat5);
      c5 = `is.object`(mat5);
      if c5 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", mat5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      i9 = ld i;
      i10 = force? i9;
      __5 = ldf `[` in base;
      r22 = dyn __5(mat5, <missing>, i10);
      goto L0(r22);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r24 = dyn fun(p4);
    check L19() else D9();
  D9():
    deopt 26 [r24];
  L19():
    popenv;
    return r24;
  }
}