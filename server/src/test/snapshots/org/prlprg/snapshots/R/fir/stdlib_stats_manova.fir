fun main() {
  () -+> V { reg r:cls, reg options:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg within:cls, reg npk:*, reg npk1:V, reg p1:p(V +), reg rnorm:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg manova:cls, reg __:cls, reg r10:V, reg p3:p(V +), reg npk2:*, reg npk3:V, reg p4:p(V +), reg r13:V, reg summary:cls, reg npk2_aov:*, reg npk2_aov1:V, reg p5:p(V +), reg r15:V, reg manova1:cls, reg __1:cls, reg r16:V, reg p6:p(V +), reg npk4:*, reg npk5:V, reg p7:p(V +), reg r19:V, reg summary1:cls, reg npk2_aovE:*, reg npk2_aovE1:V, reg p8:p(V +), reg r21:V |
    mkenv;
    r = clos inner1246119658;
    st manova = r;
    options = ldf options;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("contr.helmert", "contr.poly");
      goto L0(r3);
    L2():
      r1 = dyn base("contr.helmert", "contr.poly");
      goto L0(r1);
    };
    r5 = dyn options[contrasts](p);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    st op = r5;
    within = ldf within;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      npk = ld npk;
      npk1 = force? npk;
      checkMissing(npk1);
      return npk1;
    };
    p2 = prom<V +>{
      rnorm = ldf rnorm;
      r7 = dyn rnorm(24.0);
      st foo = r7;
      invisible.0();
      return r7;
    };
    r9 = dyn within(p1, p2);
    check L3() else D3();
  D3():
    deopt 13 [r9];
  L3():
    st npk2 = r9;
    manova = ldf manova;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p3 = prom<V +>{
      __ = ldf `~` in base;
      r10 = dyn __(<lang cbind(yield, foo)>, <lang `+`(block, `*`(`*`(N, P), K))>);
      return r10;
    };
    p4 = prom<V +>{
      npk2 = ld npk2;
      npk3 = force? npk2;
      checkMissing(npk3);
      return npk3;
    };
    r13 = dyn manova(p3, p4);
    check L5() else D5();
  D5():
    deopt 19 [r13];
  L5():
    st `npk2.aov` = r13;
    summary = ldf summary;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p5 = prom<V +>{
      npk2_aov = ld `npk2.aov`;
      npk2_aov1 = force? npk2_aov;
      checkMissing(npk2_aov1);
      return npk2_aov1;
    };
    r15 = dyn summary(p5);
    check L7() else D7();
  D7():
    deopt 24 [r15];
  L7():
    manova1 = ldf manova;
    check L8() else D8();
  D8():
    deopt 26 [];
  L8():
    p6 = prom<V +>{
      __1 = ldf `~` in base;
      r16 = dyn __1(<lang cbind(yield, foo)>, <lang `+`(`*`(`*`(N, P), K), Error(block))>);
      return r16;
    };
    p7 = prom<V +>{
      npk4 = ld npk2;
      npk5 = force? npk4;
      checkMissing(npk5);
      return npk5;
    };
    r19 = dyn manova1(p6, p7);
    check L9() else D9();
  D9():
    deopt 29 [r19];
  L9():
    st `npk2.aovE` = r19;
    summary1 = ldf summary;
    check L10() else D10();
  D10():
    deopt 32 [];
  L10():
    p8 = prom<V +>{
      npk2_aovE = ld `npk2.aovE`;
      npk2_aovE1 = force? npk2_aovE;
      checkMissing(npk2_aovE1);
      return npk2_aovE1;
    };
    r21 = dyn summary1(p8);
    check L11() else D11();
  D11():
    deopt 34 [r21];
  L11():
    popenv;
    return r21;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg match_call:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg quote:cls, reg r3:V, reg l:*, reg c:L, reg r5:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r8:V, reg eval:cls, reg fcall:*, reg fcall1:V, reg p:p(V +), reg parent_frame:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg result:*, reg result1:V, reg inherits:cls, reg r15:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg result2:*, reg result3:V, reg r18:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg i7:I, reg r20:V, reg result4:*, reg result5:V, reg c3:L, reg i9:I, reg result7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i11:I, reg dx3:V, reg i12:*, reg i13:V, reg __:cls, reg r21:V, reg inherits1:cls, reg r22:V, reg r23:V, reg c4:L, reg stop:cls, reg r24:V, reg i16:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg i19:I, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg i22:I, reg r29:V, reg result8:*, reg result9:V, reg c5:L, reg i24:I, reg result11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i26:I, reg dx5:V, reg i27:*, reg i28:V, reg __1:cls, reg r30:V, reg oldClass:cls, reg r31:V, reg c6:cls, reg r32:V, reg l4:*, reg c7:L, reg i30:I, reg r35:V, reg l7:*, reg r36:V, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i32:I, reg r39:V, reg l10:*, reg r40:V, reg dx7:V, reg i33:*, reg i34:V, reg __2:cls, reg r41:V, reg class__:cls, reg r42:V, reg c8:L, reg i36:I, reg r44:V, reg l12:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i38:I, reg dx9:V, reg i39:*, reg i40:V, reg ____1:cls, reg r47:V, reg Call:*, reg Call1:V, reg l13:*, reg attr__:cls, reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg result12:*, reg result13:V, reg inherits2:cls, reg r51:V, reg r52:V, reg c9:L, reg stop1:cls, reg r53:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg result14:*, reg result15:V, reg oldClass1:cls, reg r59:V, reg c10:cls, reg r60:V, reg l14:*, reg class__1:cls, reg r61:V, reg Call3:*, reg Call4:V, reg l15:*, reg c11:L, reg Call6:V, reg l17:*, reg dr10:V, reg dc5:L, reg dx10:V, reg Call8:V, reg dx11:V, reg r62:V, reg result16:*, reg result17:V |
    mkenv;
    st `...` = ddd;
    match_call = ldf `match.call`;
    check L22() else D0();
  D0():
    deopt 1 [];
  L22():
    r = dyn match_call();
    check L23() else D1();
  D1():
    deopt 2 [r];
  L23():
    st fcall = r;
    st Call = r;
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L0(r2):
    l = ld fcall;
    c = `is.object`(l);
    if c then L26() else L27(r2, l);
  L24():
    quote = ldf quote in base;
    r3 = dyn quote(<lang `::`(stats, aov)>);
    goto L0(r3);
  L25():
    r1 = dyn base(<lang `::`(stats, aov)>);
    goto L0(r1);
  L1(dx1):
    st fcall = dx1;
    eval = ldf eval;
    check L29() else D2();
  L26():
    dr = tryDispatchBuiltin.0("[[<-", l, r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(r2, dr);
  L27(r5, l2):
    ____ = ldf `[[<-` in base;
    r8 = dyn ____(l2, r2, 1);
    goto L1(r8);
  D2():
    deopt 14 [];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L29():
    p = prom<V +>{
      fcall = ld fcall;
      fcall1 = force? fcall;
      checkMissing(fcall1);
      return fcall1;
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r10 = dyn parent_frame();
      return r10;
    };
    r12 = dyn eval(p, p1);
    check L30() else D3();
  D3():
    deopt 17 [r12];
  L30():
    st result = r12;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L2(r14):
    c1 = `as.logical`(r14);
    if c1 then L35() else L3();
  L31():
    result = ld result;
    check L33() else D4();
  L32():
    r13 = dyn base1(<sym result>, "aovlist");
    goto L2(r13);
  D4():
    deopt 21 [result];
  L3():
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  L16():
    result16 = ld result;
    check L99() else D33();
  L33():
    result1 = force? result;
    checkMissing(result1);
    inherits = ldf inherits in base;
    r15 = dyn inherits(result1, "aovlist", FALSE);
    check L34() else D5();
  L35():
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  D5():
    deopt 26 [r15];
  D33():
    deopt 123 [result16];
  L4(r17):
    s = toForSeq(r17);
    l3 = length(s);
    i = 0;
    goto L5(i);
  L17(r50):
    r52 = `!`(r50);
    c9 = `as.logical`(r52);
    if c9 then L81() else L18();
  L34():
    goto L2(r15);
  L36():
    result2 = ld result;
    check L38() else D6();
  L37():
    r16 = dyn base2(<sym result>);
    goto L4(r16);
  L77():
    result12 = ld result;
    check L79() else D23();
  L78():
    r49 = dyn base6(<sym result>, "maov");
    goto L17(r49);
  L99():
    result17 = force? result16;
    checkMissing(result17);
    popenv;
    return result17;
  D6():
    deopt 28 [result2];
  D23():
    deopt 89 [result12];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l3, i2);
    if c2 then L39() else L15();
  L18():
    goto L19();
  L19():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L85() else L86();
  L38():
    result3 = force? result2;
    checkMissing(result3);
    r18 = seq_along(result3);
    goto L4(r18);
  L79():
    result13 = force? result12;
    checkMissing(result13);
    inherits2 = ldf inherits in base;
    r51 = dyn inherits2(result13, "maov", FALSE);
    check L80() else D24();
  L81():
    stop1 = ldf stop;
    check L82() else D25();
  D24():
    deopt 94 [r51];
  D25():
    deopt 97 [];
  L15():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L20(r56):
    l14 = ld result;
    class__1 = ldf `class<-`;
    check L92() else D30();
  L39():
    Call = ld Call;
    check L73() else D20();
  L80():
    goto L17(r51);
  L82():
    r53 = dyn stop1("need multiple responses");
    check L83() else D26();
  L85():
    sym8 = ldf oldClass;
    base8 = ldf oldClass in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L87() else L88();
  L86():
    r55 = dyn base7("manova", <lang oldClass(result)>);
    goto L20(r55);
  D20():
    deopt 79 [Call];
  D26():
    deopt 99 [r53];
  D30():
    deopt 114 [r56, l14, r56];
  L6(i7, r20):
    r23 = `!`(r20);
    c4 = `as.logical`(r23);
    if c4 then L48() else L8();
  L21(r58):
    c10 = ldf c in base;
    r60 = dyn c10("manova", r58);
    check L91() else D29();
  L40():
    result4 = ld result;
    check L42() else D7();
  L41():
    r19 = dyn base3(<lang `[[`(result, i)>, "maov");
    goto L6(i2, r19);
  L73():
    Call1 = force? Call;
    checkMissing(Call1);
    l13 = ld result;
    attr__ = ldf `attr<-`;
    check L74() else D21();
  L83():
    goto L19();
  L87():
    result14 = ld result;
    check L89() else D27();
  L88():
    r57 = dyn base8(<sym result>);
    goto L21(r57);
  L92():
    r61 = dyn class__1(l14, NULL, r56);
    check L93() else D31();
  D7():
    deopt 33 [i2, result4];
  D21():
    deopt 82 [Call1, l13, Call1];
  D27():
    deopt 107 [result14];
  D29():
    deopt 112 [r60];
  D31():
    deopt 116 [r56, r61];
  L8():
    goto L9(i7);
  L9(i16):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L42():
    result5 = force? result4;
    checkMissing(result5);
    c3 = `is.object`(result5);
    if c3 then L43() else L44(i2, result5);
  L48():
    stop = ldf stop;
    check L49() else D10();
  L74():
    r48 = dyn attr__(l13, NULL, "call", Call1);
    check L75() else D22();
  L89():
    result15 = force? result14;
    checkMissing(result15);
    oldClass1 = ldf oldClass in base;
    r59 = dyn oldClass1(result15);
    check L90() else D28();
  L91():
    goto L20(r60);
  L93():
    st result = r61;
    Call3 = ld Call;
    check L94() else D32();
  D10():
    deopt 44 [i7];
  D22():
    deopt 85 [Call1, r48];
  D28():
    deopt 110 [r59];
  D32():
    deopt 118 [Call3];
  L7(i11, dx3):
    inherits1 = ldf inherits in base;
    r22 = dyn inherits1(dx3, "maov", FALSE);
    check L47() else D9();
  L10(i19, r27):
    l4 = ld result;
    c7 = `is.object`(l4);
    if c7 then L63() else L64(i19, r27, l4, r27, l4);
  L43():
    dr2 = tryDispatchBuiltin.1("[[", result5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(i2, dr2);
  L44(i9, result7):
    i12 = ld i;
    check L46() else D8();
  L49():
    r24 = dyn stop("need multiple responses");
    check L50() else D11();
  L52():
    sym5 = ldf oldClass;
    base5 = ldf oldClass in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L53():
    r26 = dyn base4("manova", <lang oldClass(`[[`(result, i))>);
    goto L10(i16, r26);
  L75():
    st result = r48;
    goto L16();
  L90():
    goto L21(r59);
  L94():
    Call4 = force? Call3;
    checkMissing(Call4);
    l15 = ld result;
    c11 = `is.object`(l15);
    if c11 then L96() else L97(Call4, l15);
  D8():
    deopt 35 [i9, result7, i12];
  D9():
    deopt 41 [i11, r22];
  D11():
    deopt 46 [i7, r24];
  L11(i22, r29):
    c6 = ldf c in base;
    r32 = dyn c6("manova", r29);
    check L62() else D15();
  L13(i32, r39, l10, r40, dx7):
    class__ = ldf `class<-`;
    check L67() else D17();
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i2, dx2);
  L46():
    i13 = force? i12;
    __ = ldf `[[` in base;
    r21 = dyn __(result7, i13);
    goto L7(i9, r21);
  L47():
    goto L6(i11, r22);
  L50():
    goto L9(i7);
  L54():
    result8 = ld result;
    check L56() else D12();
  L55():
    r28 = dyn base5(<lang `[[`(result, i)>);
    goto L11(i16, r28);
  L63():
    dr6 = tryDispatchBuiltin.1("[[", l4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L65() else L64(i19, r27, l4, r27, dr6);
  L64(i30, r35, l7, r36, l8):
    i33 = ld i;
    check L66() else D16();
  L95(Call8, dx11):
    st result = dx11;
    goto L16();
  L96():
    dr10 = tryDispatchBuiltin.0("$<-", l15, Call4);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L98() else L97(Call4, dr10);
  L97(Call6, l17):
    r62 = `$<-`(l17, <sym call>, Call4);
    goto L95(Call6, r62);
  D12():
    deopt 54 [i16, result8];
  D15():
    deopt 62 [i22, r32];
  D16():
    deopt 65 [i30, r35, l7, r36, l8, i33];
  D17():
    deopt 69 [i32, r39, l10, dx7, r40];
  L56():
    result9 = force? result8;
    checkMissing(result9);
    c5 = `is.object`(result9);
    if c5 then L57() else L58(i16, result9);
  L62():
    goto L10(i22, r32);
  L65():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(i19, r27, l4, r27, dx6);
  L66():
    i34 = force? i33;
    __2 = ldf `[[` in base;
    r41 = dyn __2(l8, i34);
    goto L13(i30, r35, l7, r36, r41);
  L67():
    r42 = dyn class__(dx7, NULL, r40);
    check L68() else D18();
  L98():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L95(Call4, dx10);
  D18():
    deopt 71 [i32, r39, l10, r42];
  L12(i26, dx5):
    oldClass = ldf oldClass in base;
    r31 = dyn oldClass(dx5);
    check L61() else D14();
  L57():
    dr4 = tryDispatchBuiltin.1("[[", result9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L59() else L58(i16, dr4);
  L58(i24, result11):
    i27 = ld i;
    check L60() else D13();
  L68():
    c8 = `is.object`(l10);
    if c8 then L69() else L70(i32, r39, l10);
  D13():
    deopt 56 [i24, result11, i27];
  D14():
    deopt 60 [i26, r31];
  L14(i38, dx9):
    st result = dx9;
    goto L5(i38);
  L59():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(i16, dx4);
  L60():
    i28 = force? i27;
    __1 = ldf `[[` in base;
    r30 = dyn __1(result11, i28);
    goto L12(i24, r30);
  L61():
    goto L11(i26, r31);
  L69():
    dr8 = tryDispatchBuiltin.0("[[<-", l10, r42);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L71() else L70(i32, r39, dr8);
  L70(i36, r44, l12):
    i39 = ld i;
    check L72() else D19();
  D19():
    deopt 72 [i36, r44, l12, r42, i39];
  L71():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(i32, dx8);
  L72():
    i40 = force? i39;
    ____1 = ldf `[[<-` in base;
    r47 = dyn ____1(l12, r42, i40);
    goto L14(i36, r47);
  }
}