fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2438593539;
    st debugger = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2438593539(dump) {
  (reg dump:*) -+> V { var dump:*, reg dump_isMissing:L, reg dump_orDefault:*, reg last_dump:*, reg last_dump1:V, reg p:p(V +), reg function:cls, reg ls:cls, reg dump1:*, reg dump2:V, reg c:L, reg dump4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _selection:*, reg _selection1:V, reg __:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg tryCatch:cls, reg assign:cls, reg _obj:*, reg _obj1:V, reg p2:p(V +), reg get:cls, reg _obj2:*, reg _obj3:V, reg p3:p(V +), reg dump5:*, reg dump6:V, reg c2:L, reg dump8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg _selection2:*, reg _selection3:V, reg __1:cls, reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:cls, reg p7:p(V +), reg cat:cls, reg gettext:cls, reg r15:V, reg p8:p(V +), reg calls:*, reg calls1:V, reg c3:L, reg calls3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _selection4:*, reg _selection5:V, reg __2:cls, reg r17:V, reg p9:p(V +), reg rm:cls, reg _obj4:*, reg _obj5:V, reg p10:p(V +), reg _selection6:*, reg _selection7:V, reg p11:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg browser:cls, reg r25:V, reg p12:p(V +), reg r27:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg dump9:*, reg dump10:V, reg inherits:cls, reg r30:V, reg r31:V, reg c4:L, reg cat1:cls, reg gettextf:cls, reg dQuote:cls, reg r32:V, reg p13:p(V +), reg r34:V, reg p14:p(V +), reg r36:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r37:V, reg r38:V, reg invisible:cls, reg r39:V, reg getOption:cls, reg r42:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg on_exit:cls, reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg dump11:*, reg dump12:V, reg attr:cls, reg r50:V, reg length:cls, reg r51:V, reg c5:L, reg cat2:cls, reg gettext1:cls, reg r52:V, reg p15:p(V +), reg msg:*, reg msg1:V, reg p16:p(V +), reg r55:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg dump13:*, reg dump14:V, reg length1:cls, reg r59:V, reg n:*, reg n1:V, reg r60:V, reg c6:L, reg cat3:cls, reg gettextf1:cls, reg r61:V, reg p17:p(V +), reg r63:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg invisible1:cls, reg r66:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg dump15:*, reg dump16:V, reg names:cls, reg r71:V, reg cat4:cls, reg gettext2:cls, reg r72:V, reg p18:p(V +), reg r74:V, reg cat5:cls, reg paste0:cls, reg n2:*, reg n3:V, reg r75:V, reg p19:p(V +), reg calls4:*, reg calls5:V, reg p20:p(V +), reg r78:V, reg p21:p(V +), reg r80:V, reg cat6:cls, reg gettext3:cls, reg r81:V, reg p22:p(V +), reg r83:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r84:V, reg r85:V, reg C_menu:*, reg C_menu1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r86:V, reg C_menu4:V, reg r87:V, reg calls6:*, reg calls7:V, reg as_character:cls, reg r88:V, reg vargs:dots, reg r89:V, reg ind:*, reg ind1:V, reg n4:*, reg n5:V, reg r90:V, reg c7:L, reg ind2:*, reg ind3:V, reg r92:V, reg c8:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r93:V, reg r94:V, reg invisible2:cls, reg r95:V, reg debugger_look:cls, reg ind4:*, reg ind5:V, reg p23:p(V +), reg r99:V |
    mkenv;
    dump_isMissing = missing.0(dump);
    if dump_isMissing then L0() else L1(dump);
  L0():
    p = prom<V +>{
      last_dump = ld `last.dump`;
      last_dump1 = force? last_dump;
      checkMissing(last_dump1);
      return last_dump1;
    };
    goto L1(p);
  L1(dump_orDefault):
    st dump = dump_orDefault;
    function = ldf function;
    check L26() else D0();
  D0():
    deopt 1 [];
  L26():
    p12 = prom<V +>{
      ls = ldf ls;
      p1 = prom<V +>{
        dump1 = ld dump;
        dump2 = force? dump1;
        checkMissing(dump2);
        c = `is.object`(dump2);
        if c then L1() else L2(dump2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", dump2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(dump4):
        _selection = ld `.selection`;
        _selection1 = force? _selection;
        __ = ldf `[[` in base;
        r1 = dyn __(dump4, _selection1);
        goto L0(r1);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r3 = dyn ls[envir, `all.names`](p1, TRUE);
      s = toForSeq(r3);
      l = length(s);
      i = 0;
      goto L0(i);
    L0(i1):
      i2 = `+`.1(i1, 1);
      c1 = `<`.1(l, i2);
      if c1 then L3() else L1();
    L1():
      x = `[[`(s, i2, NULL, TRUE);
      st `.obj` = x;
      tryCatch = ldf tryCatch;
      p6 = prom<V +>{
        assign = ldf assign;
        p2 = prom<V +>{
          _obj = ld `.obj`;
          _obj1 = force? _obj;
          checkMissing(_obj1);
          return _obj1;
        };
        p5 = prom<V +>{
          get = ldf get;
          p3 = prom<V +>{
            _obj2 = ld `.obj`;
            _obj3 = force? _obj2;
            checkMissing(_obj3);
            return _obj3;
          };
          p4 = prom<V +>{
            dump5 = ld dump;
            dump6 = force? dump5;
            checkMissing(dump6);
            c2 = `is.object`(dump6);
            if c2 then L1() else L2(dump6);
          L0(dx3):
            return dx3;
          L1():
            dr2 = tryDispatchBuiltin.1("[[", dump6);
            dc1 = getTryDispatchBuiltinDispatched(dr2);
            if dc1 then L3() else L2(dr2);
          L2(dump8):
            _selection2 = ld `.selection`;
            _selection3 = force? _selection2;
            __1 = ldf `[[` in base;
            r6 = dyn __1(dump8, _selection3);
            goto L0(r6);
          L3():
            dx2 = getTryDispatchBuiltinValue(dr2);
            goto L0(dx2);
          };
          r8 = dyn get[, envir](p3, p4);
          return r8;
        };
        r10 = dyn assign(p2, p5);
        return r10;
      };
      p7 = prom<V +>{
        r12 = clos inner3708401697;
        return r12;
      };
      dyn tryCatch[, error](p6, p7);
      goto L0(i2);
    L3():
      cat = ldf cat;
      p8 = prom<V +>{
        gettext = ldf gettext;
        r15 = dyn gettext("Browsing in the environment with call:\n   ");
        return r15;
      };
      p9 = prom<V +>{
        calls = ld calls;
        calls1 = force? calls;
        checkMissing(calls1);
        c3 = `is.object`(calls1);
        if c3 then L1() else L2(calls1);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", calls1);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(calls3):
        _selection4 = ld `.selection`;
        _selection5 = force? _selection4;
        __2 = ldf `[` in base;
        r17 = dyn __2(calls3, _selection5);
        goto L0(r17);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      dyn cat[, , , sep](p8, p9, "\n", "");
      rm = ldf rm;
      p10 = prom<V +>{
        _obj4 = ld `.obj`;
        _obj5 = force? _obj4;
        checkMissing(_obj5);
        return _obj5;
      };
      p11 = prom<V +>{
        _selection6 = ld `.selection`;
        _selection7 = force? _selection6;
        checkMissing(_selection7);
        return _selection7;
      };
      dyn rm(p10, p11);
      sym = ldf browser;
      base = ldf browser in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L2(r24):
      return r24;
    L4():
      browser = ldf browser in base;
      r25 = dyn browser();
      goto L2(r25);
    L5():
      r23 = dyn base();
      goto L2(r23);
    };
    r27 = dyn function(<list .selection=>, p12, NULL);
    check L27() else D1();
  D1():
    deopt 5 [r27];
  L27():
    st `debugger.look` = r27;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L2(r29):
    r31 = `!`(r29);
    c4 = `as.logical`(r31);
    if c4 then L32() else L3();
  L28():
    dump9 = ld dump;
    check L30() else D2();
  L29():
    r28 = dyn base1(<sym dump>, "dump.frames");
    goto L2(r28);
  D2():
    deopt 9 [dump9];
  L3():
    getOption = ldf getOption;
    check L40() else D7();
  L30():
    dump10 = force? dump9;
    checkMissing(dump10);
    inherits = ldf inherits in base;
    r30 = dyn inherits(dump10, "dump.frames", FALSE);
    check L31() else D3();
  L32():
    cat1 = ldf cat;
    check L33() else D4();
  D3():
    deopt 14 [r30];
  D4():
    deopt 17 [];
  D7():
    deopt 28 [];
  L31():
    goto L2(r30);
  L33():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        dQuote = ldf dQuote;
        r32 = dyn dQuote("dump.frames");
        return r32;
      };
      r34 = dyn gettextf("'dump' is not an object of class %s\n", p13);
      return r34;
    };
    r36 = dyn cat1(p14);
    check L34() else D5();
  L40():
    r42 = dyn getOption("error");
    check L41() else D8();
  D5():
    deopt 19 [r36];
  D8():
    deopt 30 [r42];
  L34():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L41():
    st `err.action` = r42;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L4(r38):
    popenv;
    return r38;
  L6():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L35():
    invisible = ldf invisible in base;
    r39 = dyn invisible();
    check L37() else D6();
  L36():
    r37 = dyn base2();
    goto L4(r37);
  L42():
    on_exit = ldf `on.exit` in base;
    r45 = dyn on_exit(<lang options(error=err.action)>);
    goto L6();
  L43():
    r43 = dyn base3(<lang options(error=err.action)>);
    goto L6();
  D6():
    deopt 23 [r39];
  L7(r47):
    c5 = `as.logical`(r47);
    if c5 then L51() else L9();
  L37():
    goto L4(r39);
  L44():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L45():
    r46 = dyn base4(<lang `<-`(msg, attr(dump, "error.message"))>);
    goto L7(r46);
  L8(r49):
    st msg = r49;
    length = ldf length in base;
    r51 = dyn length(r49);
    check L50() else D11();
  L9():
    goto L10();
  L10():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L46():
    dump11 = ld dump;
    check L48() else D9();
  L47():
    r48 = dyn base5(<sym dump>, "error.message");
    goto L8(r48);
  L51():
    cat2 = ldf cat;
    check L52() else D12();
  D9():
    deopt 39 [dump11];
  D11():
    deopt 46 [r51];
  D12():
    deopt 48 [];
  L11(r58):
    st n = r58;
    n = ld n;
    check L59() else D16();
  L48():
    dump12 = force? dump11;
    checkMissing(dump12);
    attr = ldf attr in base;
    r50 = dyn attr(dump12, "error.message");
    check L49() else D10();
  L50():
    goto L7(r51);
  L52():
    p15 = prom<V +>{
      gettext1 = ldf gettext;
      r52 = dyn gettext1("Message: ");
      return r52;
    };
    p16 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r55 = dyn cat2(p15, p16);
    check L53() else D13();
  L55():
    dump13 = ld dump;
    check L57() else D14();
  L56():
    r57 = dyn base6(<sym dump>);
    goto L11(r57);
  D10():
    deopt 43 [r50];
  D13():
    deopt 51 [r55];
  D14():
    deopt 56 [dump13];
  D16():
    deopt 61 [n];
  L49():
    goto L8(r50);
  L53():
    goto L10();
  L57():
    dump14 = force? dump13;
    checkMissing(dump14);
    length1 = ldf length in base;
    r59 = dyn length1(dump14);
    check L58() else D15();
  L59():
    n1 = force? n;
    checkMissing(n1);
    r60 = `!`(n1);
    c6 = `as.logical`(r60);
    if c6 then L60() else L12();
  D15():
    deopt 59 [r59];
  L12():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L68() else L69();
  L58():
    goto L11(r59);
  L60():
    cat3 = ldf cat;
    check L61() else D17();
  D17():
    deopt 65 [];
  L15(r70):
    st calls = r70;
    goto L25();
  L61():
    p17 = prom<V +>{
      gettextf1 = ldf gettextf;
      r61 = dyn gettextf1("'dump' is empty\n");
      return r61;
    };
    r63 = dyn cat3(p17);
    check L62() else D18();
  L68():
    dump15 = ld dump;
    check L70() else D20();
  L69():
    r69 = dyn base8(<sym dump>);
    goto L15(r69);
  D18():
    deopt 67 [r63];
  D20():
    deopt 77 [dump15];
  L25():
    cat4 = ldf cat;
    check L72() else D22();
  L62():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L63() else L64();
  L70():
    dump16 = force? dump15;
    checkMissing(dump16);
    names = ldf names in base;
    r71 = dyn names(dump16);
    check L71() else D21();
  D21():
    deopt 80 [r71];
  D22():
    deopt 83 [];
  L13(r65):
    popenv;
    return r65;
  L63():
    invisible1 = ldf invisible in base;
    r66 = dyn invisible1();
    check L65() else D19();
  L64():
    r64 = dyn base7();
    goto L13(r64);
  L71():
    goto L15(r71);
  L72():
    p18 = prom<V +>{
      gettext2 = ldf gettext;
      r72 = dyn gettext2("Available environments had calls:\n");
      return r72;
    };
    r74 = dyn cat4(p18);
    check L73() else D23();
  D19():
    deopt 71 [r66];
  D23():
    deopt 85 [r74];
  L65():
    goto L13(r66);
  L73():
    cat5 = ldf cat;
    check L74() else D24();
  D24():
    deopt 87 [];
  L74():
    p21 = prom<V +>{
      paste0 = ldf paste0;
      p19 = prom<V +>{
        n2 = ld n;
        n3 = force? n2;
        checkMissing(n3);
        r75 = `:`(1, n3);
        return r75;
      };
      p20 = prom<V +>{
        calls4 = ld calls;
        calls5 = force? calls4;
        checkMissing(calls5);
        return calls5;
      };
      r78 = dyn paste0(p19, ": ", p20);
      return r78;
    };
    r80 = dyn cat5[, sep](p21, "\n");
    check L75() else D25();
  D25():
    deopt 91 [r80];
  L75():
    cat6 = ldf cat;
    check L76() else D26();
  D26():
    deopt 93 [];
  L76():
    p22 = prom<V +>{
      gettext3 = ldf gettext;
      r81 = dyn gettext3("\nEnter an environment number, or 0 to exit  ");
      return r81;
    };
    r83 = dyn cat6(p22);
    check L77() else D27();
  D27():
    deopt 95 [r83];
  L77():
    goto L21();
  L21():
    sym9 = ldf `.Call`;
    base9 = ldf `.Call` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L78() else L79();
  L16(r85):
    st ind = r85;
    ind = ld ind;
    check L85() else D31();
  L78():
    C_menu = ld C_menu;
    check L80() else D28();
  L79():
    r84 = dyn base9(<sym C_menu>, <lang as.character(calls)>);
    goto L16(r84);
  D28():
    deopt 97 [C_menu];
  D31():
    deopt 106 [ind];
  L80():
    C_menu1 = force? C_menu;
    checkMissing(C_menu1);
    sym10 = ldf `as.character`;
    base10 = ldf `as.character` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L81() else L82();
  L85():
    ind1 = force? ind;
    checkMissing(ind1);
    n4 = ld n;
    check L86() else D32();
  D32():
    deopt 107 [ind1, n4];
  L17(C_menu4, r87):
    vargs = dots[r87];
    r89 = `.Call`(C_menu4, vargs, <missing>);
    goto L16(r89);
  L81():
    calls6 = ld calls;
    check L83() else D29();
  L82():
    r86 = dyn base10(<sym calls>);
    goto L17(C_menu1, r86);
  L86():
    n5 = force? n4;
    checkMissing(n5);
    r90 = `<=`(ind1, n5);
    c7 = `as.logical`(r90);
    if c7 then L87() else L18();
  D29():
    deopt 100 [C_menu1, calls6];
  L18():
    goto L21();
  L83():
    calls7 = force? calls6;
    checkMissing(calls7);
    as_character = ldf `as.character` in base;
    r88 = dyn as_character(calls7);
    check L84() else D30();
  L87():
    ind2 = ld ind;
    check L91() else D33();
  D30():
    deopt 103 [C_menu1, r88];
  D33():
    deopt 117 [ind2];
  L84():
    goto L17(C_menu1, r88);
  L91():
    ind3 = force? ind2;
    checkMissing(ind3);
    r92 = `==`(ind3, 0);
    c8 = `as.logical`(r92);
    if c8 then L92() else L22();
  L22():
    debugger_look = ldf `debugger.look`;
    check L98() else D35();
  L92():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L93() else L94();
  D35():
    deopt 129 [];
  L23(r94):
    popenv;
    return r94;
  L93():
    invisible2 = ldf invisible in base;
    r95 = dyn invisible2();
    check L95() else D34();
  L94():
    r93 = dyn base11();
    goto L23(r93);
  L98():
    p23 = prom<V +>{
      ind4 = ld ind;
      ind5 = force? ind4;
      checkMissing(ind5);
      return ind5;
    };
    r99 = dyn debugger_look(p23);
    check L99() else D36();
  D34():
    deopt 124 [r95];
  D36():
    deopt 131 [r99];
  L95():
    goto L23(r95);
  L99():
    goto L25();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}