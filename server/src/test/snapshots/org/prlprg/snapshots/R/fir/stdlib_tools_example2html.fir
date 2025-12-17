fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3663197550;
    st example2html = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3663197550(topic, package, Rhome, env) {
  (reg topic:*, reg package:*, reg Rhome:*, reg env:*) -+> V { var topic:*, var package:*, var Rhome:*, reg Rhome_isMissing:L, reg Rhome_orDefault:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg r2:V, reg enhancedHTML:*, reg enhancedHTML1:V, reg r3:V, reg c:L, reg c1:V, reg requireNamespace:cls, reg r4:V, reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg __:cls, reg r6:V, reg r7:cls, reg topic1:*, reg topic2:V, reg p1:p(V +), reg package1:*, reg package2:V, reg p2:p(V +), reg r10:V, reg _code2html_payload_console:cls, reg topic3:*, reg topic4:V, reg p3:p(V +), reg package3:*, reg package4:V, reg p4:p(V +), reg enhancedHTML2:*, reg enhancedHTML3:V, reg p5:p(V +), reg Rhome1:*, reg Rhome2:V, reg p6:p(V +), reg r15:V, reg __1:cls, reg r16:V, reg r17:cls, reg topic5:*, reg topic6:V, reg p7:p(V +), reg package5:*, reg package6:V, reg p8:p(V +), reg r20:V, reg grep:cls, reg ecode:*, reg ecode1:V, reg p9:p(V +), reg r22:V, reg which:cls, reg diff:cls, reg hlines:*, reg hlines1:V, reg p10:p(V +), reg r24:V, reg r25:V, reg p11:p(V +), reg r27:V, reg sym:cls, reg base:cls, reg guard:L, reg r28:V, reg r29:V, reg wskip:*, reg wskip1:V, reg length:cls, reg r30:V, reg c7:L, reg hlines2:*, reg hlines3:V, reg c8:L, reg hlines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r31:V, reg hlines8:V, reg r32:V, reg wskip2:*, reg wskip3:V, reg c9:L, reg hlines10:V, reg wskip5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg hlines12:V, reg dx3:V, reg __2:cls, reg r33:V, reg r34:I, reg __3:cls, reg r35:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg r37:V, reg hlines13:*, reg hlines14:V, reg length1:cls, reg r38:V, reg c10:L, reg as_list:cls, reg read_dcf:cls, reg textConnection:cls, reg substring:cls, reg ecode2:*, reg ecode3:V, reg c11:L, reg ecode5:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg hlines15:*, reg hlines16:V, reg __4:cls, reg r39:V, reg p12:p(V +), reg r41:V, reg p13:p(V +), reg r43:V, reg p14:p(V +), reg r45:V, reg c12:L, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __5:cls, reg r48:V, reg p15:p(V +), reg r50:V, reg ecode6:*, reg ecode7:V, reg c13:L, reg ecode9:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg hlines17:*, reg hlines18:V, reg r51:V, reg __6:cls, reg r52:V, reg _code2html_payload_browser:cls, reg ecode10:*, reg ecode11:V, reg p16:p(V +), reg topic7:*, reg topic8:V, reg p17:p(V +), reg package7:*, reg package8:V, reg p18:p(V +), reg Rhome3:*, reg Rhome4:V, reg p19:p(V +), reg header_info:*, reg header_info1:V, reg p20:p(V +), reg env1:*, reg env2:V, reg p21:p(V +), reg r59:V |
    mkenv;
    st topic = topic;
    st package = package;
    Rhome_isMissing = missing.0(Rhome);
    if Rhome_isMissing then L0("") else L0(Rhome);
  L0(Rhome_orDefault):
    st Rhome = Rhome_orDefault;
    env_isMissing = missing.0(env);
    if env_isMissing then L1(NULL) else L1(env);
  L1(env_orDefault):
    st env = env_orDefault;
    config_val_to_logical = ldf config_val_to_logical;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r = dyn Sys_getenv("_R_HELP_ENABLE_ENHANCED_HTML_", "TRUE");
      return r;
    };
    r2 = dyn config_val_to_logical(p);
    check L15() else D1();
  D1():
    deopt 3 [r2];
  L15():
    st enhancedHTML = r2;
    enhancedHTML = ld enhancedHTML;
    check L16() else D2();
  D2():
    deopt 5 [enhancedHTML];
  L16():
    enhancedHTML1 = force? enhancedHTML;
    checkMissing(enhancedHTML1);
    r3 = `!`(enhancedHTML1);
    c = `as.logical`(r3);
    if c then L2(c) else L17();
  L2(c1):
    c6 = `as.logical`(c1);
    if c6 then L21() else L3();
  L17():
    requireNamespace = ldf requireNamespace;
    check L18() else D3();
  D3():
    deopt 9 [c];
  L3():
    __1 = ldf `::`;
    check L28() else D10();
  L18():
    r4 = dyn requireNamespace[, quietly]("knitr", TRUE);
    check L19() else D4();
  L21():
    __ = ldf `::`;
    check L22() else D5();
  D4():
    deopt 13 [c, r4];
  D5():
    deopt 17 [];
  D10():
    deopt 41 [];
  L19():
    r5 = `!`(r4);
    c3 = `as.logical`(r5);
    c4 = `||`(c, c3);
    goto L2(c4);
  L22():
    r6 = dyn __("utils", "example");
    check L23() else D6();
  L28():
    r16 = dyn __1("utils", "example");
    check L29() else D11();
  D6():
    deopt 20 [r6];
  D11():
    deopt 44 [r16];
  L23():
    checkFun.0(r6);
    r7 = r6 as cls;
    p1 = prom<V +>{
      topic1 = ld topic;
      topic2 = force? topic1;
      checkMissing(topic2);
      return topic2;
    };
    p2 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r10 = dyn r7[, package, `character.only`, ask](p1, p2, TRUE, FALSE);
    check L24() else D7();
  L29():
    checkFun.0(r16);
    r17 = r16 as cls;
    p7 = prom<V +>{
      topic5 = ld topic;
      topic6 = force? topic5;
      checkMissing(topic6);
      return topic6;
    };
    p8 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r20 = dyn r17[, package, `character.only`, `give.lines`](p7, p8, TRUE, TRUE);
    check L30() else D12();
  D7():
    deopt 29 [r10];
  D12():
    deopt 53 [r20];
  L24():
    _code2html_payload_console = ldf `.code2html_payload_console`;
    check L25() else D8();
  L30():
    st ecode = r20;
    grep = ldf grep;
    check L31() else D13();
  D8():
    deopt 31 [];
  D13():
    deopt 56 [];
  L25():
    p3 = prom<V +>{
      topic3 = ld topic;
      topic4 = force? topic3;
      checkMissing(topic4);
      return topic4;
    };
    p4 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p5 = prom<V +>{
      enhancedHTML2 = ld enhancedHTML;
      enhancedHTML3 = force? enhancedHTML2;
      checkMissing(enhancedHTML3);
      return enhancedHTML3;
    };
    p6 = prom<V +>{
      Rhome1 = ld Rhome;
      Rhome2 = force? Rhome1;
      checkMissing(Rhome2);
      return Rhome2;
    };
    r15 = dyn _code2html_payload_console[, , , enhancedHTML, Rhome]("example", p3, p4, p5, p6);
    check L26() else D9();
  L31():
    p9 = prom<V +>{
      ecode = ld ecode;
      ecode1 = force? ecode;
      checkMissing(ecode1);
      return ecode1;
    };
    r22 = dyn grep("^###[ ][^*]", p9);
    check L32() else D14();
  D9():
    deopt 39 [r15];
  D14():
    deopt 59 [r22];
  L26():
    popenv;
    return r15;
  L32():
    st hlines = r22;
    which = ldf which;
    check L33() else D15();
  D15():
    deopt 62 [];
  L33():
    p11 = prom<V +>{
      diff = ldf diff;
      p10 = prom<V +>{
        hlines = ld hlines;
        hlines1 = force? hlines;
        checkMissing(hlines1);
        return hlines1;
      };
      r24 = dyn diff(p10);
      r25 = `!=`(r24, 1.0);
      return r25;
    };
    r27 = dyn which(p11);
    check L34() else D16();
  D16():
    deopt 64 [r27];
  L34():
    st wskip = r27;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L4(r29):
    c7 = `as.logical`(r29);
    if c7 then L39() else L5();
  L35():
    wskip = ld wskip;
    check L37() else D17();
  L36():
    r28 = dyn base(<sym wskip>);
    goto L4(r28);
  D17():
    deopt 68 [wskip];
  L5():
    goto L9();
  L9():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L37():
    wskip1 = force? wskip;
    checkMissing(wskip1);
    length = ldf length in base;
    r30 = dyn length(wskip1);
    check L38() else D18();
  L39():
    hlines2 = ld hlines;
    check L40() else D19();
  D18():
    deopt 71 [r30];
  D19():
    deopt 72 [hlines2];
  L10(r37):
    c10 = `as.logical`(r37);
    if c10 then L55() else L11();
  L38():
    goto L4(r30);
  L40():
    hlines3 = force? hlines2;
    checkMissing(hlines3);
    c8 = `is.object`(hlines3);
    if c8 then L41() else L42(hlines3);
  L51():
    hlines13 = ld hlines;
    check L53() else D21();
  L52():
    r36 = dyn base2(<sym hlines>);
    goto L10(r36);
  D21():
    deopt 87 [hlines13];
  L6(dx1):
    st hlines = dx1;
    goto L9();
  L11():
    st `header.info` = NULL;
    goto L13();
  L13():
    _code2html_payload_browser = ldf `.code2html_payload_browser`;
    check L64() else D27();
  L41():
    dr = tryDispatchBuiltin.1("[", hlines3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(hlines5):
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L53():
    hlines14 = force? hlines13;
    checkMissing(hlines14);
    length1 = ldf length in base;
    r38 = dyn length1(hlines14);
    check L54() else D22();
  L55():
    as_list = ldf `as.list`;
    check L56() else D23();
  D22():
    deopt 90 [r38];
  D23():
    deopt 92 [];
  D27():
    deopt 107 [];
  L7(hlines8, r32):
    __3 = ldf `[` in base;
    r35 = dyn __3(hlines8, r32);
    goto L6(r35);
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L44():
    wskip2 = ld wskip;
    check L46() else D20();
  L45():
    r31 = dyn base1(<lang `[`(wskip, 1.0)>);
    goto L7(hlines5, r31);
  L54():
    goto L10(r38);
  L56():
    p15 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p14 = prom<V +>{
        textConnection = ldf textConnection;
        p13 = prom<V +>{
          substring = ldf substring;
          p12 = prom<V +>{
            ecode2 = ld ecode;
            ecode3 = force? ecode2;
            checkMissing(ecode3);
            c11 = `is.object`(ecode3);
            if c11 then L1() else L2(ecode3);
          L0(dx6):
            return dx6;
          L1():
            dr4 = tryDispatchBuiltin.1("[", ecode3);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(ecode5):
            hlines15 = ld hlines;
            hlines16 = force? hlines15;
            __4 = ldf `[` in base;
            r39 = dyn __4(ecode5, hlines16);
            goto L0(r39);
          L3():
            dx5 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx5);
          };
          r41 = dyn substring(p12, 5.0);
          return r41;
        };
        r43 = dyn textConnection(p13);
        return r43;
      };
      r45 = dyn read_dcf(p14);
      c12 = `is.object`(r45);
      if c12 then L1() else L2();
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[", r45);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r48 = dyn __5(r45, 1.0, <missing>, TRUE);
      goto L0(r48);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r50 = dyn as_list(p15);
    check L57() else D24();
  L64():
    p16 = prom<V +>{
      ecode10 = ld ecode;
      ecode11 = force? ecode10;
      checkMissing(ecode11);
      return ecode11;
    };
    p17 = prom<V +>{
      topic7 = ld topic;
      topic8 = force? topic7;
      checkMissing(topic8);
      return topic8;
    };
    p18 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p19 = prom<V +>{
      Rhome3 = ld Rhome;
      Rhome4 = force? Rhome3;
      checkMissing(Rhome4);
      return Rhome4;
    };
    p20 = prom<V +>{
      header_info = ld `header.info`;
      header_info1 = force? header_info;
      checkMissing(header_info1);
      return header_info1;
    };
    p21 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r59 = dyn _code2html_payload_browser[, , , , Rhome, `header.info`, env]("example", p16, p17, p18, p19, p20, p21);
    check L65() else D28();
  D20():
    deopt 75 [hlines5, wskip2];
  D24():
    deopt 94 [r50];
  D28():
    deopt 118 [r59];
  L46():
    wskip3 = force? wskip2;
    checkMissing(wskip3);
    c9 = `is.object`(wskip3);
    if c9 then L47() else L48(hlines5, wskip3);
  L57():
    st `header.info` = r50;
    ecode6 = ld ecode;
    check L58() else D25();
  L65():
    popenv;
    return r59;
  D25():
    deopt 96 [ecode6];
  L8(hlines12, dx3):
    r34 = seq_len(dx3);
    goto L7(hlines12, r34);
  L47():
    dr2 = tryDispatchBuiltin.1("[", wskip3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(hlines5, dr2);
  L48(hlines10, wskip5):
    __2 = ldf `[` in base;
    r33 = dyn __2(wskip5, 1.0);
    goto L8(hlines10, r33);
  L58():
    ecode7 = force? ecode6;
    checkMissing(ecode7);
    c13 = `is.object`(ecode7);
    if c13 then L59() else L60(ecode7);
  L12(dx10):
    st ecode = dx10;
    goto L13();
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(hlines5, dx2);
  L59():
    dr8 = tryDispatchBuiltin.1("[", ecode7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L61() else L60(dr8);
  L60(ecode9):
    hlines17 = ld hlines;
    check L62() else D26();
  D26():
    deopt 98 [ecode9, hlines17];
  L61():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx9);
  L62():
    hlines18 = force? hlines17;
    checkMissing(hlines18);
    r51 = `-`(<missing>, hlines18);
    __6 = ldf `[` in base;
    r52 = dyn __6(ecode9, r51);
    goto L12(r52);
  }
}