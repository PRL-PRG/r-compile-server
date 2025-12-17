fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3460579492;
    st withAutoprint = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3460579492(exprs, evaluated, local, `print.`, echo, `max.deparse.length`, `width.cutoff`, deparseCtrl, `skip.echo`, `...`) {
  (reg exprs:*, reg evaluated:*, reg local:*, reg print_:*, reg echo:*, reg max_deparse_length:*, reg width_cutoff:*, reg deparseCtrl:*, reg skip_echo:*, reg ddd:dots) -+> V { var exprs:*, var evaluated:*, reg evaluated_isMissing:L, reg evaluated_orDefault:*, var local:*, reg local_isMissing:L, reg local_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var `print.`:*, reg print__isMissing:L, reg print__orDefault:*, var echo:*, reg echo_isMissing:L, reg echo_orDefault:*, var `max.deparse.length`:*, reg max_deparse_length_isMissing:L, reg max_deparse_length_orDefault:*, var `width.cutoff`:*, reg width_cutoff_isMissing:L, reg width_cutoff_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg getOption:cls, reg r4:V, reg max:cls, reg r5:V, reg p1:p(V +), var deparseCtrl:*, reg deparseCtrl_isMissing:L, reg deparseCtrl_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg p2:p(V +), var `skip.echo`:*, reg skip_echo_isMissing:L, reg skip_echo_orDefault:*, var `...`:dots?, reg evaluated1:*, reg evaluated2:V, reg r11:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg substitute:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg exprs1:*, reg exprs2:V, reg is_call:cls, reg r17:V, reg c2:L, reg exprs3:*, reg exprs4:V, reg c3:L, reg exprs6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg dx4:V, reg r20:V, reg quote:cls, reg r21:V, reg r22:V, reg c4:L, reg as_list:cls, reg exprs7:*, reg exprs8:V, reg p3:p(V +), reg r24:V, reg c5:L, reg r26:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg __1:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg missing:cls, reg r30:V, reg c6:L, reg c8:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg c11:L, reg r32:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg c14:L, reg r34:V, reg exprs9:*, reg exprs10:V, reg attr:cls, reg r35:V, reg is_list:cls, reg r36:V, reg c15:L, reg c16:V, reg c18:L, reg srcrefs:*, reg srcrefs1:V, reg c19:L, reg srcrefs3:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg __2:cls, reg r37:V, reg c20:L, reg dx10:V, reg dr6:V, reg dc3:L, reg dx11:V, reg dx12:V, reg __3:cls, reg r38:V, reg r39:V, reg r40:V, reg r41:V, reg r42:V, reg source:cls, reg exprs11:*, reg exprs12:V, reg p4:p(V +), reg local1:*, reg local2:V, reg p5:p(V +), reg print_1:*, reg print_2:V, reg p6:p(V +), reg echo1:*, reg echo2:V, reg p7:p(V +), reg max_deparse_length1:*, reg max_deparse_length2:V, reg p8:p(V +), reg width_cutoff1:*, reg width_cutoff2:V, reg p9:p(V +), reg deparseCtrl1:*, reg deparseCtrl2:V, reg p10:p(V +), reg skip_echo1:*, reg skip_echo2:V, reg p11:p(V +), reg ddd1:dots?, reg r52:V |
    mkenv;
    st exprs = exprs;
    evaluated_isMissing = missing.0(evaluated);
    if evaluated_isMissing then L0(FALSE) else L0(evaluated);
  L0(evaluated_orDefault):
    st evaluated = evaluated_orDefault;
    local_isMissing = missing.0(local);
    if local_isMissing then L1() else L2(local);
  L1():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L2(p);
  L2(local_orDefault):
    st local = local_orDefault;
    print__isMissing = missing.0(print_);
    if print__isMissing then L3(TRUE) else L3(print_);
  L3(print__orDefault):
    st `print.` = print__orDefault;
    echo_isMissing = missing.0(echo);
    if echo_isMissing then L4(TRUE) else L4(echo);
  L4(echo_orDefault):
    st echo = echo_orDefault;
    max_deparse_length_isMissing = missing.0(max_deparse_length);
    if max_deparse_length_isMissing then L5(+Infinity) else L5(max_deparse_length);
  L5(max_deparse_length_orDefault):
    st `max.deparse.length` = max_deparse_length_orDefault;
    width_cutoff_isMissing = missing.0(width_cutoff);
    if width_cutoff_isMissing then L6() else L7(width_cutoff);
  L6():
    p1 = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      getOption = ldf getOption;
      r4 = dyn getOption("width");
      max = ldf max in base;
      r5 = dyn max(20.0, r4);
      goto L0(r5);
    L2():
      r2 = dyn base(20.0, <lang getOption("width")>);
      goto L0(r2);
    };
    goto L7(p1);
  L7(width_cutoff_orDefault):
    st `width.cutoff` = width_cutoff_orDefault;
    deparseCtrl_isMissing = missing.0(deparseCtrl);
    if deparseCtrl_isMissing then L8() else L9(deparseCtrl);
  L8():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c = ldf c in base;
      r9 = dyn c("keepInteger", "showAttributes", "keepNA");
      goto L0(r9);
    L2():
      r7 = dyn base1("keepInteger", "showAttributes", "keepNA");
      goto L0(r7);
    };
    goto L9(p2);
  L9(deparseCtrl_orDefault):
    st deparseCtrl = deparseCtrl_orDefault;
    skip_echo_isMissing = missing.0(skip_echo);
    if skip_echo_isMissing then L10(0.0) else L10(skip_echo);
  L10(skip_echo_orDefault):
    st `skip.echo` = skip_echo_orDefault;
    st `...` = ddd;
    evaluated1 = ld evaluated;
    check L30() else D0();
  D0():
    deopt 0 [evaluated1];
  L30():
    evaluated2 = force? evaluated1;
    checkMissing(evaluated2);
    r11 = `!`(evaluated2);
    c1 = `as.logical`(r11);
    if c1 then L31() else L11();
  L11():
    goto L29();
  L29():
    source = ldf source;
    check L74() else D10();
  L31():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  D10():
    deopt 65 [];
  L12(r13):
    st exprs = r13;
    sym3 = ldf `is.call`;
    base3 = ldf `is.call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L32():
    substitute = ldf substitute in base;
    r14 = dyn substitute(<sym exprs>);
    goto L12(r14);
  L33():
    r12 = dyn base2(<sym exprs>);
    goto L12(r12);
  L74():
    p4 = prom<V +>{
      exprs11 = ld exprs;
      exprs12 = force? exprs11;
      checkMissing(exprs12);
      return exprs12;
    };
    p5 = prom<V +>{
      local1 = ld local;
      local2 = force? local1;
      checkMissing(local2);
      return local2;
    };
    p6 = prom<V +>{
      print_1 = ld `print.`;
      print_2 = force? print_1;
      checkMissing(print_2);
      return print_2;
    };
    p7 = prom<V +>{
      echo1 = ld echo;
      echo2 = force? echo1;
      checkMissing(echo2);
      return echo2;
    };
    p8 = prom<V +>{
      max_deparse_length1 = ld `max.deparse.length`;
      max_deparse_length2 = force? max_deparse_length1;
      checkMissing(max_deparse_length2);
      return max_deparse_length2;
    };
    p9 = prom<V +>{
      width_cutoff1 = ld `width.cutoff`;
      width_cutoff2 = force? width_cutoff1;
      checkMissing(width_cutoff2);
      return width_cutoff2;
    };
    p10 = prom<V +>{
      deparseCtrl1 = ld deparseCtrl;
      deparseCtrl2 = force? deparseCtrl1;
      checkMissing(deparseCtrl2);
      return deparseCtrl2;
    };
    p11 = prom<V +>{
      skip_echo1 = ld `skip.echo`;
      skip_echo2 = force? skip_echo1;
      checkMissing(skip_echo2);
      return skip_echo2;
    };
    ddd1 = ld `...`;
    r52 = dyn source[exprs, local, `print.eval`, echo, `max.deparse.length`, `width.cutoff`, deparseCtrl, `skip.echo`, `...`](p4, p5, p6, p7, p8, p9, p10, p11, ddd1);
    check L75() else D11();
  D11():
    deopt 83 [r52];
  L13(r16):
    c2 = `as.logical`(r16);
    if c2 then L38() else L14();
  L34():
    exprs1 = ld exprs;
    check L36() else D1();
  L35():
    r15 = dyn base3(<sym exprs>);
    goto L13(r15);
  L75():
    popenv;
    return r52;
  D1():
    deopt 9 [exprs1];
  L14():
    goto L28(NULL);
  L28(r42):
    goto L29();
  L36():
    exprs2 = force? exprs1;
    checkMissing(exprs2);
    is_call = ldf `is.call` in base;
    r17 = dyn is_call(exprs2);
    check L37() else D2();
  L38():
    exprs3 = ld exprs;
    check L39() else D3();
  D2():
    deopt 12 [r17];
  D3():
    deopt 13 [exprs3];
  L37():
    goto L13(r17);
  L39():
    exprs4 = force? exprs3;
    checkMissing(exprs4);
    c3 = `is.object`(exprs4);
    if c3 then L40() else L41(exprs4);
  L15(dx1):
    sym4 = ldf quote;
    base4 = ldf quote in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L40():
    dr = tryDispatchBuiltin.1("[[", exprs4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(dr);
  L41(exprs6):
    __ = ldf `[[` in base;
    r18 = dyn __(exprs6, 1.0);
    goto L15(r18);
  L16(dx4, r20):
    r22 = `==`(dx4, r20);
    c4 = `as.logical`(r22);
    if c4 then L45() else L17();
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L43():
    quote = ldf quote in base;
    r21 = dyn quote(<sym `{`>);
    goto L16(dx1, r21);
  L44():
    r19 = dyn base4(<sym `{`>);
    goto L16(dx1, r19);
  L17():
    goto L27(NULL);
  L27(r41):
    goto L28(r41);
  L45():
    as_list = ldf `as.list`;
    check L46() else D4();
  D4():
    deopt 22 [];
  L46():
    p3 = prom<V +>{
      exprs7 = ld exprs;
      exprs8 = force? exprs7;
      checkMissing(exprs8);
      return exprs8;
    };
    r24 = dyn as_list(p3);
    check L47() else D5();
  D5():
    deopt 24 [r24];
  L47():
    c5 = `is.object`(r24);
    if c5 then L48() else L49(r24);
  L18(dx6):
    st exprs = dx6;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L48():
    dr2 = tryDispatchBuiltin.1("[", r24);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(dr2);
  L49(r26):
    __1 = ldf `[` in base;
    r27 = dyn __1(r26, -1.0);
    goto L18(r27);
  L19(r29):
    c6 = `as.logical`(r29);
    if c6 then L53() else L20(c6);
  L50():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx5);
  L51():
    missing = ldf missing in base;
    r30 = dyn missing(<sym skip.echo>);
    goto L19(r30);
  L52():
    r28 = dyn base5(<sym skip.echo>);
    goto L19(r28);
  L20(c8):
    c18 = `as.logical`(c8);
    if c18 then L62() else L23();
  L53():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L21(c11, r32):
    c15 = `as.logical`(r32);
    c16 = `&&`(c11, c15);
    goto L20(c16);
  L23():
    goto L26(NULL);
  L26(r40):
    goto L27(r40);
  L54():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L56() else L57();
  L55():
    r31 = dyn base6(<lang `<-`(srcrefs, attr(exprs, "srcref"))>);
    goto L21(c6, r31);
  L62():
    srcrefs = ld srcrefs;
    check L63() else D9();
  D9():
    deopt 45 [srcrefs];
  L22(c14, r34):
    st srcrefs = r34;
    is_list = ldf `is.list` in base;
    r36 = dyn is_list(r34);
    check L60() else D8();
  L56():
    exprs9 = ld exprs;
    check L58() else D6();
  L57():
    r33 = dyn base7(<sym exprs>, "srcref");
    goto L22(c6, r33);
  L63():
    srcrefs1 = force? srcrefs;
    checkMissing(srcrefs1);
    c19 = `is.object`(srcrefs1);
    if c19 then L64() else L65(srcrefs1);
  D6():
    deopt 36 [c6, exprs9];
  D8():
    deopt 43 [c14, r36];
  L24(dx8):
    c20 = `is.object`(dx8);
    if c20 then L67() else L68(dx8);
  L58():
    exprs10 = force? exprs9;
    checkMissing(exprs10);
    attr = ldf attr in base;
    r35 = dyn attr(exprs10, "srcref");
    check L59() else D7();
  L60():
    goto L21(c14, r36);
  L64():
    dr4 = tryDispatchBuiltin.1("[[", srcrefs1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L66() else L65(dr4);
  L65(srcrefs3):
    __2 = ldf `[[` in base;
    r37 = dyn __2(srcrefs3, 1);
    goto L24(r37);
  D7():
    deopt 40 [c6, r35];
  L25(dx12):
    r39 = `-`(dx12, 1);
    st `skip.echo` = r39;
    goto L26(r39);
  L59():
    goto L22(c6, r35);
  L66():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L24(dx7);
  L67():
    dr6 = tryDispatchBuiltin.1("[", dx8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L69() else L68(dr6);
  L68(dx10):
    __3 = ldf `[` in base;
    r38 = dyn __3(dx10, 7);
    goto L25(r38);
  L69():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L25(dx11);
  }
}