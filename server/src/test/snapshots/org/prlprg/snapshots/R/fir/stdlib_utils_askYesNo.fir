fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg interactive:cls, reg r3:V, reg c:L, reg askYesNo:cls, reg r4:V |
    mkenv;
    r = clos inner3960020050;
    st askYesNo = r;
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    c = `as.logical`(r2);
    if c then L5() else L1();
  L2():
    interactive = ldf interactive in base;
    r3 = dyn interactive();
    check L4() else D0();
  L3():
    r1 = dyn base();
    goto L0(r1);
  D0():
    deopt 6 [r3];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    goto L0(r3);
  L5():
    askYesNo = ldf askYesNo;
    check L6() else D1();
  D1():
    deopt 8 [];
  L6():
    r4 = dyn askYesNo("Do you want to use askYesNo?");
    check L7() else D2();
  D2():
    deopt 10 [r4];
  L7():
    popenv;
    return r4;
  }
}
fun inner3960020050(msg, default, prompts, `...`) {
  (reg msg:*, reg default:*, reg prompts:*, reg ddd:dots) -+> V { var msg:*, var default:*, reg default_isMissing:L, reg default_orDefault:*, var prompts:*, reg prompts_isMissing:L, reg prompts_orDefault:*, reg getOption:cls, reg gettext:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg prompts1:*, reg prompts2:V, reg c1:L, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c7:L, reg r11:V, reg prompts3:*, reg prompts4:V, reg length:cls, reg r12:V, reg r13:V, reg c8:L, reg c9:V, reg c11:L, reg strsplit:cls, reg prompts5:*, reg prompts6:V, reg p3:p(V +), reg r15:V, reg c12:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg prompts7:*, reg prompts8:V, reg c13:L, reg r21:V, reg c14:L, reg c15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg c19:L, reg r23:V, reg prompts9:*, reg prompts10:V, reg length1:cls, reg r24:V, reg r25:V, reg c20:L, reg c21:V, reg c23:L, reg match_fun:cls, reg prompts11:*, reg prompts12:V, reg p4:p(V +), reg r27:V, reg fn:cls, reg msg1:*, reg msg2:V, reg p5:p(V +), reg default1:*, reg default2:V, reg p6:p(V +), reg prompts13:*, reg prompts14:V, reg p7:p(V +), reg ddd1:dots?, reg r31:V, reg tolower:cls, reg prompts15:*, reg prompts16:V, reg p8:p(V +), reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg default3:*, reg default4:V, reg is_na:cls, reg r38:V, reg c24:L, reg prompts17:*, reg prompts18:V, reg c25:L, reg prompts20:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r39:V, reg l:*, reg c26:L, reg dx6:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg dx10:V, reg ___:cls, reg r40:V, reg default5:*, reg default6:V, reg c27:L, reg prompts21:*, reg prompts22:V, reg c28:L, reg prompts24:V, reg dr6:V, reg dc3:L, reg dx12:V, reg dx13:V, reg __2:cls, reg r41:V, reg l3:*, reg c29:L, reg dx15:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx17:V, reg dx18:V, reg dx19:V, reg ___1:cls, reg r42:V, reg prompts25:*, reg prompts26:V, reg c30:L, reg prompts28:V, reg dr10:V, reg dc5:L, reg dx20:V, reg dx21:V, reg __3:cls, reg r43:V, reg l6:*, reg c31:L, reg dx23:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx25:V, reg dx26:V, reg dx27:V, reg ___2:cls, reg r44:V, reg paste0:cls, reg paste1:cls, reg choices:*, reg choices1:V, reg p9:p(V +), reg r46:V, reg p10:p(V +), reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg paste2:cls, reg msg3:*, reg msg4:V, reg p11:p(V +), reg msg5:*, reg msg6:V, reg p12:p(V +), reg r53:V, reg nchar:cls, reg r54:V, reg r55:V, reg c32:L, reg cat:cls, reg msg7:*, reg msg8:V, reg p13:p(V +), reg r57:V, reg msg9:*, reg msg10:V, reg paste3:cls, reg msg12:*, reg msg13:V, reg p14:p(V +), reg msg14:*, reg msg15:V, reg p15:p(V +), reg r60:V, reg readline:cls, reg msg16:*, reg msg17:V, reg p16:p(V +), reg r62:V, reg pmatch:cls, reg tolower1:cls, reg ans:*, reg ans1:V, reg p17:p(V +), reg r64:V, reg p18:p(V +), reg tolower2:cls, reg choices2:*, reg choices3:V, reg p19:p(V +), reg r67:V, reg p20:p(V +), reg r69:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg ans2:*, reg ans3:V, reg nzchar:cls, reg r72:V, reg r73:V, reg c33:L, reg default7:*, reg default8:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg r75:V, reg match:*, reg match1:V, reg is_na1:cls, reg r76:V, reg c34:L, reg stop:cls, reg dQuote:cls, reg ans4:*, reg ans5:V, reg p21:p(V +), reg r78:V, reg p22:p(V +), reg r80:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r81:V, reg r82:V, reg c35:cls, reg r83:V, reg c36:L, reg r85:V, reg dr14:V, reg dc7:L, reg dx28:V, reg dx29:V, reg match2:*, reg match3:V, reg __4:cls, reg r86:V |
    mkenv;
    st msg = msg;
    default_isMissing = missing.0(default);
    if default_isMissing then L0(TRUE) else L0(default);
  L0(default_orDefault):
    st default = default_orDefault;
    prompts_isMissing = missing.0(prompts);
    if prompts_isMissing then L1() else L2(prompts);
  L1():
    p2 = prom<V +>{
      getOption = ldf getOption;
      p1 = prom<V +>{
        gettext = ldf gettext;
        p = prom<V +>{
          sym = ldf c;
          base = ldf c in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r1):
          return r1;
        L1():
          c = ldf c in base;
          r2 = dyn c("Yes", "No", "Cancel");
          goto L0(r2);
        L2():
          r = dyn base("Yes", "No", "Cancel");
          goto L0(r);
        };
        r4 = dyn gettext(p);
        return r4;
      };
      r6 = dyn getOption("askYesNo", p1);
      return r6;
    };
    goto L2(p2);
  L2(prompts_orDefault):
    st prompts = prompts_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L3(r9):
    c2 = `as.logical`(r9);
    if c2 then L36() else L4(c2);
  L33():
    prompts1 = ld prompts;
    check L35() else D0();
  L34():
    r8 = dyn base1(<sym prompts>);
    goto L3(r8);
  D0():
    deopt 1 [prompts1];
  L4(c4):
    c11 = `as.logical`(c4);
    if c11 then L42() else L6();
  L35():
    prompts2 = force? prompts1;
    checkMissing(prompts2);
    c1 = `is.character`(prompts2);
    goto L3(c1);
  L36():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L5(c7, r11):
    r13 = `==`(r11, 1.0);
    c8 = `as.logical`(r13);
    c9 = `&&`(c7, c8);
    goto L4(c9);
  L6():
    goto L8();
  L8():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L37():
    prompts3 = ld prompts;
    check L39() else D1();
  L38():
    r10 = dyn base2(<sym prompts>);
    goto L5(c2, r10);
  L42():
    strsplit = ldf strsplit;
    check L43() else D3();
  D1():
    deopt 6 [c2, prompts3];
  D3():
    deopt 14 [];
  L9(r20):
    r21 = `!`(r20);
    c14 = `as.logical`(r21);
    if c14 then L10(c14) else L52();
  L39():
    prompts4 = force? prompts3;
    checkMissing(prompts4);
    length = ldf length in base;
    r12 = dyn length(prompts4);
    check L40() else D2();
  L43():
    p3 = prom<V +>{
      prompts5 = ld prompts;
      prompts6 = force? prompts5;
      checkMissing(prompts6);
      return prompts6;
    };
    r15 = dyn strsplit(p3, "/");
    check L44() else D4();
  L49():
    prompts7 = ld prompts;
    check L51() else D5();
  L50():
    r19 = dyn base3(<sym prompts>);
    goto L9(r19);
  D2():
    deopt 9 [c2, r12];
  D4():
    deopt 17 [r15];
  D5():
    deopt 25 [prompts7];
  L10(c15):
    c23 = `as.logical`(c15);
    if c23 then L58() else L12();
  L40():
    goto L5(c2, r12);
  L44():
    c12 = `is.object`(r15);
    if c12 then L45() else L46(r15);
  L51():
    prompts8 = force? prompts7;
    checkMissing(prompts8);
    c13 = `is.character`(prompts8);
    goto L9(c13);
  L52():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L7(dx1):
    st prompts = dx1;
    goto L8();
  L11(c19, r23):
    r25 = `!=`(r23, 3.0);
    c20 = `as.logical`(r25);
    c21 = `||`(c19, c20);
    goto L10(c21);
  L12():
    tolower = ldf tolower;
    check L65() else D12();
  L45():
    dr = tryDispatchBuiltin.1("[[", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(r17):
    __ = ldf `[[` in base;
    r18 = dyn __(r17, 1.0);
    goto L7(r18);
  L53():
    prompts9 = ld prompts;
    check L55() else D6();
  L54():
    r22 = dyn base4(<sym prompts>);
    goto L11(c14, r22);
  L58():
    match_fun = ldf `match.fun`;
    check L59() else D8();
  D6():
    deopt 31 [c14, prompts9];
  D8():
    deopt 39 [];
  D12():
    deopt 57 [];
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L55():
    prompts10 = force? prompts9;
    checkMissing(prompts10);
    length1 = ldf length in base;
    r24 = dyn length1(prompts10);
    check L56() else D7();
  L59():
    p4 = prom<V +>{
      prompts11 = ld prompts;
      prompts12 = force? prompts11;
      checkMissing(prompts12);
      return prompts12;
    };
    r27 = dyn match_fun(p4);
    check L60() else D9();
  L65():
    p8 = prom<V +>{
      prompts15 = ld prompts;
      prompts16 = force? prompts15;
      checkMissing(prompts16);
      return prompts16;
    };
    r35 = dyn tolower(p8);
    check L66() else D13();
  D7():
    deopt 34 [c14, r24];
  D9():
    deopt 41 [r27];
  D13():
    deopt 59 [r35];
  L56():
    goto L11(c14, r24);
  L60():
    st fn = r27;
    fn = ldf fn;
    check L61() else D10();
  L66():
    st choices = r35;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  D10():
    deopt 44 [];
  L14(r37):
    c24 = `as.logical`(r37);
    if c24 then L71() else L15();
  L61():
    p5 = prom<V +>{
      msg1 = ld msg;
      msg2 = force? msg1;
      checkMissing(msg2);
      return msg2;
    };
    p6 = prom<V +>{
      default1 = ld default;
      default2 = force? default1;
      checkMissing(default2);
      return default2;
    };
    p7 = prom<V +>{
      prompts13 = ld prompts;
      prompts14 = force? prompts13;
      checkMissing(prompts14);
      return prompts14;
    };
    ddd1 = ld `...`;
    r31 = dyn fn[msg, default, prompts, `...`](p5, p6, p7, ddd1);
    check L62() else D11();
  L67():
    default3 = ld default;
    check L69() else D14();
  L68():
    r36 = dyn base5(<sym default>);
    goto L14(r36);
  D11():
    deopt 52 [r31];
  D14():
    deopt 63 [default3];
  L15():
    default5 = ld default;
    check L80() else D17();
  L18():
    paste0 = ldf paste0;
    check L97() else D20();
  L62():
    popenv;
    return r31;
  L69():
    default4 = force? default3;
    checkMissing(default4);
    is_na = ldf `is.na` in base;
    r38 = dyn is_na(default4);
    check L70() else D15();
  L71():
    prompts17 = ld prompts;
    check L72() else D16();
  D15():
    deopt 66 [r38];
  D16():
    deopt 67 [prompts17];
  D17():
    deopt 77 [default5];
  D20():
    deopt 100 [];
  L70():
    goto L14(r38);
  L72():
    prompts18 = force? prompts17;
    checkMissing(prompts18);
    c25 = `is.object`(prompts18);
    if c25 then L73() else L74(prompts18);
  L80():
    default6 = force? default5;
    checkMissing(default6);
    c27 = `as.logical`(default6);
    if c27 then L81() else L19();
  L97():
    p10 = prom<V +>{
      paste1 = ldf paste;
      p9 = prom<V +>{
        choices = ld choices;
        choices1 = force? choices;
        checkMissing(choices1);
        return choices1;
      };
      r46 = dyn paste1[, collapse](p9, "/");
      return r46;
    };
    r48 = dyn paste0("(", p10, ") ");
    check L98() else D21();
  D21():
    deopt 104 [r48];
  L16(dx4):
    l = ld choices;
    c26 = `is.object`(l);
    if c26 then L76() else L77(dx4, l);
  L19():
    prompts25 = ld prompts;
    check L90() else D19();
  L73():
    dr2 = tryDispatchBuiltin.1("[", prompts18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L75() else L74(dr2);
  L74(prompts20):
    __1 = ldf `[` in base;
    r39 = dyn __1(prompts20, 3);
    goto L16(r39);
  L81():
    prompts21 = ld prompts;
    check L82() else D18();
  L98():
    st msg1 = r48;
    sym6 = ldf nchar;
    base6 = ldf nchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L99() else L100();
  D18():
    deopt 79 [prompts21];
  D19():
    deopt 89 [prompts25];
  L17(dx9, dx10):
    st choices = dx10;
    goto L18();
  L24(r50):
    r55 = `>`(r50, 250.0);
    c32 = `as.logical`(r55);
    if c32 then L104() else L25();
  L75():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx3);
  L76():
    dr4 = tryDispatchBuiltin.0("[<-", l, dx4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L78() else L77(dx4, dr4);
  L77(dx6, l2):
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l2, dx4, 3);
    goto L17(dx6, r40);
  L82():
    prompts22 = force? prompts21;
    checkMissing(prompts22);
    c28 = `is.object`(prompts22);
    if c28 then L83() else L84(prompts22);
  L90():
    prompts26 = force? prompts25;
    checkMissing(prompts26);
    c30 = `is.object`(prompts26);
    if c30 then L91() else L92(prompts26);
  L99():
    paste2 = ldf paste0;
    check L101() else D22();
  L100():
    r49 = dyn base6(<lang paste0(msg, msg1)>);
    goto L24(r49);
  D22():
    deopt 109 [];
  L20(dx13):
    l3 = ld choices;
    c29 = `is.object`(l3);
    if c29 then L86() else L87(dx13, l3);
  L22(dx21):
    l6 = ld choices;
    c31 = `is.object`(l6);
    if c31 then L94() else L95(dx21, l6);
  L25():
    paste3 = ldf paste0;
    check L109() else D28();
  L26():
    readline = ldf readline;
    check L111() else D30();
  L78():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx4, dx8);
  L83():
    dr6 = tryDispatchBuiltin.1("[", prompts22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L85() else L84(dr6);
  L84(prompts24):
    __2 = ldf `[` in base;
    r41 = dyn __2(prompts24, 1);
    goto L20(r41);
  L91():
    dr10 = tryDispatchBuiltin.1("[", prompts26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L93() else L92(dr10);
  L92(prompts28):
    __3 = ldf `[` in base;
    r43 = dyn __3(prompts28, 2);
    goto L22(r43);
  L101():
    p11 = prom<V +>{
      msg3 = ld msg;
      msg4 = force? msg3;
      checkMissing(msg4);
      return msg4;
    };
    p12 = prom<V +>{
      msg5 = ld msg1;
      msg6 = force? msg5;
      checkMissing(msg6);
      return msg6;
    };
    r53 = dyn paste2(p11, p12);
    check L102() else D23();
  L104():
    cat = ldf cat;
    check L105() else D25();
  D23():
    deopt 112 [r53];
  D25():
    deopt 121 [];
  D28():
    deopt 129 [];
  D30():
    deopt 136 [];
  L21(dx18, dx19):
    st choices = dx19;
    goto L18();
  L23(dx26, dx27):
    st choices = dx27;
    goto L18();
  L85():
    dx12 = getTryDispatchBuiltinValue(dr6);
    goto L20(dx12);
  L86():
    dr8 = tryDispatchBuiltin.0("[<-", l3, dx13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L88() else L87(dx13, dr8);
  L87(dx15, l5):
    ___1 = ldf `[<-` in base;
    r42 = dyn ___1(l5, dx13, 1);
    goto L21(dx15, r42);
  L93():
    dx20 = getTryDispatchBuiltinValue(dr10);
    goto L22(dx20);
  L94():
    dr12 = tryDispatchBuiltin.0("[<-", l6, dx21);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L96() else L95(dx21, dr12);
  L95(dx23, l8):
    ___2 = ldf `[<-` in base;
    r44 = dyn ___2(l8, dx21, 2);
    goto L23(dx23, r44);
  L102():
    nchar = ldf nchar in base;
    r54 = dyn nchar(r53, "chars", FALSE, NA_LGL);
    check L103() else D24();
  L105():
    p13 = prom<V +>{
      msg7 = ld msg;
      msg8 = force? msg7;
      checkMissing(msg8);
      return msg8;
    };
    r57 = dyn cat(p13, "\n");
    check L106() else D26();
  L109():
    p14 = prom<V +>{
      msg12 = ld msg;
      msg13 = force? msg12;
      checkMissing(msg13);
      return msg13;
    };
    p15 = prom<V +>{
      msg14 = ld msg1;
      msg15 = force? msg14;
      checkMissing(msg15);
      return msg15;
    };
    r60 = dyn paste3(p14, " ", p15);
    check L110() else D29();
  L111():
    p16 = prom<V +>{
      msg16 = ld msg;
      msg17 = force? msg16;
      checkMissing(msg17);
      return msg17;
    };
    r62 = dyn readline(p16);
    check L112() else D31();
  D24():
    deopt 117 [r54];
  D26():
    deopt 124 [r57];
  D29():
    deopt 133 [r60];
  D31():
    deopt 138 [r62];
  L88():
    dx17 = getTryDispatchBuiltinValue(dr8);
    goto L21(dx13, dx17);
  L96():
    dx25 = getTryDispatchBuiltinValue(dr12);
    goto L23(dx21, dx25);
  L103():
    goto L24(r54);
  L106():
    msg9 = ld msg1;
    check L107() else D27();
  L110():
    st msg = r60;
    goto L26();
  L112():
    st ans = r62;
    pmatch = ldf pmatch;
    check L113() else D32();
  D27():
    deopt 125 [msg9];
  D32():
    deopt 141 [];
  L107():
    msg10 = force? msg9;
    checkMissing(msg10);
    st msg = msg10;
    goto L26();
  L113():
    p18 = prom<V +>{
      tolower1 = ldf tolower;
      p17 = prom<V +>{
        ans = ld ans;
        ans1 = force? ans;
        checkMissing(ans1);
        return ans1;
      };
      r64 = dyn tolower1(p17);
      return r64;
    };
    p20 = prom<V +>{
      tolower2 = ldf tolower;
      p19 = prom<V +>{
        choices2 = ld choices;
        choices3 = force? choices2;
        checkMissing(choices3);
        return choices3;
      };
      r67 = dyn tolower2(p19);
      return r67;
    };
    r69 = dyn pmatch(p18, p20);
    check L114() else D33();
  D33():
    deopt 144 [r69];
  L114():
    st match = r69;
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L115() else L116();
  L27(r71):
    r73 = `!`(r71);
    c33 = `as.logical`(r73);
    if c33 then L119() else L28();
  L115():
    ans2 = ld ans;
    check L117() else D34();
  L116():
    r70 = dyn base7(<sym ans>);
    goto L27(r70);
  D34():
    deopt 148 [ans2];
  L28():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L122() else L123();
  L117():
    ans3 = force? ans2;
    checkMissing(ans3);
    nzchar = ldf nzchar in base;
    r72 = dyn nzchar(ans3);
    check L118() else D35();
  L119():
    default7 = ld default;
    check L120() else D36();
  D35():
    deopt 151 [r72];
  D36():
    deopt 153 [default7];
  L29(r75):
    c34 = `as.logical`(r75);
    if c34 then L126() else L30();
  L118():
    goto L27(r72);
  L120():
    default8 = force? default7;
    checkMissing(default8);
    popenv;
    return default8;
  L122():
    match = ld match;
    check L124() else D37();
  L123():
    r74 = dyn base8(<sym match>);
    goto L29(r74);
  D37():
    deopt 157 [match];
  L30():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L130() else L131();
  L124():
    match1 = force? match;
    checkMissing(match1);
    is_na1 = ldf `is.na` in base;
    r76 = dyn is_na1(match1);
    check L125() else D38();
  L126():
    stop = ldf stop;
    check L127() else D39();
  D38():
    deopt 160 [r76];
  D39():
    deopt 162 [];
  L31(r82):
    c36 = `is.object`(r82);
    if c36 then L133() else L134(r82);
  L125():
    goto L29(r76);
  L127():
    p22 = prom<V +>{
      dQuote = ldf dQuote;
      p21 = prom<V +>{
        ans4 = ld ans;
        ans5 = force? ans4;
        checkMissing(ans5);
        return ans5;
      };
      r78 = dyn dQuote(p21);
      return r78;
    };
    r80 = dyn stop("Unrecognized response ", p22);
    check L128() else D40();
  L130():
    c35 = ldf c in base;
    r83 = dyn c35(TRUE, FALSE, NA_LGL);
    check L132() else D41();
  L131():
    r81 = dyn base9(TRUE, FALSE, NA_LGL);
    goto L31(r81);
  D40():
    deopt 165 [r80];
  D41():
    deopt 172 [r83];
  L32(dx29):
    popenv;
    return dx29;
  L128():
    popenv;
    return r80;
  L132():
    goto L31(r83);
  L133():
    dr14 = tryDispatchBuiltin.1("[", r82);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L135() else L134(dr14);
  L134(r85):
    match2 = ld match;
    check L136() else D42();
  D42():
    deopt 173 [r85, match2];
  L135():
    dx28 = getTryDispatchBuiltinValue(dr14);
    goto L32(dx28);
  L136():
    match3 = force? match2;
    __4 = ldf `[` in base;
    r86 = dyn __4(r85, match3);
    goto L32(r86);
  }
}