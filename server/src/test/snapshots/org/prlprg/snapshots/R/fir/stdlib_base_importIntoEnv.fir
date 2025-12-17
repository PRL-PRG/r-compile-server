fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner974150676;
    st importIntoEnv = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner974150676(impenv, impnames, expenv, expnames) {
  (reg impenv:*, reg impnames:*, reg expenv:*, reg expnames:*) -+> V { var impenv:*, var impnames:*, var expenv:*, var expnames:*, reg getNamespaceInfo:cls, reg expenv1:*, reg expenv2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg exports:*, reg exports1:V, reg names:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg _in_:cls, reg expnames1:*, reg expnames2:V, reg p1:p(V +), reg ex:*, reg ex1:V, reg p2:p(V +), reg r9:V, reg all:cls, reg r10:V, reg r11:V, reg c:L, reg expnames3:*, reg expnames4:V, reg c1:L, reg expnames6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg eie:*, reg eie1:V, reg r12:V, reg __:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg startsWith:cls, reg miss:*, reg miss1:V, reg p3:p(V +), reg r17:V, reg all1:cls, reg r18:V, reg c2:L, reg sub:cls, reg miss2:*, reg miss3:V, reg p4:p(V +), reg r20:V, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg miss4:*, reg miss5:V, reg length:cls, reg r23:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg paste:cls, reg paste1:cls, reg miss6:*, reg miss7:V, reg p7:p(V +), reg r28:V, reg p8:p(V +), reg r30:V, reg p9:p(V +), reg getNamespaceName:cls, reg expenv3:*, reg expenv4:V, reg p10:p(V +), reg r33:V, reg p11:p(V +), reg r35:V, reg p12:p(V +), reg r37:V, reg r38:V, reg stop1:cls, reg sprintf1:cls, reg ngettext1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg miss8:*, reg miss9:V, reg length1:cls, reg r41:V, reg p13:p(V +), reg r43:V, reg p14:p(V +), reg paste2:cls, reg sQuote:cls, reg miss10:*, reg miss11:V, reg p15:p(V +), reg r46:V, reg p16:p(V +), reg r48:V, reg p17:p(V +), reg getNamespaceName1:cls, reg expenv5:*, reg expenv6:V, reg p18:p(V +), reg r51:V, reg p19:p(V +), reg r53:V, reg p20:p(V +), reg r55:V, reg unlist:cls, reg mget:cls, reg expnames7:*, reg expnames8:V, reg p21:p(V +), reg exports2:*, reg exports3:V, reg p22:p(V +), reg r59:V, reg p23:p(V +), reg r61:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r62:V, reg r63:V, reg impnames1:*, reg impnames2:V, reg c3:V, reg c4:L, reg character:cls, reg r64:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r66:V, reg r67:V, reg expnames9:*, reg expnames10:V, reg c5:V, reg c6:L, reg character1:cls, reg r68:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg impenv1:*, reg impenv2:V, reg impnames3:*, reg impnames4:V, reg expenv7:*, reg expenv8:V, reg expnames11:*, reg expnames12:V, reg importIntoEnv:cls, reg r72:V |
    mkenv;
    st impenv = impenv;
    st impnames = impnames;
    st expenv = expenv;
    st expnames = expnames;
    getNamespaceInfo = ldf getNamespaceInfo;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      expenv1 = ld expenv;
      expenv2 = force? expenv1;
      checkMissing(expenv2);
      return expenv2;
    };
    r1 = dyn getNamespaceInfo(p, "exports");
    check L16() else D1();
  D1():
    deopt 4 [r1];
  L16():
    st exports = r1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r3):
    st ex = r3;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L17():
    exports = ld exports;
    check L19() else D2();
  L18():
    r2 = dyn base(<sym exports>);
    goto L0(r2);
  D2():
    deopt 8 [exports];
  L1(r6):
    r11 = `!`(r6);
    c = `as.logical`(r11);
    if c then L26() else L2();
  L19():
    exports1 = force? exports;
    checkMissing(exports1);
    names = ldf names in base;
    r4 = dyn names(exports1);
    check L20() else D3();
  L21():
    _in_ = ldf `%in%`;
    check L23() else D4();
  L22():
    r5 = dyn base1(<lang `<-`(eie, `%in%`(expnames, ex))>);
    goto L1(r5);
  D3():
    deopt 11 [r4];
  D4():
    deopt 16 [];
  L2():
    goto L7();
  L7():
    unlist = ldf unlist;
    check L46() else D18();
  L20():
    goto L0(r4);
  L23():
    p1 = prom<V +>{
      expnames1 = ld expnames;
      expnames2 = force? expnames1;
      checkMissing(expnames2);
      return expnames2;
    };
    p2 = prom<V +>{
      ex = ld ex;
      ex1 = force? ex;
      checkMissing(ex1);
      return ex1;
    };
    r9 = dyn _in_(p1, p2);
    check L24() else D5();
  L26():
    expnames3 = ld expnames;
    check L27() else D7();
  D5():
    deopt 19 [r9];
  D7():
    deopt 24 [expnames3];
  D18():
    deopt 66 [];
  L24():
    st eie = r9;
    all = ldf all in base;
    r10 = dyn all(r9);
    check L25() else D6();
  L27():
    expnames4 = force? expnames3;
    checkMissing(expnames4);
    c1 = `is.object`(expnames4);
    if c1 then L28() else L29(expnames4);
  L46():
    p23 = prom<V +>{
      mget = ldf mget;
      p21 = prom<V +>{
        expnames7 = ld expnames;
        expnames8 = force? expnames7;
        checkMissing(expnames8);
        return expnames8;
      };
      p22 = prom<V +>{
        exports2 = ld exports;
        exports3 = force? exports2;
        checkMissing(exports3);
        return exports3;
      };
      r59 = dyn mget[, envir, inherits](p21, p22, FALSE);
      return r59;
    };
    r61 = dyn unlist[, recursive](p23, FALSE);
    check L47() else D19();
  D6():
    deopt 22 [r10];
  D19():
    deopt 70 [r61];
  L3(dx1):
    st miss = dx1;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L25():
    goto L1(r10);
  L28():
    dr = tryDispatchBuiltin.1("[", expnames4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(expnames6):
    eie = ld eie;
    check L31() else D8();
  L47():
    st expnames = r61;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  D8():
    deopt 26 [expnames6, eie];
  L4(r15):
    c2 = `as.logical`(r15);
    if c2 then L37() else L5();
  L8(r63):
    c4 = `as.logical`(r63);
    if c4 then L51() else L9();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L31():
    eie1 = force? eie;
    checkMissing(eie1);
    r12 = `!`(eie1);
    __ = ldf `[` in base;
    r13 = dyn __(expnames6, r12);
    goto L3(r13);
  L32():
    startsWith = ldf startsWith;
    check L34() else D9();
  L33():
    r14 = dyn base2(<lang startsWith(miss, ".__C__")>);
    goto L4(r14);
  L48():
    impnames1 = ld impnames;
    check L50() else D20();
  L49():
    r62 = dyn base5(<sym impnames>);
    goto L8(r62);
  D9():
    deopt 34 [];
  D20():
    deopt 73 [impnames1];
  L5():
    stop1 = ldf stop;
    check L43() else D16();
  L6(r38):
    goto L7();
  L9():
    goto L10();
  L10():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L34():
    p3 = prom<V +>{
      miss = ld miss;
      miss1 = force? miss;
      checkMissing(miss1);
      return miss1;
    };
    r17 = dyn startsWith(p3, ".__C__");
    check L35() else D10();
  L37():
    sub = ldf sub;
    check L38() else D12();
  L50():
    impnames2 = force? impnames1;
    checkMissing(impnames2);
    c3 = `==`(impnames2, NULL);
    goto L8(c3);
  L51():
    character = ldf character;
    check L52() else D21();
  D10():
    deopt 37 [r17];
  D12():
    deopt 41 [];
  D16():
    deopt 56 [];
  D21():
    deopt 77 [];
  L11(r67):
    c6 = `as.logical`(r67);
    if c6 then L58() else L12();
  L35():
    all1 = ldf all in base;
    r18 = dyn all1(r17);
    check L36() else D11();
  L38():
    p4 = prom<V +>{
      miss2 = ld miss;
      miss3 = force? miss2;
      checkMissing(miss3);
      return miss3;
    };
    r20 = dyn sub("^\\.__C__", "", p4);
    check L39() else D13();
  L43():
    p20 = prom<V +>{
      sprintf1 = ldf sprintf;
      p14 = prom<V +>{
        ngettext1 = ldf ngettext;
        p13 = prom<V +>{
          sym4 = ldf length;
          base4 = ldf length in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r40):
          return r40;
        L1():
          miss8 = ld miss;
          miss9 = force? miss8;
          checkMissing(miss9);
          length1 = ldf length in base;
          r41 = dyn length1(miss9);
          goto L0(r41);
        L2():
          r39 = dyn base4(<sym miss>);
          goto L0(r39);
        };
        r43 = dyn ngettext1(p13, "object %s is not exported by 'namespace:%s'", "objects %s are not exported by 'namespace:%s'");
        return r43;
      };
      p17 = prom<V +>{
        paste2 = ldf paste;
        p16 = prom<V +>{
          sQuote = ldf sQuote;
          p15 = prom<V +>{
            miss10 = ld miss;
            miss11 = force? miss10;
            checkMissing(miss11);
            return miss11;
          };
          r46 = dyn sQuote(p15);
          return r46;
        };
        r48 = dyn paste2[, collapse](p16, ", ");
        return r48;
      };
      p19 = prom<V +>{
        getNamespaceName1 = ldf getNamespaceName;
        p18 = prom<V +>{
          expenv5 = ld expenv;
          expenv6 = force? expenv5;
          checkMissing(expenv6);
          return expenv6;
        };
        r51 = dyn getNamespaceName1(p18);
        return r51;
      };
      r53 = dyn sprintf1(p14, p17, p19);
      return r53;
    };
    r55 = dyn stop1[, `call.`, domain](p20, FALSE, NA_LGL);
    check L44() else D17();
  L52():
    r64 = dyn character();
    check L53() else D22();
  L55():
    expnames9 = ld expnames;
    check L57() else D23();
  L56():
    r66 = dyn base6(<sym expnames>);
    goto L11(r66);
  D11():
    deopt 39 [r18];
  D13():
    deopt 45 [r20];
  D17():
    deopt 62 [r55];
  D22():
    deopt 78 [r64];
  D23():
    deopt 83 [expnames9];
  L12():
    goto L13();
  L13():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L62() else L63();
  L36():
    goto L4(r18);
  L39():
    st miss = r20;
    stop = ldf stop;
    check L40() else D14();
  L44():
    goto L6(r55);
  L53():
    st impnames = r64;
    goto L10();
  L57():
    expnames10 = force? expnames9;
    checkMissing(expnames10);
    c5 = `==`(expnames10, NULL);
    goto L11(c5);
  L58():
    character1 = ldf character;
    check L59() else D24();
  D14():
    deopt 48 [];
  D24():
    deopt 87 [];
  L14(r71):
    popenv;
    return r71;
  L40():
    p12 = prom<V +>{
      sprintf = ldf sprintf;
      p6 = prom<V +>{
        ngettext = ldf ngettext;
        p5 = prom<V +>{
          sym3 = ldf length;
          base3 = ldf length in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r22):
          return r22;
        L1():
          miss4 = ld miss;
          miss5 = force? miss4;
          checkMissing(miss5);
          length = ldf length in base;
          r23 = dyn length(miss5);
          goto L0(r23);
        L2():
          r21 = dyn base3(<sym miss>);
          goto L0(r21);
        };
        r25 = dyn ngettext(p5, "class %s is not exported by 'namespace:%s'", "classes %s are not exported by 'namespace:%s'");
        return r25;
      };
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          paste1 = ldf paste0;
          p7 = prom<V +>{
            miss6 = ld miss;
            miss7 = force? miss6;
            checkMissing(miss7);
            return miss7;
          };
          r28 = dyn paste1("\"", p7, "\"");
          return r28;
        };
        r30 = dyn paste[, collapse](p8, ", ");
        return r30;
      };
      p11 = prom<V +>{
        getNamespaceName = ldf getNamespaceName;
        p10 = prom<V +>{
          expenv3 = ld expenv;
          expenv4 = force? expenv3;
          checkMissing(expenv4);
          return expenv4;
        };
        r33 = dyn getNamespaceName(p10);
        return r33;
      };
      r35 = dyn sprintf(p6, p9, p11);
      return r35;
    };
    r37 = dyn stop[, `call.`, domain](p12, FALSE, NA_LGL);
    check L41() else D15();
  L59():
    r68 = dyn character1();
    check L60() else D25();
  L62():
    impenv1 = ld impenv;
    check L64() else D26();
  L63():
    r70 = dyn base7(<lang importIntoEnv(impenv, impnames, expenv, expnames)>);
    goto L14(r70);
  D15():
    deopt 54 [r37];
  D25():
    deopt 88 [r68];
  D26():
    deopt 94 [impenv1];
  L41():
    goto L6(r37);
  L60():
    st expnames = r68;
    goto L13();
  L64():
    impenv2 = force? impenv1;
    checkMissing(impenv2);
    impnames3 = ld impnames;
    check L65() else D27();
  D27():
    deopt 96 [impnames3];
  L65():
    impnames4 = force? impnames3;
    checkMissing(impnames4);
    expenv7 = ld expenv;
    check L66() else D28();
  D28():
    deopt 98 [expenv7];
  L66():
    expenv8 = force? expenv7;
    checkMissing(expenv8);
    expnames11 = ld expnames;
    check L67() else D29();
  D29():
    deopt 100 [expnames11];
  L67():
    expnames12 = force? expnames11;
    checkMissing(expnames12);
    importIntoEnv = ldf importIntoEnv in base;
    r72 = dyn importIntoEnv(impenv2, impnames4, expenv8, expnames12);
    check L68() else D30();
  D30():
    deopt 103 [r72];
  L68():
    goto L14(r72);
  }
}