fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2193460815;
    st `se.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2193460815(object, `dn.proj`, `dn.strata`, factors, mf, efficiency, n, type, `...`) {
  (reg object:*, reg dn_proj:*, reg dn_strata:*, reg factors:*, reg mf:*, reg efficiency:*, reg n:*, reg type:*, reg ddd:dots) -+> V { var object:*, var `dn.proj`:*, var `dn.strata`:*, var factors:*, var mf:*, var efficiency:*, var n:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var `...`:dots?, reg type1:*, reg type2:V, reg r:V, reg c:L, reg stop:cls, reg gettextf:cls, reg type3:*, reg type4:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg sapply:cls, reg object1:*, reg object2:V, reg p2:p(V +), reg r7:cls, reg p3:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg n1:*, reg n2:V, reg length:cls, reg r14:V, reg vector:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg n3:*, reg n4:V, reg names:cls, reg r18:V, reg l:*, reg names__:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg n5:*, reg n6:V, reg names1:cls, reg r22:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg RSS:*, reg RSS1:V, reg c2:L, reg i6:I, reg RSS3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg dn_strata1:*, reg dn_strata2:V, reg c3:L, reg i10:I, reg RSS5:V, reg dn_strata4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i12:I, reg RSS7:V, reg dx3:V, reg dn_proj1:*, reg dn_proj2:V, reg c4:L, reg i14:I, reg RSS9:V, reg dn_strata6:V, reg dn_proj4:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i16:I, reg RSS11:V, reg dn_strata8:V, reg dx5:V, reg i17:*, reg i18:V, reg __:cls, reg r23:V, reg __1:cls, reg r24:V, reg __2:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg i21:I, reg r27:V, reg efficiency1:*, reg efficiency2:V, reg any:cls, reg r28:V, reg c5:L, reg sse:*, reg sse1:V, reg efficiency3:*, reg efficiency4:V, reg c6:L, reg i25:I, reg sse3:V, reg efficiency6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i27:I, reg sse5:V, reg dx7:V, reg i28:*, reg i29:V, reg __3:cls, reg r29:V, reg r30:V, reg i30:I, reg as_vector:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg sse6:*, reg sse7:V, reg n7:*, reg n8:V, reg c7:L, reg sse9:V, reg n10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg sse11:V, reg dx9:V, reg i31:*, reg i32:V, reg __4:cls, reg r34:V, reg r35:V, reg r36:V, reg p4:p(V +), reg r38:V, reg l2:*, reg c8:L, reg i34:I, reg r40:V, reg l4:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i36:I, reg dx11:V, reg i37:*, reg i38:V, reg ____:cls, reg r43:V, reg l5:*, reg c9:L, reg i40:I, reg r46:S, reg l8:*, reg r47:S, reg l9:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i42:I, reg r50:S, reg l11:*, reg r51:S, reg dx13:V, reg i43:*, reg i44:V, reg __5:cls, reg r52:V, reg class__:cls, reg r53:V, reg c10:L, reg i46:I, reg r55:S, reg l13:*, reg dr14:V, reg dc7:L, reg dx14:V, reg i48:I, reg dx15:V, reg i49:*, reg i50:V, reg ____1:cls, reg r58:V, reg type5:*, reg type6:V, reg l14:*, reg attr__:cls, reg r59:V, reg res:*, reg res1:V |
    mkenv;
    st object = object;
    st `dn.proj` = dn_proj;
    st `dn.strata` = dn_strata;
    st factors = factors;
    st mf = mf;
    st efficiency = efficiency;
    st n = n;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("diff.means") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    st `...` = ddd;
    type1 = ld type;
    check L19() else D0();
  D0():
    deopt 0 [type1];
  L19():
    type2 = force? type1;
    checkMissing(type2);
    r = `!=`(type2, "effects");
    c = `as.logical`(r);
    if c then L20() else L1();
  L1():
    goto L2();
  L2():
    sapply = ldf sapply;
    check L24() else D3();
  L20():
    stop = ldf stop;
    check L21() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 13 [];
  L21():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        type3 = ld type;
        type4 = force? type3;
        checkMissing(type4);
        return type4;
      };
      r2 = dyn gettextf("SEs for type '%s' are not yet implemented", p);
      return r2;
    };
    r4 = dyn stop[, domain](p1, NA_LGL);
    check L22() else D2();
  L24():
    p2 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p3 = prom<V +>{
      r7 = clos inner2501545716;
      return r7;
    };
    r9 = dyn sapply(p2, p3);
    check L25() else D4();
  D2():
    deopt 9 [r4];
  D4():
    deopt 16 [r9];
  L22():
    goto L2();
  L25():
    st RSS = r9;
    sym = ldf vector;
    base = ldf vector in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L3(r11):
    st res = r11;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L26():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L27():
    r10 = dyn base[length, mode](<lang length(n)>, "list");
    goto L3(r10);
  L4(r13):
    vector = ldf vector in base;
    r15 = dyn vector("list", r13);
    check L32() else D7();
  L5(r17):
    l = ld res;
    names__ = ldf `names<-`;
    check L37() else D10();
  L28():
    n1 = ld n;
    check L30() else D5();
  L29():
    r12 = dyn base1(<sym n>);
    goto L4(r12);
  L33():
    n3 = ld n;
    check L35() else D8();
  L34():
    r16 = dyn base2(<sym n>);
    goto L5(r16);
  D5():
    deopt 23 [n1];
  D7():
    deopt 28 [r15];
  D8():
    deopt 32 [n3];
  D10():
    deopt 37 [r17, l, r17];
  L30():
    n2 = force? n1;
    checkMissing(n2);
    length = ldf length in base;
    r14 = dyn length(n2);
    check L31() else D6();
  L32():
    goto L3(r15);
  L35():
    n4 = force? n3;
    checkMissing(n4);
    names = ldf names in base;
    r18 = dyn names(n4);
    check L36() else D9();
  L37():
    r19 = dyn names__(l, NULL, r17);
    check L38() else D11();
  D6():
    deopt 26 [r14];
  D9():
    deopt 35 [r18];
  D11():
    deopt 39 [r17, r19];
  L31():
    goto L4(r14);
  L36():
    goto L5(r18);
  L38():
    st res = r19;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L6(r21):
    s = toForSeq(r21);
    l1 = length(s);
    i = 0;
    goto L7(i);
  L39():
    n5 = ld n;
    check L41() else D12();
  L40():
    r20 = dyn base3(<sym n>);
    goto L6(r20);
  D12():
    deopt 43 [n5];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l1, i2);
    if c1 then L43() else L18();
  L41():
    n6 = force? n5;
    checkMissing(n6);
    names1 = ldf names in base;
    r22 = dyn names1(n6);
    check L42() else D13();
  D13():
    deopt 46 [r22];
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    RSS = ld RSS;
    check L44() else D14();
  L42():
    goto L6(r22);
  L43():
    type5 = ld type;
    check L85() else D30();
  D14():
    deopt 47 [i2, RSS];
  D30():
    deopt 102 [type5];
  L44():
    RSS1 = force? RSS;
    checkMissing(RSS1);
    c2 = `is.object`(RSS1);
    if c2 then L45() else L46(i2, RSS1);
  L85():
    type6 = force? type5;
    checkMissing(type6);
    l14 = ld res;
    attr__ = ldf `attr<-`;
    check L86() else D31();
  D31():
    deopt 105 [type6, l14, type6];
  L8(i8, dx1):
    st sse = dx1;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L45():
    dr = tryDispatchBuiltin.1("[[", RSS1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(i2, dr);
  L46(i6, RSS3):
    dn_strata1 = ld `dn.strata`;
    check L48() else D15();
  L86():
    r59 = dyn attr__(l14, NULL, "type", type6);
    check L87() else D32();
  D15():
    deopt 49 [i6, RSS3, dn_strata1];
  D32():
    deopt 108 [type6, r59];
  L11(i21, r27):
    c5 = `as.logical`(r27);
    if c5 then L61() else L12();
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(i2, dx);
  L48():
    dn_strata2 = force? dn_strata1;
    checkMissing(dn_strata2);
    c3 = `is.object`(dn_strata2);
    if c3 then L49() else L50(i6, RSS3, dn_strata2);
  L57():
    efficiency1 = ld efficiency;
    check L59() else D18();
  L58():
    r26 = dyn base4(<sym efficiency>);
    goto L11(i8, r26);
  L87():
    st res = r59;
    res = ld res;
    check L88() else D33();
  D18():
    deopt 61 [i8, efficiency1];
  D33():
    deopt 110 [res];
  L9(i12, RSS7, dx3):
    __2 = ldf `[[` in base;
    r25 = dyn __2(RSS7, dx3);
    goto L8(i12, r25);
  L12():
    goto L14(i21);
  L14(i30):
    as_vector = ldf `as.vector`;
    check L69() else D23();
  L49():
    dr2 = tryDispatchBuiltin.1("[", dn_strata2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(i6, RSS3, dr2);
  L50(i10, RSS5, dn_strata4):
    dn_proj1 = ld `dn.proj`;
    check L52() else D16();
  L59():
    efficiency2 = force? efficiency1;
    checkMissing(efficiency2);
    any = ldf any in base;
    r28 = dyn any(efficiency2);
    check L60() else D19();
  L61():
    sse = ld sse;
    check L62() else D20();
  L88():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D16():
    deopt 51 [i10, RSS5, dn_strata4, dn_proj1];
  D19():
    deopt 64 [i8, r28];
  D20():
    deopt 65 [i21, sse];
  D23():
    deopt 76 [i30];
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(i6, RSS3, dx2);
  L52():
    dn_proj2 = force? dn_proj1;
    checkMissing(dn_proj2);
    c4 = `is.object`(dn_proj2);
    if c4 then L53() else L54(i10, RSS5, dn_strata4, dn_proj2);
  L60():
    goto L11(i8, r28);
  L62():
    sse1 = force? sse;
    checkMissing(sse1);
    efficiency3 = ld efficiency;
    check L63() else D21();
  L69():
    p4 = prom<V +>{
      sym5 = ldf sqrt;
      base5 = ldf sqrt in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r33):
      return r33;
    L2():
      sse6 = ld sse;
      sse7 = force? sse6;
      checkMissing(sse7);
      n7 = ld n;
      n8 = force? n7;
      checkMissing(n8);
      c7 = `is.object`(n8);
      if c7 then L4() else L5(sse7, n8);
    L3():
      r32 = dyn base5(<lang `/`(sse, `[`(n, i))>);
      goto L0(r32);
    L1(sse11, dx9):
      r35 = `/`(sse11, dx9);
      r36 = sqrt(r35);
      goto L0(r36);
    L4():
      dr8 = tryDispatchBuiltin.1("[", n8);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(sse7, dr8);
    L5(sse9, n10):
      i31 = ld i;
      i32 = force? i31;
      __4 = ldf `[` in base;
      r34 = dyn __4(n10, i32);
      goto L1(sse9, r34);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(sse7, dx8);
    };
    r38 = dyn as_vector(p4);
    check L70() else D24();
  D21():
    deopt 66 [i21, sse1, efficiency3];
  D24():
    deopt 78 [i30, r38];
  L10(i16, RSS11, dn_strata8, dx5):
    __1 = ldf `[` in base;
    r24 = dyn __1(dn_strata8, dx5);
    goto L9(i16, RSS11, r24);
  L53():
    dr4 = tryDispatchBuiltin.1("[[", dn_proj2);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L55() else L54(i10, RSS5, dn_strata4, dr4);
  L54(i14, RSS9, dn_strata6, dn_proj4):
    i17 = ld i;
    check L56() else D17();
  L63():
    efficiency4 = force? efficiency3;
    checkMissing(efficiency4);
    c6 = `is.object`(efficiency4);
    if c6 then L64() else L65(i21, sse1, efficiency4);
  L70():
    l2 = ld res;
    c8 = `is.object`(l2);
    if c8 then L71() else L72(i30, r38, l2);
  D17():
    deopt 53 [i14, RSS9, dn_strata6, dn_proj4, i17];
  L13(i27, sse5, dx7):
    r30 = `/`(sse5, dx7);
    st sse = r30;
    goto L14(i27);
  L15(i36, dx11):
    st res = dx11;
    l5 = ld res;
    c9 = `is.object`(l5);
    if c9 then L75() else L76(i36, "mtable", l5, "mtable", l5);
  L55():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(i10, RSS5, dn_strata4, dx4);
  L56():
    i18 = force? i17;
    __ = ldf `[[` in base;
    r23 = dyn __(dn_proj4, i18);
    goto L10(i14, RSS9, dn_strata6, r23);
  L64():
    dr6 = tryDispatchBuiltin.1("[", efficiency4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(i21, sse1, dr6);
  L65(i25, sse3, efficiency6):
    i28 = ld i;
    check L67() else D22();
  L71():
    dr10 = tryDispatchBuiltin.0("[[<-", l2, r38);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L73() else L72(i30, r38, dr10);
  L72(i34, r40, l4):
    i37 = ld i;
    check L74() else D25();
  D22():
    deopt 68 [i25, sse3, efficiency6, i28];
  D25():
    deopt 80 [i34, r40, l4, r38, i37];
  L16(i42, r50, l11, r51, dx13):
    class__ = ldf `class<-`;
    check L79() else D27();
  L66():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(i21, sse1, dx6);
  L67():
    i29 = force? i28;
    __3 = ldf `[` in base;
    r29 = dyn __3(efficiency6, i29);
    goto L13(i25, sse3, r29);
  L73():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L15(i30, dx10);
  L74():
    i38 = force? i37;
    ____ = ldf `[[<-` in base;
    r43 = dyn ____(l4, r38, i38);
    goto L15(i34, r43);
  L75():
    dr12 = tryDispatchBuiltin.1("[[", l5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L77() else L76(i36, "mtable", l5, "mtable", dr12);
  L76(i40, r46, l8, r47, l9):
    i43 = ld i;
    check L78() else D26();
  D26():
    deopt 88 [i40, r46, l8, r47, l9, i43];
  D27():
    deopt 92 [i42, r50, l11, dx13, r51];
  L77():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L16(i36, "mtable", l5, "mtable", dx12);
  L78():
    i44 = force? i43;
    __5 = ldf `[[` in base;
    r52 = dyn __5(l9, i44);
    goto L16(i40, r46, l8, r47, r52);
  L79():
    r53 = dyn class__(dx13, NULL, r51);
    check L80() else D28();
  D28():
    deopt 94 [i42, r50, l11, r53];
  L80():
    c10 = `is.object`(l11);
    if c10 then L81() else L82(i42, r50, l11);
  L17(i48, dx15):
    st res = dx15;
    goto L7(i48);
  L81():
    dr14 = tryDispatchBuiltin.0("[[<-", l11, r53);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L83() else L82(i42, r50, dr14);
  L82(i46, r55, l13):
    i49 = ld i;
    check L84() else D29();
  D29():
    deopt 95 [i46, r55, l13, r53, i49];
  L83():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L17(i42, dx14);
  L84():
    i50 = force? i49;
    ____1 = ldf `[[<-` in base;
    r58 = dyn ____1(l13, r53, i50);
    goto L17(i46, r58);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg sum:cls, reg r4:V, reg x5:*, reg x6:V, reg c1:L, reg r6:V, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r8:V, reg dx3:V, reg r9:V, reg r10:V |
    mkenv;
    st x = x;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    x5 = ld x;
    check L9() else D2();
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `^`(`$`(x, residuals), 2.0)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [r1, x5];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L5() else L6(x2);
  L9():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L11() else L12(r1, x6);
  L4(dx1):
    r3 = `^`(dx1, 2.0);
    sum = ldf sum in base;
    r4 = dyn sum(r3);
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(x4):
    r2 = `$`(x4, <sym residuals>);
    goto L4(r2);
  L10(r8, dx3):
    r10 = `/`(r8, dx3);
    popenv;
    return r10;
  L11():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(r1, dr2);
  L12(r6, x8):
    r9 = `$`(x8, <sym df.residual>);
    goto L10(r6, r9);
  D1():
    deopt 8 [r4];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    goto L0(r4);
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(r1, dx2);
  }
}