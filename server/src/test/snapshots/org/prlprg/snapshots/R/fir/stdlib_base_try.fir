fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg try:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg r4:V, reg p:p(V +), reg r6:V, reg print:cls, reg _Last_value:*, reg _Last_value1:V, reg p1:p(V +), reg r8:V, reg options1:cls, reg r9:V, reg print1:cls, reg try1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg r12:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V, reg set_seed:cls, reg r17:V, reg __:cls, reg r18:V, reg r19:cls, reg r20:V, reg r21:cls, reg lapply:cls, reg r22:V, reg p4:p(V +), reg r24:cls, reg p5:p(V +), reg r26:V, reg unlist:cls, reg res:*, reg res1:V, reg c:L, reg res3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sapply:cls, reg res4:*, reg res5:V, reg p6:p(V +), reg r28:cls, reg p7:p(V +), reg r30:V, reg __1:cls, reg r31:V, reg p8:p(V +), reg r33:V |
    mkenv;
    r = clos inner479418353;
    st try = r;
    options = ldf options;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn options[`show.error.messages`](FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    try = ldf try;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      sym = ldf log;
      base = ldf log in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      r4 = log("a", 2.718281828459045);
      goto L0(r4);
    L2():
      r2 = dyn base("a");
      goto L0(r2);
    };
    r6 = dyn try(p);
    check L3() else D3();
  D3():
    deopt 11 [r6];
  L3():
    print = ldf print;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p1 = prom<V +>{
      _Last_value = ld `.Last.value`;
      _Last_value1 = force? _Last_value;
      checkMissing(_Last_value1);
      return _Last_value1;
    };
    r8 = dyn print(p1);
    check L5() else D5();
  D5():
    deopt 15 [r8];
  L5():
    options1 = ldf options;
    check L6() else D6();
  D6():
    deopt 17 [];
  L6():
    r9 = dyn options1[`show.error.messages`](TRUE);
    check L7() else D7();
  D7():
    deopt 20 [r9];
  L7():
    print1 = ldf print;
    check L8() else D8();
  D8():
    deopt 22 [];
  L8():
    p3 = prom<V +>{
      try1 = ldf try;
      p2 = prom<V +>{
        sym1 = ldf log;
        base1 = ldf log in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r11):
        return r11;
      L1():
        r12 = log("a", 2.718281828459045);
        goto L0(r12);
      L2():
        r10 = dyn base1("a");
        goto L0(r10);
      };
      r14 = dyn try1(p2, TRUE);
      return r14;
    };
    r16 = dyn print1(p3);
    check L9() else D9();
  D9():
    deopt 24 [r16];
  L9():
    set_seed = ldf `set.seed`;
    check L10() else D10();
  D10():
    deopt 26 [];
  L10():
    r17 = dyn set_seed(123.0);
    check L11() else D11();
  D11():
    deopt 28 [r17];
  L11():
    __ = ldf `::`;
    check L12() else D12();
  D12():
    deopt 30 [];
  L12():
    r18 = dyn __("stats", "rnorm");
    check L13() else D13();
  D13():
    deopt 33 [r18];
  L13():
    checkFun.0(r18);
    r19 = r18 as cls;
    r20 = dyn r19(50.0);
    check L14() else D14();
  D14():
    deopt 36 [r20];
  L14():
    st x = r20;
    r21 = clos inner2501545716;
    st doit = r21;
    lapply = ldf lapply;
    check L15() else D15();
  D15():
    deopt 42 [];
  L15():
    p4 = prom<V +>{
      r22 = `:`(1.0, 100.0);
      return r22;
    };
    p5 = prom<V +>{
      r24 = clos inner3002224933;
      return r24;
    };
    r26 = dyn lapply(p4, p5);
    check L16() else D16();
  D16():
    deopt 45 [r26];
  L16():
    st res = r26;
    unlist = ldf unlist;
    check L17() else D17();
  D17():
    deopt 48 [];
  L17():
    p8 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      c = `is.object`(res1);
      if c then L1() else L2(res1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", res1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(res3):
      sapply = ldf sapply;
      p6 = prom<V +>{
        res4 = ld res;
        res5 = force? res4;
        checkMissing(res5);
        return res5;
      };
      p7 = prom<V +>{
        r28 = clos inner2501545716;
        return r28;
      };
      r30 = dyn sapply(p6, p7);
      __1 = ldf `[` in base;
      r31 = dyn __1(res3, r30);
      goto L0(r31);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r33 = dyn unlist(p8);
    check L18() else D18();
  D18():
    deopt 50 [r33];
  L18():
    popenv;
    return r33;
  }
}
fun inner479418353(expr, silent, outFile) {
  (reg expr:*, reg silent:*, reg outFile:*) -+> V { var expr:*, var silent:*, reg silent_isMissing:L, reg silent_orDefault:*, var outFile:*, reg outFile_isMissing:L, reg outFile_orDefault:*, reg getOption:cls, reg stderr:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg tryCatch:cls, reg expr1:*, reg expr2:V, reg p2:p(V +), reg r5:cls, reg p3:p(V +), reg r7:V |
    mkenv;
    st expr = expr;
    silent_isMissing = missing.0(silent);
    if silent_isMissing then L0(FALSE) else L0(silent);
  L0(silent_orDefault):
    st silent = silent_orDefault;
    outFile_isMissing = missing.0(outFile);
    if outFile_isMissing then L1() else L2(outFile);
  L1():
    p1 = prom<V +>{
      getOption = ldf getOption;
      p = prom<V +>{
        stderr = ldf stderr;
        r = dyn stderr();
        return r;
      };
      r2 = dyn getOption[, default]("try.outFile", p);
      return r2;
    };
    goto L2(p1);
  L2(outFile_orDefault):
    st outFile = outFile_orDefault;
    tryCatch = ldf tryCatch;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p2 = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p3 = prom<V +>{
      r5 = clos inner3708401697;
      return r5;
    };
    r7 = dyn tryCatch[, error](p2, p3);
    check L4() else D1();
  D1():
    deopt 5 [r7];
  L4():
    popenv;
    return r7;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg conditionCall:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg call:*, reg call1:V, reg c:V, reg r4:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg call2:*, reg call3:V, reg c2:L, reg call5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg quote:cls, reg r10:V, reg identical:cls, reg r11:V, reg c3:L, reg sys_call:cls, reg p1:p(V +), reg r13:V, reg deparse:cls, reg call6:*, reg call7:V, reg p2:p(V +), reg r16:V, reg paste:cls, reg dcall:*, reg dcall1:V, reg p3:p(V +), reg r18:V, reg strsplit:cls, reg conditionMessage:cls, reg e3:*, reg e4:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg c4:L, reg r24:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:I, reg r30:V, reg dcall2:*, reg dcall3:V, reg nchar:cls, reg r31:V, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg r37:V, reg sm:*, reg sm1:V, reg c5:L, reg r39:V, reg sm3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r41:V, reg dx5:V, reg __2:cls, reg r42:V, reg nchar1:cls, reg r43:V, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg w:*, reg w1:V, reg is_na:cls, reg r47:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:I, reg r52:V, reg dcall4:*, reg dcall5:V, reg nchar2:cls, reg r53:V, reg r54:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg r59:V, reg sm4:*, reg sm5:V, reg c7:L, reg r61:V, reg sm7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r63:V, reg dx7:V, reg __3:cls, reg r64:V, reg nchar3:cls, reg r65:V, reg r66:V, reg w2:*, reg w3:V, reg LONG:*, reg LONG1:V, reg r68:V, reg c8:L, reg paste1:cls, reg prefix:*, reg prefix1:V, reg p6:p(V +), reg r70:V, reg r71:V, reg paste2:cls, reg prefix2:*, reg prefix3:V, reg p7:p(V +), reg conditionMessage1:cls, reg e5:*, reg e6:V, reg p8:p(V +), reg r75:V, reg p9:p(V +), reg r77:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg msg:*, reg msg1:V, reg c9:L, reg msg3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r80:V, reg seterrmessage:cls, reg r81:V, reg silent:*, reg silent1:V, reg r82:V, reg c10:L, reg c12:V, reg isTRUE:cls, reg getOption:cls, reg r83:V, reg p10:p(V +), reg r85:V, reg c13:L, reg c14:V, reg c16:L, reg cat:cls, reg msg4:*, reg msg5:V, reg p11:p(V +), reg outFile:*, reg outFile1:V, reg p12:p(V +), reg r88:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r89:V, reg r90:V, reg printDeferredWarnings:cls, reg r91:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r93:V, reg r94:V, reg structure:cls, reg msg6:*, reg msg7:V, reg p13:p(V +), reg e7:*, reg e8:V, reg p14:p(V +), reg r97:V, reg invisible:cls, reg r98:V |
    mkenv;
    st e = e;
    conditionCall = ldf conditionCall;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r1 = dyn conditionCall(p);
    check L28() else D1();
  D1():
    deopt 3 [r1];
  L28():
    st call = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L0(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L32() else L1();
  L29():
    call = ld call;
    check L31() else D2();
  L30():
    r2 = dyn base(<sym call>);
    goto L0(r2);
  D2():
    deopt 6 [call];
  L1():
    st prefix = "Error : ";
    goto L19();
  L19():
    paste2 = ldf paste0;
    check L90() else D27();
  L31():
    call1 = force? call;
    checkMissing(call1);
    c = `==`(call1, NULL);
    goto L0(c);
  L32():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  D27():
    deopt 134 [];
  L2(r6):
    c3 = `as.logical`(r6);
    if c3 then L42() else L5();
  L33():
    call2 = ld call;
    check L35() else D3();
  L34():
    r5 = dyn base1(<lang `[[`(call, 1)>, <lang quote(doTryCatch)>);
    goto L2(r5);
  L90():
    p7 = prom<V +>{
      prefix2 = ld prefix;
      prefix3 = force? prefix2;
      checkMissing(prefix3);
      return prefix3;
    };
    p9 = prom<V +>{
      conditionMessage1 = ldf conditionMessage;
      p8 = prom<V +>{
        e5 = ld e;
        e6 = force? e5;
        checkMissing(e6);
        return e6;
      };
      r75 = dyn conditionMessage1(p8);
      return r75;
    };
    r77 = dyn paste2(p7, p9, "\n");
    check L91() else D28();
  D3():
    deopt 12 [call2];
  D28():
    deopt 138 [r77];
  L5():
    goto L6();
  L6():
    deparse = ldf deparse;
    check L46() else D7();
  L35():
    call3 = force? call2;
    checkMissing(call3);
    c2 = `is.object`(call3);
    if c2 then L36() else L37(call3);
  L42():
    sys_call = ldf `sys.call`;
    check L43() else D5();
  L91():
    st msg = r77;
    sym8 = ldf `.Internal`;
    base8 = ldf `.Internal` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L92() else L93();
  D5():
    deopt 30 [];
  D7():
    deopt 37 [];
  L3(dx1):
    sym2 = ldf quote;
    base2 = ldf quote in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L20():
    silent = ld silent;
    check L99() else D31();
  L36():
    dr = tryDispatchBuiltin.1("[[", call3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(call5):
    __ = ldf `[[` in base;
    r7 = dyn __(call5, 1);
    goto L3(r7);
  L43():
    p1 = prom<V +>{
      return -4;
    };
    r13 = dyn sys_call(p1);
    check L44() else D6();
  L46():
    p2 = prom<V +>{
      call6 = ld call;
      call7 = force? call6;
      checkMissing(call7);
      return call7;
    };
    r16 = dyn deparse[, nlines](p2, 1);
    check L47() else D8();
  L92():
    msg = ld msg;
    check L94() else D29();
  L93():
    r78 = dyn base8(<lang seterrmessage(`[`(msg, 1))>);
    goto L20();
  D6():
    deopt 32 [r13];
  D8():
    deopt 41 [r16];
  D29():
    deopt 142 [msg];
  D31():
    deopt 149 [silent];
  L4(r9):
    identical = ldf identical in base;
    r11 = dyn identical(dx1, r9, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L41() else D4();
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L39():
    quote = ldf quote in base;
    r10 = dyn quote(<sym doTryCatch>);
    goto L4(r10);
  L40():
    r8 = dyn base2(<sym doTryCatch>);
    goto L4(r8);
  L44():
    st call = r13;
    goto L6();
  L47():
    st dcall = r16;
    paste = ldf paste;
    check L48() else D9();
  L94():
    msg1 = force? msg;
    checkMissing(msg1);
    c9 = `is.object`(msg1);
    if c9 then L95() else L96(msg1);
  L99():
    silent1 = force? silent;
    checkMissing(silent1);
    r82 = `!`(silent1);
    c10 = `as.logical`(r82);
    if c10 then L100() else L22(c10);
  D4():
    deopt 28 [r11];
  D9():
    deopt 44 [];
  L21(dx9):
    seterrmessage = ldf seterrmessage in base;
    r81 = dyn seterrmessage(dx9);
    check L98() else D30();
  L22(c12):
    c16 = `as.logical`(c12);
    if c16 then L104() else L23();
  L41():
    goto L2(r11);
  L48():
    p3 = prom<V +>{
      dcall = ld dcall;
      dcall1 = force? dcall;
      checkMissing(dcall1);
      return dcall1;
    };
    r18 = dyn paste("Error in", p3, ": ");
    check L49() else D10();
  L95():
    dr8 = tryDispatchBuiltin.1("[", msg1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L97() else L96(dr8);
  L96(msg3):
    __4 = ldf `[` in base;
    r80 = dyn __4(msg3, 1);
    goto L21(r80);
  L100():
    isTRUE = ldf isTRUE;
    check L101() else D32();
  D10():
    deopt 48 [r18];
  D30():
    deopt 148 [r81];
  D32():
    deopt 153 [c10];
  L23():
    goto L25();
  L25():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L111() else L112();
  L49():
    st prefix = r18;
    st LONG = 75;
    strsplit = ldf strsplit;
    check L50() else D11();
  L97():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L21(dx8);
  L98():
    goto L20();
  L101():
    p10 = prom<V +>{
      getOption = ldf getOption;
      r83 = dyn getOption("show.error.messages");
      return r83;
    };
    r85 = dyn isTRUE(p10);
    check L102() else D33();
  L104():
    cat = ldf cat;
    check L105() else D34();
  D11():
    deopt 54 [];
  D33():
    deopt 155 [c10, r85];
  D34():
    deopt 158 [];
  L26(r94):
    popenv;
    return r94;
  L50():
    p5 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p4 = prom<V +>{
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        return e4;
      };
      r20 = dyn conditionMessage(p4);
      return r20;
    };
    r22 = dyn strsplit(p5, "\n");
    check L51() else D12();
  L102():
    c13 = `as.logical`(r85);
    c14 = `&&`(c10, c13);
    goto L22(c14);
  L105():
    p11 = prom<V +>{
      msg4 = ld msg;
      msg5 = force? msg4;
      checkMissing(msg5);
      return msg5;
    };
    p12 = prom<V +>{
      outFile = ld outFile;
      outFile1 = force? outFile;
      checkMissing(outFile1);
      return outFile1;
    };
    r88 = dyn cat[, file](p11, p12);
    check L106() else D35();
  L111():
    structure = ldf structure;
    check L113() else D37();
  L112():
    r93 = dyn base10(<lang structure(msg, class="try-error", condition=e)>);
    goto L26(r93);
  D12():
    deopt 57 [r22];
  D35():
    deopt 162 [r88];
  D37():
    deopt 172 [];
  L51():
    c4 = `is.object`(r22);
    if c4 then L52() else L53(r22);
  L106():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L107() else L108();
  L113():
    p13 = prom<V +>{
      msg6 = ld msg;
      msg7 = force? msg6;
      checkMissing(msg7);
      return msg7;
    };
    p14 = prom<V +>{
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    r97 = dyn structure[, class, condition](p13, "try-error", p14);
    check L114() else D38();
  D38():
    deopt 178 [r97];
  L7(dx3):
    st sm = dx3;
    sym3 = ldf nchar;
    base3 = ldf nchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L24(r90):
    goto L25();
  L52():
    dr2 = tryDispatchBuiltin.1("[[", r22);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(r24):
    __1 = ldf `[[` in base;
    r25 = dyn __1(r24, 1);
    goto L7(r25);
  L107():
    printDeferredWarnings = ldf printDeferredWarnings in base;
    r91 = dyn printDeferredWarnings();
    check L109() else D36();
  L108():
    r89 = dyn base9(<lang printDeferredWarnings()>);
    goto L24(r89);
  L114():
    invisible = ldf invisible in base;
    r98 = dyn invisible(r97);
    check L115() else D39();
  D36():
    deopt 166 [r91];
  D39():
    deopt 180 [r98];
  L8(r29, r30):
    r32 = `+`(r29, r30);
    sym4 = ldf nchar;
    base4 = ldf nchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L55():
    dcall2 = ld dcall;
    check L57() else D13();
  L56():
    r28 = dyn base3[, type](<sym dcall>, "w");
    goto L8(14, r28);
  L109():
    goto L24(r91);
  L115():
    goto L26(r98);
  D13():
    deopt 65 [14, dcall2];
  L9(r36, r37):
    r44 = `+`(r36, r37);
    st w = r44;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L57():
    dcall3 = force? dcall2;
    checkMissing(dcall3);
    nchar = ldf nchar in base;
    r31 = dyn nchar(dcall3, "w", FALSE, NA_LGL);
    check L58() else D14();
  L59():
    sm = ld sm;
    check L61() else D15();
  L60():
    r35 = dyn base4[, type](<lang `[`(sm, 1)>, "w");
    goto L9(r32, r35);
  D14():
    deopt 71 [14, r31];
  D15():
    deopt 74 [r32, sm];
  L11(r46):
    c6 = `as.logical`(r46);
    if c6 then L70() else L12();
  L58():
    goto L8(14, r31);
  L61():
    sm1 = force? sm;
    checkMissing(sm1);
    c5 = `is.object`(sm1);
    if c5 then L62() else L63(r32, sm1);
  L66():
    w = ld w;
    check L68() else D17();
  L67():
    r45 = dyn base5(<sym w>);
    goto L11(r45);
  D17():
    deopt 88 [w];
  L10(r41, dx5):
    nchar1 = ldf nchar in base;
    r43 = dyn nchar1(dx5, "w", FALSE, NA_LGL);
    check L65() else D16();
  L12():
    goto L16();
  L16():
    w2 = ld w;
    check L83() else D23();
  L62():
    dr4 = tryDispatchBuiltin.1("[", sm1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L64() else L63(r32, dr4);
  L63(r39, sm3):
    __2 = ldf `[` in base;
    r42 = dyn __2(sm3, 1);
    goto L10(r39, r42);
  L68():
    w1 = force? w;
    checkMissing(w1);
    is_na = ldf `is.na` in base;
    r47 = dyn is_na(w1);
    check L69() else D18();
  L70():
    sym6 = ldf nchar;
    base6 = ldf nchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  D16():
    deopt 83 [r41, r43];
  D18():
    deopt 91 [r47];
  D23():
    deopt 118 [w2];
  L13(r51, r52):
    r54 = `+`(r51, r52);
    sym7 = ldf nchar;
    base7 = ldf nchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  L64():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(r32, dx4);
  L65():
    goto L9(r41, r43);
  L69():
    goto L11(r47);
  L71():
    dcall4 = ld dcall;
    check L73() else D19();
  L72():
    r50 = dyn base6[, type](<sym dcall>, "b");
    goto L13(14, r50);
  L83():
    w3 = force? w2;
    checkMissing(w3);
    LONG = ld LONG;
    check L84() else D24();
  D19():
    deopt 95 [14, dcall4];
  D24():
    deopt 119 [w3, LONG];
  L14(r58, r59):
    r66 = `+`(r58, r59);
    st w = r66;
    goto L16();
  L73():
    dcall5 = force? dcall4;
    checkMissing(dcall5);
    nchar2 = ldf nchar in base;
    r53 = dyn nchar2(dcall5, "b", FALSE, NA_LGL);
    check L74() else D20();
  L75():
    sm4 = ld sm;
    check L77() else D21();
  L76():
    r57 = dyn base7[, type](<lang `[`(sm, 1)>, "b");
    goto L14(r54, r57);
  L84():
    LONG1 = force? LONG;
    checkMissing(LONG1);
    r68 = `>`(w3, LONG1);
    c8 = `as.logical`(r68);
    if c8 then L85() else L17();
  D20():
    deopt 101 [14, r53];
  D21():
    deopt 104 [r54, sm4];
  L17():
    goto L18(NULL);
  L18(r71):
    goto L19();
  L74():
    goto L13(14, r53);
  L77():
    sm5 = force? sm4;
    checkMissing(sm5);
    c7 = `is.object`(sm5);
    if c7 then L78() else L79(r54, sm5);
  L85():
    paste1 = ldf paste0;
    check L86() else D25();
  D25():
    deopt 123 [];
  L15(r63, dx7):
    nchar3 = ldf nchar in base;
    r65 = dyn nchar3(dx7, "b", FALSE, NA_LGL);
    check L81() else D22();
  L78():
    dr6 = tryDispatchBuiltin.1("[", sm5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L80() else L79(r54, dr6);
  L79(r61, sm7):
    __3 = ldf `[` in base;
    r64 = dyn __3(sm7, 1);
    goto L15(r61, r64);
  L86():
    p6 = prom<V +>{
      prefix = ld prefix;
      prefix1 = force? prefix;
      checkMissing(prefix1);
      return prefix1;
    };
    r70 = dyn paste1(p6, "\n  ");
    check L87() else D26();
  D22():
    deopt 113 [r63, r65];
  D26():
    deopt 126 [r70];
  L80():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(r54, dx6);
  L81():
    goto L14(r63, r65);
  L87():
    st prefix = r70;
    goto L18(r70);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sample:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg unique:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r5:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg mean:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r9:V, reg stop:cls, reg r10:V |
    mkenv;
    st x = x;
    sample = ldf sample;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn sample[, replace](p, TRUE);
    check L3() else D1();
  D1():
    deopt 5 [r1];
  L3():
    st x = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    r7 = `>`(r3, 30.0);
    c = `as.logical`(r7);
    if c then L9() else L1();
  L4():
    unique = ldf unique;
    check L6() else D2();
  L5():
    r2 = dyn base(<lang unique(x)>);
    goto L0(r2);
  D2():
    deopt 10 [];
  L1():
    stop = ldf stop;
    check L13() else D7();
  L6():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn unique(p1);
    check L7() else D3();
  L9():
    mean = ldf mean;
    check L10() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 18 [];
  D7():
    deopt 22 [];
  L7():
    length = ldf length in base;
    r6 = dyn length(r5);
    check L8() else D4();
  L10():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r9 = dyn mean(p2);
    check L11() else D6();
  L13():
    r10 = dyn stop("too few unique points");
    check L14() else D8();
  D4():
    deopt 14 [r6];
  D6():
    deopt 20 [r9];
  D8():
    deopt 24 [r10];
  L8():
    goto L0(r6);
  L11():
    popenv;
    return r9;
  L14():
    popenv;
    return r10;
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg try:cls, reg doit:cls, reg x:*, reg x1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st i = i;
    try = ldf try;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      doit = ldf doit;
      p = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r1 = dyn doit(p);
      return r1;
    };
    r3 = dyn try(p1, TRUE);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}