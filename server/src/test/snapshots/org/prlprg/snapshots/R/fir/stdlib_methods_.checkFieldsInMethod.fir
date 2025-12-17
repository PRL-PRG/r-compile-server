fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2410193997;
    st `.checkFieldsInMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2410193997(methodDef, fieldNames, methodNames) {
  (reg methodDef:*, reg fieldNames:*, reg methodNames:*) -+> V { var methodDef:*, var fieldNames:*, var methodNames:*, reg _hasCodeTools:cls, reg r:V, reg r1:V, reg c:L, reg r4:cls, reg is:cls, reg methodDef1:*, reg methodDef2:V, reg p:p(V +), reg r6:V, reg c1:L, reg p0q:cls, reg __:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg p0q1:cls, reg __1:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg _assignedVars:cls, reg body:cls, reg methodDef3:*, reg methodDef4:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg assigned:*, reg assigned1:V, reg c2:L, reg assigned3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg names:cls, reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg locals:*, reg locals1:V, reg fieldNames1:*, reg fieldNames2:V, reg match:cls, reg r24:V, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg localsAreFields:*, reg localsAreFields1:V, reg any:cls, reg r28:V, reg c3:L, reg warning:cls, reg gettextf:cls, reg paste:cls, reg unlist:cls, reg assigned4:*, reg assigned5:V, reg c4:L, reg assigned7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r29:V, reg p5:p(V +), reg r31:V, reg c5:L, reg r33:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg localsAreFields2:*, reg localsAreFields3:V, reg __2:cls, reg r34:V, reg p6:p(V +), reg r36:V, reg p7:p(V +), reg methodName:*, reg methodName1:V, reg p8:p(V +), reg className:*, reg className1:V, reg p9:p(V +), reg r40:V, reg p10:p(V +), reg r42:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg assigned8:*, reg assigned9:V, reg c6:L, reg assigned11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r46:V, reg names1:cls, reg r47:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg globals:*, reg globals1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg fieldNames3:*, reg fieldNames4:V, reg c7:cls, reg r54:V, reg match1:cls, reg r55:V, reg is_na:cls, reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg globalsNotFields:*, reg globalsNotFields1:V, reg any1:cls, reg r59:V, reg c8:L, reg warning1:cls, reg gettextf1:cls, reg paste1:cls, reg unlist1:cls, reg assigned12:*, reg assigned13:V, reg c9:L, reg assigned15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r60:V, reg p11:p(V +), reg r62:V, reg c10:L, reg r64:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg globalsNotFields2:*, reg globalsNotFields3:V, reg __3:cls, reg r65:V, reg p12:p(V +), reg r67:V, reg p13:p(V +), reg methodName2:*, reg methodName3:V, reg p14:p(V +), reg className2:*, reg className3:V, reg p15:p(V +), reg r71:V, reg p16:p(V +), reg r73:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r75:V, reg r76:V, reg globals2:*, reg globals3:V, reg methodNames1:*, reg methodNames2:V, reg match2:cls, reg r77:V, reg r78:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r79:V, reg r80:V, reg globalsInMethods:*, reg globalsInMethods1:V, reg any2:cls, reg r81:V, reg c11:L, reg stop:cls, reg gettextf2:cls, reg paste2:cls, reg unlist2:cls, reg assigned16:*, reg assigned17:V, reg c12:L, reg assigned19:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r82:V, reg p17:p(V +), reg r84:V, reg c13:L, reg r86:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg globalsInMethods2:*, reg globalsInMethods3:V, reg __4:cls, reg r87:V, reg p18:p(V +), reg r89:V, reg p19:p(V +), reg methodName4:*, reg methodName5:V, reg p20:p(V +), reg className4:*, reg className5:V, reg p21:p(V +), reg r93:V, reg p22:p(V +), reg r95:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg localsAreFields4:*, reg localsAreFields5:V, reg any3:cls, reg r99:V, reg r100:V, reg c14:L, reg c16:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r101:V, reg c19:L, reg r102:V, reg globalsNotFields4:*, reg globalsNotFields5:V, reg any4:cls, reg r103:V, reg r104:V, reg c20:L, reg c21:V |
    mkenv;
    st methodDef = methodDef;
    st fieldNames = fieldNames;
    st methodNames = methodNames;
    _hasCodeTools = ldf `.hasCodeTools`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    r = dyn _hasCodeTools();
    check L24() else D1();
  D1():
    deopt 2 [r];
  L24():
    r1 = `!`(r);
    c = `as.logical`(r1);
    if c then L25() else L0();
  L0():
    r4 = clos inner2501545716;
    st p0q = r4;
    is = ldf is;
    check L28() else D2();
  L25():
    popenv;
    return NA_LGL;
  D2():
    deopt 13 [];
  L28():
    p = prom<V +>{
      methodDef1 = ld methodDef;
      methodDef2 = force? methodDef1;
      checkMissing(methodDef2);
      return methodDef2;
    };
    r6 = dyn is(p, "refMethodDef");
    check L29() else D3();
  D3():
    deopt 16 [r6];
  L29():
    c1 = `as.logical`(r6);
    if c1 then L30() else L2();
  L2():
    st className = "";
    st methodName = "";
    goto L3();
  L3():
    _assignedVars = ldf `.assignedVars`;
    check L36() else D8();
  L30():
    p0q = ldf p0q;
    check L31() else D4();
  D4():
    deopt 18 [];
  D8():
    deopt 32 [];
  L31():
    p1 = prom<V +>{
      __ = ldf `@` in base;
      r7 = dyn __(<sym methodDef>, <sym name>);
      return r7;
    };
    r9 = dyn p0q(p1);
    check L32() else D5();
  L36():
    p4 = prom<V +>{
      body = ldf body;
      p3 = prom<V +>{
        methodDef3 = ld methodDef;
        methodDef4 = force? methodDef3;
        checkMissing(methodDef4);
        return methodDef4;
      };
      r15 = dyn body(p3);
      return r15;
    };
    r17 = dyn _assignedVars(p4);
    check L37() else D9();
  D5():
    deopt 20 [r9];
  D9():
    deopt 34 [r17];
  L32():
    st methodName = r9;
    p0q1 = ldf p0q;
    check L33() else D6();
  L37():
    st assigned = r17;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  D6():
    deopt 23 [];
  L4(r19):
    st locals = r19;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L33():
    p2 = prom<V +>{
      __1 = ldf `@` in base;
      r10 = dyn __1(<sym methodDef>, <sym refClassName>);
      return r10;
    };
    r12 = dyn p0q1(p2);
    check L34() else D7();
  L38():
    assigned = ld assigned;
    check L40() else D10();
  L39():
    r18 = dyn base(<lang `$`(assigned, locals)>);
    goto L4(r18);
  D7():
    deopt 25 [r12];
  D10():
    deopt 38 [assigned];
  L5(r23):
    r25 = `>`(r23, 0.0);
    st localsAreFields = r25;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L34():
    st className = r12;
    goto L3();
  L40():
    assigned1 = force? assigned;
    checkMissing(assigned1);
    c2 = `is.object`(assigned1);
    if c2 then L42() else L43(assigned1);
  L46():
    locals = ld locals;
    check L48() else D12();
  L47():
    r22 = dyn base1(<sym locals>, <sym fieldNames>, 0.0);
    goto L5(r22);
  D12():
    deopt 46 [locals];
  L6(r27):
    c3 = `as.logical`(r27);
    if c3 then L55() else L7();
  L41(dx1):
    names = ldf names in base;
    r21 = dyn names(dx1);
    check L45() else D11();
  L42():
    dr = tryDispatchBuiltin.1("$", assigned1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(dr);
  L43(assigned3):
    r20 = `$`(assigned3, <sym locals>);
    goto L41(r20);
  L48():
    locals1 = force? locals;
    checkMissing(locals1);
    fieldNames1 = ld fieldNames;
    check L49() else D13();
  L51():
    localsAreFields = ld localsAreFields;
    check L53() else D15();
  L52():
    r26 = dyn base2(<sym localsAreFields>);
    goto L6(r26);
  D11():
    deopt 42 [r21];
  D13():
    deopt 48 [fieldNames1];
  D15():
    deopt 59 [localsAreFields];
  L7():
    goto L8();
  L8():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L41(dx);
  L45():
    goto L4(r21);
  L49():
    fieldNames2 = force? fieldNames1;
    checkMissing(fieldNames2);
    match = ldf match in base;
    r24 = dyn match(locals1, fieldNames2, 0.0, NULL);
    check L50() else D14();
  L53():
    localsAreFields1 = force? localsAreFields;
    checkMissing(localsAreFields1);
    any = ldf any in base;
    r28 = dyn any(localsAreFields1);
    check L54() else D16();
  L55():
    warning = ldf warning;
    check L56() else D17();
  D14():
    deopt 53 [r24];
  D16():
    deopt 62 [r28];
  D17():
    deopt 64 [];
  L9(r45):
    st globals = r45;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L50():
    goto L5(r24);
  L54():
    goto L6(r28);
  L56():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        paste = ldf paste;
        p6 = prom<V +>{
          unlist = ldf unlist;
          p5 = prom<V +>{
            assigned4 = ld assigned;
            assigned5 = force? assigned4;
            checkMissing(assigned5);
            c4 = `is.object`(assigned5);
            if c4 then L1() else L2(assigned5);
          L0(dx3):
            return dx3;
          L1():
            dr2 = tryDispatchBuiltin.1("$", assigned5);
            dc1 = getTryDispatchBuiltinDispatched(dr2);
            if dc1 then L3() else L2(dr2);
          L2(assigned7):
            r29 = `$`(assigned7, <sym locals>);
            goto L0(r29);
          L3():
            dx2 = getTryDispatchBuiltinValue(dr2);
            goto L0(dx2);
          };
          r31 = dyn unlist(p5);
          c5 = `is.object`(r31);
          if c5 then L1() else L2(r31);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", r31);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(r33):
          localsAreFields2 = ld localsAreFields;
          localsAreFields3 = force? localsAreFields2;
          __2 = ldf `[` in base;
          r34 = dyn __2(r33, localsAreFields3);
          goto L0(r34);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r36 = dyn paste[, collapse](p6, "; ");
        return r36;
      };
      p8 = prom<V +>{
        methodName = ld methodName;
        methodName1 = force? methodName;
        checkMissing(methodName1);
        return methodName1;
      };
      p9 = prom<V +>{
        className = ld className;
        className1 = force? className;
        checkMissing(className1);
        return className1;
      };
      r40 = dyn gettextf("local assignment to field name will not change the field:\n    %s\n Did you mean to use \"<<-\"? ( in method %s for class %s)", p7, p8, p9);
      return r40;
    };
    r42 = dyn warning[, domain](p10, NA_LGL);
    check L57() else D18();
  L59():
    assigned8 = ld assigned;
    check L61() else D19();
  L60():
    r44 = dyn base3(<lang `$`(assigned, globals)>);
    goto L9(r44);
  D18():
    deopt 68 [r42];
  D19():
    deopt 73 [assigned8];
  L10(r49):
    st globalsNotFields = r49;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L57():
    goto L8();
  L61():
    assigned9 = force? assigned8;
    checkMissing(assigned9);
    c6 = `is.object`(assigned9);
    if c6 then L63() else L64(assigned9);
  L67():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L68():
    r48 = dyn base4(<lang match(globals, c(fieldNames, ".self"))>);
    goto L10(r48);
  L11(r51):
    is_na = ldf `is.na` in base;
    r56 = dyn is_na(r51);
    check L77() else D25();
  L13(r58):
    c8 = `as.logical`(r58);
    if c8 then L82() else L14();
  L62(dx7):
    names1 = ldf names in base;
    r47 = dyn names1(dx7);
    check L66() else D20();
  L63():
    dr6 = tryDispatchBuiltin.1("$", assigned9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L65() else L64(dr6);
  L64(assigned11):
    r46 = `$`(assigned11, <sym globals>);
    goto L62(r46);
  L69():
    globals = ld globals;
    check L71() else D21();
  L70():
    r50 = dyn base5(<sym globals>, <lang c(fieldNames, ".self")>);
    goto L11(r50);
  L78():
    globalsNotFields = ld globalsNotFields;
    check L80() else D26();
  L79():
    r57 = dyn base7(<sym globalsNotFields>);
    goto L13(r57);
  D20():
    deopt 77 [r47];
  D21():
    deopt 83 [globals];
  D25():
    deopt 97 [r56];
  D26():
    deopt 101 [globalsNotFields];
  L14():
    goto L15();
  L15():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L86() else L87();
  L65():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L62(dx6);
  L66():
    goto L9(r47);
  L71():
    globals1 = force? globals;
    checkMissing(globals1);
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L77():
    goto L10(r56);
  L80():
    globalsNotFields1 = force? globalsNotFields;
    checkMissing(globalsNotFields1);
    any1 = ldf any in base;
    r59 = dyn any1(globalsNotFields1);
    check L81() else D27();
  L82():
    warning1 = ldf warning;
    check L83() else D28();
  D27():
    deopt 104 [r59];
  D28():
    deopt 106 [];
  L12(r53):
    match1 = ldf match in base;
    r55 = dyn match1(globals1, r53, NA_INT, NULL);
    check L76() else D24();
  L16(r76):
    r78 = `>`(r76, 0.0);
    st globalsInMethods = r78;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L91() else L92();
  L72():
    fieldNames3 = ld fieldNames;
    check L74() else D22();
  L73():
    r52 = dyn base6(<sym fieldNames>, ".self");
    goto L12(r52);
  L81():
    goto L13(r59);
  L83():
    p16 = prom<V +>{
      gettextf1 = ldf gettextf;
      p13 = prom<V +>{
        paste1 = ldf paste;
        p12 = prom<V +>{
          unlist1 = ldf unlist;
          p11 = prom<V +>{
            assigned12 = ld assigned;
            assigned13 = force? assigned12;
            checkMissing(assigned13);
            c9 = `is.object`(assigned13);
            if c9 then L1() else L2(assigned13);
          L0(dx9):
            return dx9;
          L1():
            dr8 = tryDispatchBuiltin.1("$", assigned13);
            dc4 = getTryDispatchBuiltinDispatched(dr8);
            if dc4 then L3() else L2(dr8);
          L2(assigned15):
            r60 = `$`(assigned15, <sym globals>);
            goto L0(r60);
          L3():
            dx8 = getTryDispatchBuiltinValue(dr8);
            goto L0(dx8);
          };
          r62 = dyn unlist1(p11);
          c10 = `is.object`(r62);
          if c10 then L1() else L2(r62);
        L0(dx11):
          return dx11;
        L1():
          dr10 = tryDispatchBuiltin.1("[", r62);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2(dr10);
        L2(r64):
          globalsNotFields2 = ld globalsNotFields;
          globalsNotFields3 = force? globalsNotFields2;
          __3 = ldf `[` in base;
          r65 = dyn __3(r64, globalsNotFields3);
          goto L0(r65);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx10);
        };
        r67 = dyn paste1[, collapse](p12, "; ");
        return r67;
      };
      p14 = prom<V +>{
        methodName2 = ld methodName;
        methodName3 = force? methodName2;
        checkMissing(methodName3);
        return methodName3;
      };
      p15 = prom<V +>{
        className2 = ld className;
        className3 = force? className2;
        checkMissing(className3);
        return className3;
      };
      r71 = dyn gettextf1("non-local assignment to non-field names (possibly misspelled?)\n    %s\n( in method %s for class %s)", p13, p14, p15);
      return r71;
    };
    r73 = dyn warning1[, domain](p16, NA_LGL);
    check L84() else D29();
  L86():
    globals2 = ld globals;
    check L88() else D30();
  L87():
    r75 = dyn base8(<sym globals>, <sym methodNames>, 0.0);
    goto L16(r75);
  D22():
    deopt 87 [fieldNames3];
  D24():
    deopt 95 [r55];
  D29():
    deopt 110 [r73];
  D30():
    deopt 115 [globals2];
  L17(r80):
    c11 = `as.logical`(r80);
    if c11 then L95() else L18();
  L74():
    fieldNames4 = force? fieldNames3;
    checkMissing(fieldNames4);
    c7 = ldf c in base;
    r54 = dyn c7(fieldNames4, ".self");
    check L75() else D23();
  L76():
    goto L11(r55);
  L84():
    goto L15();
  L88():
    globals3 = force? globals2;
    checkMissing(globals3);
    methodNames1 = ld methodNames;
    check L89() else D31();
  L91():
    globalsInMethods = ld globalsInMethods;
    check L93() else D33();
  L92():
    r79 = dyn base9(<sym globalsInMethods>);
    goto L17(r79);
  D23():
    deopt 91 [r54];
  D31():
    deopt 117 [methodNames1];
  D33():
    deopt 128 [globalsInMethods];
  L18():
    goto L19();
  L19():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L99() else L100();
  L75():
    goto L12(r54);
  L89():
    methodNames2 = force? methodNames1;
    checkMissing(methodNames2);
    match2 = ldf match in base;
    r77 = dyn match2(globals3, methodNames2, 0.0, NULL);
    check L90() else D32();
  L93():
    globalsInMethods1 = force? globalsInMethods;
    checkMissing(globalsInMethods1);
    any2 = ldf any in base;
    r81 = dyn any2(globalsInMethods1);
    check L94() else D34();
  L95():
    stop = ldf stop;
    check L96() else D35();
  D32():
    deopt 122 [r77];
  D34():
    deopt 131 [r81];
  D35():
    deopt 133 [];
  L20(r98):
    r100 = `!`(r98);
    c14 = `as.logical`(r100);
    if c14 then L103() else L21(c14);
  L90():
    goto L16(r77);
  L94():
    goto L17(r81);
  L96():
    p22 = prom<V +>{
      gettextf2 = ldf gettextf;
      p19 = prom<V +>{
        paste2 = ldf paste;
        p18 = prom<V +>{
          unlist2 = ldf unlist;
          p17 = prom<V +>{
            assigned16 = ld assigned;
            assigned17 = force? assigned16;
            checkMissing(assigned17);
            c12 = `is.object`(assigned17);
            if c12 then L1() else L2(assigned17);
          L0(dx13):
            return dx13;
          L1():
            dr12 = tryDispatchBuiltin.1("$", assigned17);
            dc6 = getTryDispatchBuiltinDispatched(dr12);
            if dc6 then L3() else L2(dr12);
          L2(assigned19):
            r82 = `$`(assigned19, <sym globals>);
            goto L0(r82);
          L3():
            dx12 = getTryDispatchBuiltinValue(dr12);
            goto L0(dx12);
          };
          r84 = dyn unlist2(p17);
          c13 = `is.object`(r84);
          if c13 then L1() else L2(r84);
        L0(dx15):
          return dx15;
        L1():
          dr14 = tryDispatchBuiltin.1("[", r84);
          dc7 = getTryDispatchBuiltinDispatched(dr14);
          if dc7 then L3() else L2(dr14);
        L2(r86):
          globalsInMethods2 = ld globalsInMethods;
          globalsInMethods3 = force? globalsInMethods2;
          __4 = ldf `[` in base;
          r87 = dyn __4(r86, globalsInMethods3);
          goto L0(r87);
        L3():
          dx14 = getTryDispatchBuiltinValue(dr14);
          goto L0(dx14);
        };
        r89 = dyn paste2[, collapse](p18, "; ");
        return r89;
      };
      p20 = prom<V +>{
        methodName4 = ld methodName;
        methodName5 = force? methodName4;
        checkMissing(methodName5);
        return methodName5;
      };
      p21 = prom<V +>{
        className4 = ld className;
        className5 = force? className4;
        checkMissing(className5);
        return className5;
      };
      r93 = dyn gettextf2("non-local assignment to method names is not allowed\n    %s\n( in method %s for class %s)", p19, p20, p21);
      return r93;
    };
    r95 = dyn stop[, domain](p22, NA_LGL);
    check L97() else D36();
  L99():
    localsAreFields4 = ld localsAreFields;
    check L101() else D37();
  L100():
    r97 = dyn base10(<sym localsAreFields>);
    goto L20(r97);
  D36():
    deopt 137 [r95];
  D37():
    deopt 142 [localsAreFields4];
  L21(c16):
    popenv;
    return c16;
  L97():
    goto L19();
  L101():
    localsAreFields5 = force? localsAreFields4;
    checkMissing(localsAreFields5);
    any3 = ldf any in base;
    r99 = dyn any3(localsAreFields5);
    check L102() else D38();
  L103():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L104() else L105();
  D38():
    deopt 145 [r99];
  L22(c19, r102):
    r104 = `!`(r102);
    c20 = `as.logical`(r104);
    c21 = `&&`(c19, c20);
    goto L21(c21);
  L102():
    goto L20(r99);
  L104():
    globalsNotFields4 = ld globalsNotFields;
    check L106() else D39();
  L105():
    r101 = dyn base11(<sym globalsNotFields>);
    goto L22(c14, r101);
  D39():
    deopt 149 [c14, globalsNotFields4];
  L106():
    globalsNotFields5 = force? globalsNotFields4;
    checkMissing(globalsNotFields5);
    any4 = ldf any in base;
    r103 = dyn any4(globalsNotFields5);
    check L107() else D40();
  D40():
    deopt 152 [c14, r103];
  L107():
    goto L22(c14, r103);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste0:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn paste0[, , , collapse]("\"", p, "\"", "; ");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}