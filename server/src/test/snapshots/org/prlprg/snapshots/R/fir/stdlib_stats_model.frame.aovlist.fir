fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2517969718;
    st `model.frame.aovlist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2517969718(formula, data, `...`) {
  (reg formula:*, reg data:*, reg ddd:dots) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var `...`:dots?, reg match_call:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg formula1:*, reg formula2:V, reg attr:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg formula3:*, reg formula4:V, reg attr1:cls, reg r6:V, reg rm:cls, reg formula5:*, reg formula6:V, reg p:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg Terms:*, reg Terms1:V, reg attr2:cls, reg r11:V, reg c:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg Terms2:*, reg Terms3:V, reg attr3:cls, reg r17:V, reg c1:L, reg r19:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg indError:*, reg indError1:V, reg r20:V, reg __:cls, reg r21:V, reg update:cls, reg Terms4:*, reg Terms5:V, reg p1:p(V +), reg paste:cls, reg deparse1:cls, reg errorterm:*, reg errorterm1:V, reg p2:p(V +), reg r24:V, reg p3:p(V +), reg deparse2:cls, reg errorterm2:*, reg errorterm3:V, reg c2:L, reg errorterm5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r26:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg r32:V, reg as_list:cls, reg call:*, reg call1:V, reg p7:p(V +), reg r34:V, reg as_list1:cls, reg oc:*, reg oc1:V, reg p8:p(V +), reg r36:V, reg nargs:*, reg nargs1:V, reg c3:L, reg nargs3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg nargs6:V, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg nargs9:V, reg r40:V, reg c4:cls, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg nargs12:V, reg r43:V, reg nargs13:*, reg nargs14:V, reg names:cls, reg r44:V, reg match:cls, reg r45:V, reg __2:cls, reg r46:V, reg oargs:*, reg oargs1:V, reg c5:L, reg oargs3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg oargs6:V, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg oargs9:V, reg r50:V, reg c6:cls, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg oargs12:V, reg r53:V, reg oargs13:*, reg oargs14:V, reg names1:cls, reg r54:V, reg match1:cls, reg r55:V, reg __3:cls, reg r56:V, reg nargs15:*, reg nargs16:V, reg l:*, reg c7:L, reg nargs18:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg nargs25:V, reg l5:*, reg nargs26:V, reg r58:V, reg nargs27:*, reg nargs28:V, reg names2:cls, reg r59:V, reg ___:cls, reg r60:V, reg form:*, reg form1:V, reg l6:*, reg c8:L, reg form3:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r61:V, reg ____:cls, reg environment:cls, reg Terms6:*, reg Terms7:V, reg p9:p(V +), reg r63:V, reg p10:p(V +), reg parent_frame:cls, reg r65:V, reg p11:p(V +), reg r67:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r68:V, reg r69:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg r71:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r72:V, reg r73:V, reg quote:cls, reg r74:V, reg list:cls, reg r75:V, reg args:*, reg args1:V, reg c9:cls, reg r76:V, reg eval:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg r78:V, reg fcall:*, reg fcall1:V, reg as_call:cls, reg r79:V, reg p12:p(V +), reg env:*, reg env1:V, reg p13:p(V +), reg r82:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    match_call = ldf `match.call`;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    r = dyn match_call();
    check L20() else D1();
  D1():
    deopt 2 [r];
  L20():
    st call = r;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L1(r2):
    st oc = r2;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L21():
    formula1 = ld formula;
    check L23() else D2();
  L22():
    r1 = dyn base(<sym formula>, "call");
    goto L1(r1);
  D2():
    deopt 6 [formula1];
  L2(r5):
    st Terms = r5;
    rm = ldf rm;
    check L29() else D6();
  L23():
    formula2 = force? formula1;
    checkMissing(formula2);
    attr = ldf attr in base;
    r3 = dyn attr(formula2, "call");
    check L24() else D3();
  L25():
    formula3 = ld formula;
    check L27() else D4();
  L26():
    r4 = dyn base1(<sym formula>, "terms");
    goto L2(r4);
  D3():
    deopt 10 [r3];
  D4():
    deopt 14 [formula3];
  D6():
    deopt 21 [];
  L24():
    goto L1(r3);
  L27():
    formula4 = force? formula3;
    checkMissing(formula4);
    attr1 = ldf attr in base;
    r6 = dyn attr1(formula4, "terms");
    check L28() else D5();
  L29():
    p = prom<V +>{
      formula5 = ld formula;
      formula6 = force? formula5;
      checkMissing(formula6);
      return formula6;
    };
    r8 = dyn rm(p);
    check L30() else D7();
  D5():
    deopt 18 [r6];
  D7():
    deopt 23 [r8];
  L28():
    goto L2(r6);
  L30():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L3(r10):
    c = `is.object`(r10);
    if c then L36() else L37(r10);
  L31():
    Terms = ld Terms;
    check L33() else D8();
  L32():
    r9 = dyn base2(<sym Terms>, "specials");
    goto L3(r9);
  D8():
    deopt 26 [Terms];
  L33():
    Terms1 = force? Terms;
    checkMissing(Terms1);
    attr2 = ldf attr in base;
    r11 = dyn attr2(Terms1, "specials");
    check L34() else D9();
  L35(dx1):
    st indError = dx1;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L36():
    dr = tryDispatchBuiltin.1("$", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(r13):
    r14 = `$`(r13, <sym Error>);
    goto L35(r14);
  D9():
    deopt 30 [r11];
  L4(r16):
    c1 = `is.object`(r16);
    if c1 then L43() else L44(r16);
  L34():
    goto L3(r11);
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L35(dx);
  L39():
    Terms2 = ld Terms;
    check L41() else D10();
  L40():
    r15 = dyn base3(<sym Terms>, "variables");
    goto L4(r15);
  D10():
    deopt 35 [Terms2];
  L5(dx3):
    st errorterm = dx3;
    update = ldf update;
    check L47() else D13();
  L41():
    Terms3 = force? Terms2;
    checkMissing(Terms3);
    attr3 = ldf attr in base;
    r17 = dyn attr3(Terms3, "variables");
    check L42() else D11();
  L43():
    dr2 = tryDispatchBuiltin.1("[[", r16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(dr2);
  L44(r19):
    indError = ld indError;
    check L46() else D12();
  D11():
    deopt 39 [r17];
  D12():
    deopt 41 [r19, 1.0, indError];
  D13():
    deopt 47 [];
  L42():
    goto L4(r17);
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L46():
    indError1 = force? indError;
    checkMissing(indError1);
    r20 = `+`(1.0, indError1);
    __ = ldf `[[` in base;
    r21 = dyn __(r19, r20);
    goto L5(r21);
  L47():
    p1 = prom<V +>{
      Terms4 = ld Terms;
      Terms5 = force? Terms4;
      checkMissing(Terms5);
      return Terms5;
    };
    p6 = prom<V +>{
      paste = ldf paste;
      p3 = prom<V +>{
        deparse1 = ldf deparse1;
        p2 = prom<V +>{
          errorterm = ld errorterm;
          errorterm1 = force? errorterm;
          checkMissing(errorterm1);
          return errorterm1;
        };
        r24 = dyn deparse1[, backtick](p2, TRUE);
        return r24;
      };
      p5 = prom<V +>{
        deparse2 = ldf deparse1;
        p4 = prom<V +>{
          errorterm2 = ld errorterm;
          errorterm3 = force? errorterm2;
          checkMissing(errorterm3);
          c2 = `is.object`(errorterm3);
          if c2 then L1() else L2(errorterm3);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[[", errorterm3);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(errorterm5):
          __1 = ldf `[[` in base;
          r26 = dyn __1(errorterm5, 2);
          goto L0(r26);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r28 = dyn deparse2[, backtick](p4, TRUE);
        return r28;
      };
      r30 = dyn paste(". ~ .-", p3, "+", p5);
      return r30;
    };
    r32 = dyn update(p1, p6);
    check L48() else D14();
  D14():
    deopt 50 [r32];
  L48():
    st form = r32;
    as_list = ldf `as.list`;
    check L49() else D15();
  D15():
    deopt 53 [];
  L49():
    p7 = prom<V +>{
      call = ld call;
      call1 = force? call;
      checkMissing(call1);
      return call1;
    };
    r34 = dyn as_list(p7);
    check L50() else D16();
  D16():
    deopt 55 [r34];
  L50():
    st nargs = r34;
    as_list1 = ldf `as.list`;
    check L51() else D17();
  D17():
    deopt 58 [];
  L51():
    p8 = prom<V +>{
      oc = ld oc;
      oc1 = force? oc;
      checkMissing(oc1);
      return oc1;
    };
    r36 = dyn as_list1(p8);
    check L52() else D18();
  D18():
    deopt 60 [r36];
  L52():
    st oargs = r36;
    nargs = ld nargs;
    check L53() else D19();
  D19():
    deopt 62 [nargs];
  L53():
    nargs1 = force? nargs;
    checkMissing(nargs1);
    c3 = `is.object`(nargs1);
    if c3 then L54() else L55(nargs1);
  L6(dx7):
    st nargs = dx7;
    oargs = ld oargs;
    check L67() else D24();
  L54():
    dr6 = tryDispatchBuiltin.1("[", nargs1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(dr6);
  L55(nargs3):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  D24():
    deopt 85 [oargs];
  L7(nargs6, r38):
    __2 = ldf `[` in base;
    r46 = dyn __2(nargs6, r38);
    goto L6(r46);
  L56():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx6);
  L57():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L58():
    r37 = dyn base4(<lang c("data", "na.action", "subset")>, <lang names(nargs)>, 0);
    goto L7(nargs3, r37);
  L67():
    oargs1 = force? oargs;
    checkMissing(oargs1);
    c5 = `is.object`(oargs1);
    if c5 then L68() else L69(oargs1);
  L8(nargs9, r40):
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L10(dx9):
    st args = dx9;
    nargs15 = ld nargs;
    check L81() else D29();
  L59():
    c4 = ldf c in base;
    r41 = dyn c4("data", "na.action", "subset");
    check L61() else D20();
  L60():
    r39 = dyn base5("data", "na.action", "subset");
    goto L8(nargs3, r39);
  L68():
    dr8 = tryDispatchBuiltin.1("[", oargs1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L70() else L69(dr8);
  L69(oargs3):
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  D20():
    deopt 72 [nargs3, r41];
  D29():
    deopt 108 [nargs15];
  L9(nargs12, r43):
    match = ldf match in base;
    r45 = dyn match(r40, r43, 0, NULL);
    check L66() else D23();
  L11(oargs6, r48):
    __3 = ldf `[` in base;
    r56 = dyn __3(oargs6, r48);
    goto L10(r56);
  L61():
    goto L8(nargs3, r41);
  L62():
    nargs13 = ld nargs;
    check L64() else D21();
  L63():
    r42 = dyn base6(<sym nargs>);
    goto L9(nargs9, r42);
  L70():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx8);
  L71():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  L72():
    r47 = dyn base7(<lang c("data", "na.action", "subset")>, <lang names(oargs)>, 0);
    goto L11(oargs3, r47);
  L81():
    nargs16 = force? nargs15;
    checkMissing(nargs16);
    l = ld args;
    c7 = `is.object`(l);
    if c7 then L82() else L83(nargs16, l);
  D21():
    deopt 75 [nargs9, nargs13];
  D23():
    deopt 82 [nargs12, r45];
  L12(oargs9, r50):
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L76() else L77();
  L14(dx11):
    st args = dx11;
    form = ld form;
    check L89() else D32();
  L64():
    nargs14 = force? nargs13;
    checkMissing(nargs14);
    names = ldf names in base;
    r44 = dyn names(nargs14);
    check L65() else D22();
  L66():
    goto L7(nargs12, r45);
  L73():
    c6 = ldf c in base;
    r51 = dyn c6("data", "na.action", "subset");
    check L75() else D25();
  L74():
    r49 = dyn base8("data", "na.action", "subset");
    goto L12(oargs3, r49);
  L82():
    dr10 = tryDispatchBuiltin.0("[<-", l, nargs16);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L84() else L83(nargs16, dr10);
  L83(nargs18, l2):
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L85() else L86();
  D22():
    deopt 78 [nargs9, r44];
  D25():
    deopt 95 [oargs3, r51];
  D32():
    deopt 119 [form];
  L13(oargs12, r53):
    match1 = ldf match in base;
    r55 = dyn match1(r50, r53, 0, NULL);
    check L80() else D28();
  L15(nargs25, l5, nargs26, r58):
    ___ = ldf `[<-` in base;
    r60 = dyn ___(l5, nargs26, r58);
    goto L14(r60);
  L65():
    goto L9(nargs9, r44);
  L75():
    goto L12(oargs3, r51);
  L76():
    oargs13 = ld oargs;
    check L78() else D26();
  L77():
    r52 = dyn base9(<sym oargs>);
    goto L13(oargs9, r52);
  L84():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(dx10);
  L85():
    nargs27 = ld nargs;
    check L87() else D30();
  L86():
    r57 = dyn base10(<sym nargs>);
    goto L15(nargs18, l2, nargs16, r57);
  L89():
    form1 = force? form;
    checkMissing(form1);
    l6 = ld args;
    c8 = `is.object`(l6);
    if c8 then L91() else L92(form1, l6);
  D26():
    deopt 98 [oargs9, oargs13];
  D28():
    deopt 105 [oargs12, r55];
  D30():
    deopt 113 [nargs18, l2, nargs16, nargs27];
  L78():
    oargs14 = force? oargs13;
    checkMissing(oargs14);
    names1 = ldf names in base;
    r54 = dyn names1(oargs14);
    check L79() else D27();
  L80():
    goto L11(oargs12, r55);
  L87():
    nargs28 = force? nargs27;
    checkMissing(nargs28);
    names2 = ldf names in base;
    r59 = dyn names2(nargs28);
    check L88() else D31();
  L90(dx13):
    st args = dx13;
    ____ = ldf `%||%`;
    check L94() else D33();
  L91():
    dr12 = tryDispatchBuiltin.0("$<-", l6, form1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L93() else L92(form1, dr12);
  L92(form3, l8):
    r61 = `$<-`(l8, <sym formula>, form1);
    goto L90(r61);
  D27():
    deopt 101 [oargs9, r54];
  D31():
    deopt 116 [nargs18, l2, nargs16, r59];
  D33():
    deopt 125 [];
  L79():
    goto L13(oargs9, r54);
  L88():
    goto L15(nargs18, l2, nargs16, r59);
  L93():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L90(dx12);
  L94():
    p10 = prom<V +>{
      environment = ldf environment;
      p9 = prom<V +>{
        Terms6 = ld Terms;
        Terms7 = force? Terms6;
        checkMissing(Terms7);
        return Terms7;
      };
      r63 = dyn environment(p9);
      return r63;
    };
    p11 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r65 = dyn parent_frame();
      return r65;
    };
    r67 = dyn ____(p10, p11);
    check L95() else D34();
  D34():
    deopt 128 [r67];
  L95():
    st env = r67;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L96() else L97();
  L16(r69):
    st fcall = r69;
    eval = ldf eval;
    check L105() else D38();
  L96():
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L98() else L99();
  L97():
    r68 = dyn base11(<lang list(quote(`::`(stats, model.frame)))>, <sym args>);
    goto L16(r68);
  D38():
    deopt 145 [];
  L17(r71):
    args = ld args;
    check L103() else D36();
  L98():
    sym13 = ldf quote;
    base13 = ldf quote in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L100() else L101();
  L99():
    r70 = dyn base12(<lang quote(`::`(stats, model.frame))>);
    goto L17(r70);
  L105():
    p12 = prom<V +>{
      sym14 = ldf `as.call`;
      base14 = ldf `as.call` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      fcall = ld fcall;
      fcall1 = force? fcall;
      checkMissing(fcall1);
      as_call = ldf `as.call` in base;
      r79 = dyn as_call(fcall1);
      goto L0(r79);
    L2():
      r77 = dyn base14(<sym fcall>);
      goto L0(r77);
    };
    p13 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r82 = dyn eval(p12, p13);
    check L106() else D39();
  D36():
    deopt 139 [args];
  D39():
    deopt 148 [r82];
  L18(r73):
    list = ldf list in base;
    r75 = dyn list(r73);
    check L102() else D35();
  L100():
    quote = ldf quote in base;
    r74 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L18(r74);
  L101():
    r72 = dyn base13(<lang `::`(stats, model.frame)>);
    goto L18(r72);
  L103():
    args1 = force? args;
    checkMissing(args1);
    c9 = ldf c in base;
    r76 = dyn c9(r71, args1);
    check L104() else D37();
  L106():
    popenv;
    return r82;
  D35():
    deopt 138 [r75];
  D37():
    deopt 142 [r76];
  L102():
    goto L17(r75);
  L104():
    goto L16(r76);
  }
}