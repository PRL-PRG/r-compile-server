fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1995204894;
    st namespaceImportMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1995204894(self, ns, vars, from) {
  (reg self:*, reg ns:*, reg vars:*, reg from:*) -+> V { var self:*, var ns:*, var vars:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, reg character:cls, reg r:V, reg character1:cls, reg r1:V, reg character2:cls, reg r2:V, reg ___:cls, reg r3:V, reg r4:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg allFuns:*, reg allFuns1:V, reg attr:cls, reg r9:V, reg __:cls, reg r10:V, reg r11:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg r13:V, reg _in_:cls, reg vars1:*, reg vars2:V, reg p2:p(V +), reg allFuns2:*, reg allFuns3:V, reg p3:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg found:*, reg found1:V, reg all:cls, reg r19:V, reg r20:V, reg c:L, reg message:cls, reg sprintf:cls, reg ngettext:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg found2:*, reg found3:V, reg r23:V, reg sum:cls, reg r24:V, reg p4:p(V +), reg r26:V, reg p5:p(V +), reg sQuote:cls, reg pkg:*, reg pkg1:V, reg p6:p(V +), reg r29:V, reg p7:p(V +), reg paste:cls, reg sQuote1:cls, reg vars3:*, reg vars4:V, reg c1:L, reg vars6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg found4:*, reg found5:V, reg r31:V, reg __1:cls, reg r32:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg r36:V, reg p10:p(V +), reg sQuote2:cls, reg getNamespaceName:cls, reg self1:*, reg self2:V, reg p11:p(V +), reg r39:V, reg p12:p(V +), reg r41:V, reg p13:p(V +), reg r43:V, reg p14:p(V +), reg r45:V, reg vars7:*, reg vars8:V, reg c2:L, reg vars10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg found6:*, reg found7:V, reg __2:cls, reg r46:V, reg _in_1:cls, reg vars11:*, reg vars12:V, reg p15:p(V +), reg allFuns4:*, reg allFuns5:V, reg p16:p(V +), reg r49:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r50:V, reg r51:V, reg found8:*, reg found9:V, reg all1:cls, reg r52:V, reg r53:V, reg c3:L, reg stop:cls, reg sprintf1:cls, reg ngettext1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg found10:*, reg found11:V, reg r56:V, reg sum1:cls, reg r57:V, reg p17:p(V +), reg r59:V, reg p18:p(V +), reg sQuote3:cls, reg pkg2:*, reg pkg3:V, reg p19:p(V +), reg r62:V, reg p20:p(V +), reg paste1:cls, reg sQuote4:cls, reg vars13:*, reg vars14:V, reg c4:L, reg vars16:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg found12:*, reg found13:V, reg r64:V, reg __3:cls, reg r65:V, reg p21:p(V +), reg r67:V, reg p22:p(V +), reg r69:V, reg p23:p(V +), reg sQuote5:cls, reg getNamespaceName1:cls, reg self3:*, reg self4:V, reg p24:p(V +), reg r72:V, reg p25:p(V +), reg r74:V, reg p26:p(V +), reg r76:V, reg p27:p(V +), reg r78:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r80:V, reg r81:V, reg allFuns6:*, reg allFuns7:V, reg r82:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg allFuns8:*, reg allFuns9:V, reg c6:L, reg i6:I, reg allFuns11:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i8:I, reg dx8:V, reg i9:*, reg i10:V, reg __4:cls, reg r83:V, reg allPackages:*, reg allPackages1:V, reg c7:L, reg i12:I, reg allPackages3:V, reg dr8:V, reg dc4:L, reg dx9:V, reg i14:I, reg dx10:V, reg i15:*, reg i16:V, reg __5:cls, reg r84:V, reg exists:cls, reg g:*, reg g1:V, reg p28:p(V +), reg self5:*, reg self6:V, reg p29:p(V +), reg r87:V, reg c8:L, reg i17:I, reg c9:V, reg _in_2:cls, reg g2:*, reg g3:V, reg p30:p(V +), reg vars17:*, reg vars18:V, reg p31:p(V +), reg r90:V, reg c11:L, reg c12:V, reg c14:L, reg ___1:cls, reg r91:V, reg r92:cls, reg g4:*, reg g5:V, reg p32:p(V +), reg p33:*, reg p34:V, reg p35:p(V +), reg r95:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r96:V, reg i24:I, reg r97:V, reg _mergeImportMethods:cls, reg self7:*, reg self8:V, reg p36:p(V +), reg ns5:*, reg ns6:V, reg p37:p(V +), reg tbl:*, reg tbl1:V, reg p38:p(V +), reg r101:V, reg c15:V, reg c16:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r102:V, reg i29:I, reg r103:V, reg allVars:*, reg allVars1:V, reg tbl2:*, reg tbl3:V, reg c17:cls, reg r104:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r105:V, reg i32:I, reg r106:V, reg generics:*, reg generics1:V, reg g6:*, reg g7:V, reg c18:cls, reg r107:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r108:V, reg i35:I, reg r109:V, reg packages:*, reg packages1:V, reg p39:*, reg p40:V, reg c19:cls, reg r110:V, reg i36:I, reg r111:V, reg i37:I, reg _in_3:cls, reg g8:*, reg g9:V, reg p41:p(V +), reg vars19:*, reg vars20:V, reg p42:p(V +), reg r115:V, reg c20:L, reg i39:I, reg c22:V, reg exists1:cls, reg g10:*, reg g11:V, reg p43:p(V +), reg self9:*, reg self10:V, reg p44:p(V +), reg r118:V, reg r119:V, reg c23:L, reg c24:V, reg c26:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r120:V, reg i45:I, reg r121:V, reg get0:cls, reg g12:*, reg g13:V, reg p45:p(V +), reg ns7:*, reg ns8:V, reg p46:p(V +), reg r124:V, reg c27:V, reg r125:V, reg c28:L, reg i47:I, reg c30:V, reg __6:cls, reg r126:V, reg r127:cls, reg f:*, reg f1:V, reg p47:p(V +), reg r129:V, reg c31:L, reg c32:V, reg c34:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r130:V, reg i53:I, reg r131:V, reg allVars2:*, reg allVars3:V, reg g14:*, reg g15:V, reg c35:cls, reg r132:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r133:V, reg i56:I, reg r134:V, reg generics2:*, reg generics3:V, reg g16:*, reg g17:V, reg c36:cls, reg r135:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r136:V, reg i59:I, reg r137:V, reg packages2:*, reg packages3:V, reg p48:*, reg p49:V, reg c37:cls, reg r138:V, reg i60:I, reg r139:V, reg _in_4:cls, reg g18:*, reg g19:V, reg p50:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r141:V, reg r142:V, reg c38:cls, reg r143:V, reg p51:p(V +), reg r145:V, reg c39:L, reg __7:cls, reg r146:V, reg r147:cls, reg g20:*, reg g21:V, reg p52:p(V +), reg self11:*, reg self12:V, reg p53:p(V +), reg r150:V, reg is_primitive:cls, reg fun:*, reg fun1:V, reg p54:p(V +), reg r152:V, reg c40:L, reg i63:I, reg c41:V, reg __8:cls, reg r153:V, reg r154:cls, reg fun2:*, reg fun3:V, reg p55:p(V +), reg r156:V, reg c43:L, reg c44:V, reg c46:L, reg warning:cls, reg gettextf:cls, reg sQuote6:cls, reg g22:*, reg g23:V, reg p56:p(V +), reg r158:V, reg p57:p(V +), reg sQuote7:cls, reg pkg4:*, reg pkg5:V, reg p58:p(V +), reg r161:V, reg p59:p(V +), reg sQuote8:cls, reg from1:*, reg from2:V, reg p60:p(V +), reg r164:V, reg p61:p(V +), reg r166:V, reg p62:p(V +), reg r168:V, reg i68:I, reg namespaceImportFrom:cls, reg self13:*, reg self14:V, reg p63:p(V +), reg asNamespace:cls, reg ns9:*, reg ns10:V, reg p64:p(V +), reg r172:V, reg p65:p(V +), reg allVars4:*, reg allVars5:V, reg p66:p(V +), reg generics4:*, reg generics5:V, reg p67:p(V +), reg packages4:*, reg packages5:V, reg p68:p(V +), reg from3:*, reg from4:V, reg p69:p(V +), reg r178:V |
    mkenv;
    st self = self;
    st ns = ns;
    st vars = vars;
    from_isMissing = missing.0(from);
    if from_isMissing then L0(NULL) else L0(from);
  L0(from_orDefault):
    st from = from_orDefault;
    character = ldf character;
    check L36() else D0();
  D0():
    deopt 1 [];
  L36():
    r = dyn character();
    check L37() else D1();
  D1():
    deopt 2 [r];
  L37():
    st allVars = r;
    character1 = ldf character;
    check L38() else D2();
  D2():
    deopt 5 [];
  L38():
    r1 = dyn character1();
    check L39() else D3();
  D3():
    deopt 6 [r1];
  L39():
    st generics = r1;
    character2 = ldf character;
    check L40() else D4();
  D4():
    deopt 9 [];
  L40():
    r2 = dyn character2();
    check L41() else D5();
  D5():
    deopt 10 [r2];
  L41():
    st packages = r2;
    ___ = ldf `:::`;
    check L42() else D6();
  D6():
    deopt 13 [];
  L42():
    r3 = dyn ___("methods", ".getGenerics");
    check L43() else D7();
  D7():
    deopt 16 [r3];
  L43():
    checkFun.0(r3);
    r4 = r3 as cls;
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r6 = dyn r4(p);
    check L44() else D8();
  D8():
    deopt 19 [r6];
  L44():
    st allFuns = r6;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L45() else L46();
  L1(r8):
    st allPackages = r8;
    __ = ldf `::`;
    check L49() else D11();
  L45():
    allFuns = ld allFuns;
    check L47() else D9();
  L46():
    r7 = dyn base(<sym allFuns>, "package");
    goto L1(r7);
  D9():
    deopt 23 [allFuns];
  D11():
    deopt 30 [];
  L47():
    allFuns1 = force? allFuns;
    checkMissing(allFuns1);
    attr = ldf attr in base;
    r9 = dyn attr(allFuns1, "package");
    check L48() else D10();
  L49():
    r10 = dyn __("methods", "getPackageName");
    check L50() else D12();
  D10():
    deopt 27 [r9];
  D12():
    deopt 33 [r10];
  L48():
    goto L1(r9);
  L50():
    checkFun.0(r10);
    r11 = r10 as cls;
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r13 = dyn r11(p1);
    check L51() else D13();
  D13():
    deopt 36 [r13];
  L51():
    st pkg = r13;
    _in_ = ldf `%in%`;
    check L52() else D14();
  D14():
    deopt 39 [];
  L52():
    p2 = prom<V +>{
      vars1 = ld vars;
      vars2 = force? vars1;
      checkMissing(vars2);
      return vars2;
    };
    p3 = prom<V +>{
      allFuns2 = ld allFuns;
      allFuns3 = force? allFuns2;
      checkMissing(allFuns3);
      return allFuns3;
    };
    r16 = dyn _in_(p2, p3);
    check L53() else D15();
  D15():
    deopt 42 [r16];
  L53():
    st found = r16;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L2(r18):
    r20 = `!`(r18);
    c = `as.logical`(r20);
    if c then L58() else L3();
  L54():
    found = ld found;
    check L56() else D16();
  L55():
    r17 = dyn base1(<sym found>);
    goto L2(r17);
  D16():
    deopt 46 [found];
  L3():
    goto L5();
  L5():
    _in_1 = ldf `%in%`;
    check L67() else D22();
  L56():
    found1 = force? found;
    checkMissing(found1);
    all = ldf all in base;
    r19 = dyn all(found1);
    check L57() else D17();
  L58():
    message = ldf message;
    check L59() else D18();
  D17():
    deopt 49 [r19];
  D18():
    deopt 52 [];
  D22():
    deopt 66 [];
  L57():
    goto L2(r19);
  L59():
    p14 = prom<V +>{
      sprintf = ldf sprintf;
      p5 = prom<V +>{
        ngettext = ldf ngettext;
        p4 = prom<V +>{
          sym2 = ldf sum;
          base2 = ldf sum in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r22):
          return r22;
        L1():
          found2 = ld found;
          found3 = force? found2;
          checkMissing(found3);
          r23 = `!`(found3);
          sum = ldf sum in base;
          r24 = dyn sum(r23);
          goto L0(r24);
        L2():
          r21 = dyn base2(<lang `!`(found)>);
          goto L0(r21);
        };
        r26 = dyn ngettext(p4, "No methods found in package %s for request: %s when loading %s", "No methods found in package %s for requests: %s when loading %s");
        return r26;
      };
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          pkg = ld pkg;
          pkg1 = force? pkg;
          checkMissing(pkg1);
          return pkg1;
        };
        r29 = dyn sQuote(p6);
        return r29;
      };
      p10 = prom<V +>{
        paste = ldf paste;
        p9 = prom<V +>{
          sQuote1 = ldf sQuote;
          p8 = prom<V +>{
            vars3 = ld vars;
            vars4 = force? vars3;
            checkMissing(vars4);
            c1 = `is.object`(vars4);
            if c1 then L1() else L2(vars4);
          L0(dx1):
            return dx1;
          L1():
            dr = tryDispatchBuiltin.1("[", vars4);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L3() else L2(dr);
          L2(vars6):
            found4 = ld found;
            found5 = force? found4;
            checkMissing(found5);
            r31 = `!`(found5);
            __1 = ldf `[` in base;
            r32 = dyn __1(vars6, r31);
            goto L0(r32);
          L3():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          };
          r34 = dyn sQuote1(p8);
          return r34;
        };
        r36 = dyn paste[, collapse](p9, ", ");
        return r36;
      };
      p13 = prom<V +>{
        sQuote2 = ldf sQuote;
        p12 = prom<V +>{
          getNamespaceName = ldf getNamespaceName;
          p11 = prom<V +>{
            self1 = ld self;
            self2 = force? self1;
            checkMissing(self2);
            return self2;
          };
          r39 = dyn getNamespaceName(p11);
          return r39;
        };
        r41 = dyn sQuote2(p12);
        return r41;
      };
      r43 = dyn sprintf(p5, p7, p10, p13);
      return r43;
    };
    r45 = dyn message[, domain](p14, NA_LGL);
    check L60() else D19();
  L67():
    p15 = prom<V +>{
      vars11 = ld vars;
      vars12 = force? vars11;
      checkMissing(vars12);
      return vars12;
    };
    p16 = prom<V +>{
      allFuns4 = ld allFuns;
      allFuns5 = force? allFuns4;
      checkMissing(allFuns5);
      return allFuns5;
    };
    r49 = dyn _in_1(p15, p16);
    check L68() else D23();
  D19():
    deopt 56 [r45];
  D23():
    deopt 69 [r49];
  L60():
    vars7 = ld vars;
    check L61() else D20();
  L68():
    st found = r49;
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L69() else L70();
  D20():
    deopt 57 [vars7];
  L6(r51):
    r53 = `!`(r51);
    c3 = `as.logical`(r53);
    if c3 then L73() else L7();
  L61():
    vars8 = force? vars7;
    checkMissing(vars8);
    c2 = `is.object`(vars8);
    if c2 then L62() else L63(vars8);
  L69():
    found8 = ld found;
    check L71() else D24();
  L70():
    r50 = dyn base3(<sym found>);
    goto L6(r50);
  D24():
    deopt 73 [found8];
  L4(dx3):
    st vars = dx3;
    goto L5();
  L7():
    goto L8();
  L8():
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L77() else L78();
  L62():
    dr2 = tryDispatchBuiltin.1("[", vars8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(dr2);
  L63(vars10):
    found6 = ld found;
    check L65() else D21();
  L71():
    found9 = force? found8;
    checkMissing(found9);
    all1 = ldf all in base;
    r52 = dyn all1(found9);
    check L72() else D25();
  L73():
    stop = ldf stop;
    check L74() else D26();
  D21():
    deopt 59 [vars10, found6];
  D25():
    deopt 76 [r52];
  D26():
    deopt 79 [];
  L9(r81):
    s = toForSeq(r81);
    l = length(s);
    i = 0;
    goto L10(i);
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L65():
    found7 = force? found6;
    __2 = ldf `[` in base;
    r46 = dyn __2(vars10, found7);
    goto L4(r46);
  L72():
    goto L6(r52);
  L74():
    p27 = prom<V +>{
      sprintf1 = ldf sprintf;
      p18 = prom<V +>{
        ngettext1 = ldf ngettext;
        p17 = prom<V +>{
          sym4 = ldf sum;
          base4 = ldf sum in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r55):
          return r55;
        L1():
          found10 = ld found;
          found11 = force? found10;
          checkMissing(found11);
          r56 = `!`(found11);
          sum1 = ldf sum in base;
          r57 = dyn sum1(r56);
          goto L0(r57);
        L2():
          r54 = dyn base4(<lang `!`(found)>);
          goto L0(r54);
        };
        r59 = dyn ngettext1(p17, "requested method not found in environment/package %s: %s when loading %s", "requested methods not found in environment/package %s: %s when loading %s");
        return r59;
      };
      p20 = prom<V +>{
        sQuote3 = ldf sQuote;
        p19 = prom<V +>{
          pkg2 = ld pkg;
          pkg3 = force? pkg2;
          checkMissing(pkg3);
          return pkg3;
        };
        r62 = dyn sQuote3(p19);
        return r62;
      };
      p23 = prom<V +>{
        paste1 = ldf paste;
        p22 = prom<V +>{
          sQuote4 = ldf sQuote;
          p21 = prom<V +>{
            vars13 = ld vars;
            vars14 = force? vars13;
            checkMissing(vars14);
            c4 = `is.object`(vars14);
            if c4 then L1() else L2(vars14);
          L0(dx6):
            return dx6;
          L1():
            dr4 = tryDispatchBuiltin.1("[", vars14);
            dc2 = getTryDispatchBuiltinDispatched(dr4);
            if dc2 then L3() else L2(dr4);
          L2(vars16):
            found12 = ld found;
            found13 = force? found12;
            checkMissing(found13);
            r64 = `!`(found13);
            __3 = ldf `[` in base;
            r65 = dyn __3(vars16, r64);
            goto L0(r65);
          L3():
            dx5 = getTryDispatchBuiltinValue(dr4);
            goto L0(dx5);
          };
          r67 = dyn sQuote4(p21);
          return r67;
        };
        r69 = dyn paste1[, collapse](p22, ", ");
        return r69;
      };
      p26 = prom<V +>{
        sQuote5 = ldf sQuote;
        p25 = prom<V +>{
          getNamespaceName1 = ldf getNamespaceName;
          p24 = prom<V +>{
            self3 = ld self;
            self4 = force? self3;
            checkMissing(self4);
            return self4;
          };
          r72 = dyn getNamespaceName1(p24);
          return r72;
        };
        r74 = dyn sQuote5(p25);
        return r74;
      };
      r76 = dyn sprintf1(p18, p20, p23, p26);
      return r76;
    };
    r78 = dyn stop[, `call.`, domain](p27, FALSE, NA_LGL);
    check L75() else D27();
  L77():
    allFuns6 = ld allFuns;
    check L79() else D28();
  L78():
    r80 = dyn base5(<sym allFuns>);
    goto L9(r80);
  D27():
    deopt 85 [r78];
  D28():
    deopt 89 [allFuns6];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L80() else L35();
  L75():
    goto L8();
  L79():
    allFuns7 = force? allFuns6;
    checkMissing(allFuns7);
    r82 = seq_along(allFuns7);
    goto L9(r82);
  L35():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    allFuns8 = ld allFuns;
    check L81() else D29();
  L80():
    namespaceImportFrom = ldf namespaceImportFrom;
    check L175() else D81();
  D29():
    deopt 92 [i2, allFuns8];
  D81():
    deopt 279 [];
  L81():
    allFuns9 = force? allFuns8;
    checkMissing(allFuns9);
    c6 = `is.object`(allFuns9);
    if c6 then L82() else L83(i2, allFuns9);
  L175():
    p63 = prom<V +>{
      self13 = ld self;
      self14 = force? self13;
      checkMissing(self14);
      return self14;
    };
    p65 = prom<V +>{
      asNamespace = ldf asNamespace;
      p64 = prom<V +>{
        ns9 = ld ns;
        ns10 = force? ns9;
        checkMissing(ns10);
        return ns10;
      };
      r172 = dyn asNamespace(p64);
      return r172;
    };
    p66 = prom<V +>{
      allVars4 = ld allVars;
      allVars5 = force? allVars4;
      checkMissing(allVars5);
      return allVars5;
    };
    p67 = prom<V +>{
      generics4 = ld generics;
      generics5 = force? generics4;
      checkMissing(generics5);
      return generics5;
    };
    p68 = prom<V +>{
      packages4 = ld packages;
      packages5 = force? packages4;
      checkMissing(packages5);
      return packages5;
    };
    p69 = prom<V +>{
      from3 = ld from;
      from4 = force? from3;
      checkMissing(from4);
      return from4;
    };
    r178 = dyn namespaceImportFrom[, , , , , from](p63, p65, p66, p67, p68, p69);
    check L176() else D82();
  D82():
    deopt 287 [r178];
  L11(i8, dx8):
    st g = dx8;
    allPackages = ld allPackages;
    check L86() else D31();
  L82():
    dr6 = tryDispatchBuiltin.1("[[", allFuns9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L84() else L83(i2, dr6);
  L83(i6, allFuns11):
    i9 = ld i;
    check L85() else D30();
  L176():
    popenv;
    return r178;
  D30():
    deopt 94 [i6, allFuns11, i9];
  D31():
    deopt 98 [i8, allPackages];
  L84():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L11(i2, dx7);
  L85():
    i10 = force? i9;
    __4 = ldf `[[` in base;
    r83 = dyn __4(allFuns11, i10);
    goto L11(i6, r83);
  L86():
    allPackages1 = force? allPackages;
    checkMissing(allPackages1);
    c7 = `is.object`(allPackages1);
    if c7 then L87() else L88(i8, allPackages1);
  L12(i14, dx10):
    st p = dx10;
    exists = ldf exists;
    check L91() else D33();
  L87():
    dr8 = tryDispatchBuiltin.1("[[", allPackages1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L89() else L88(i8, dr8);
  L88(i12, allPackages3):
    i15 = ld i;
    check L90() else D32();
  D32():
    deopt 100 [i12, allPackages3, i15];
  D33():
    deopt 105 [i14];
  L89():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L12(i8, dx9);
  L90():
    i16 = force? i15;
    __5 = ldf `[[` in base;
    r84 = dyn __5(allPackages3, i16);
    goto L12(i12, r84);
  L91():
    p28 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    p29 = prom<V +>{
      self5 = ld self;
      self6 = force? self5;
      checkMissing(self6);
      return self6;
    };
    r87 = dyn exists[, envir, inherits](p28, p29, FALSE);
    check L92() else D34();
  D34():
    deopt 111 [i14, r87];
  L92():
    c8 = `as.logical`(r87);
    if c8 then L13(i14, c8) else L93();
  L13(i17, c9):
    c14 = `as.logical`(c9);
    if c14 then L97() else L14();
  L93():
    _in_2 = ldf `%in%`;
    check L94() else D35();
  D35():
    deopt 113 [i14, c8];
  L14():
    goto L21(i17);
  L21(i37):
    _in_3 = ldf `%in%`;
    check L123() else D51();
  L94():
    p30 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    p31 = prom<V +>{
      vars17 = ld vars;
      vars18 = force? vars17;
      checkMissing(vars18);
      return vars18;
    };
    r90 = dyn _in_2(p30, p31);
    check L95() else D36();
  L97():
    ___1 = ldf `:::`;
    check L98() else D37();
  D36():
    deopt 116 [i14, c8, r90];
  D37():
    deopt 119 [i17];
  D51():
    deopt 168 [i37];
  L95():
    c11 = `as.logical`(r90);
    c12 = `||`(c8, c11);
    goto L13(i14, c12);
  L98():
    r91 = dyn ___1("methods", ".TableMetaName");
    check L99() else D38();
  L123():
    p41 = prom<V +>{
      g8 = ld g;
      g9 = force? g8;
      checkMissing(g9);
      return g9;
    };
    p42 = prom<V +>{
      vars19 = ld vars;
      vars20 = force? vars19;
      checkMissing(vars20);
      return vars20;
    };
    r115 = dyn _in_3(p41, p42);
    check L124() else D52();
  D38():
    deopt 122 [i17, r91];
  D52():
    deopt 171 [i37, r115];
  L99():
    checkFun.0(r91);
    r92 = r91 as cls;
    p32 = prom<V +>{
      g4 = ld g;
      g5 = force? g4;
      checkMissing(g5);
      return g5;
    };
    p35 = prom<V +>{
      p33 = ld p;
      p34 = force? p33;
      checkMissing(p34);
      return p34;
    };
    r95 = dyn r92(p32, p35);
    check L100() else D39();
  L124():
    c20 = `as.logical`(r115);
    if c20 then L125() else L22(i37, c20);
  D39():
    deopt 126 [i17, r95];
  L22(i39, c22):
    c26 = `as.logical`(c22);
    if c26 then L129() else L23();
  L100():
    st tbl = r95;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L101() else L102();
  L125():
    exists1 = ldf exists;
    check L126() else D53();
  D53():
    deopt 173 [i37, c20];
  L15(i24, r97):
    c16 = `as.logical`(r97);
    if c16 then L105() else L16();
  L23():
    goto L34(i39);
  L34(i68):
    goto L10(i68);
  L101():
    _mergeImportMethods = ldf `.mergeImportMethods`;
    check L103() else D40();
  L102():
    r96 = dyn base6(<lang .mergeImportMethods(self, ns, tbl)>);
    goto L15(i17, r96);
  L126():
    p43 = prom<V +>{
      g10 = ld g;
      g11 = force? g10;
      checkMissing(g11);
      return g11;
    };
    p44 = prom<V +>{
      self9 = ld self;
      self10 = force? self9;
      checkMissing(self10);
      return self10;
    };
    r118 = dyn exists1[, envir, inherits](p43, p44, FALSE);
    check L127() else D54();
  L129():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L130() else L131();
  D40():
    deopt 130 [i17];
  D54():
    deopt 179 [i37, c20, r118];
  L16():
    goto L20(i24, NULL);
  L20(i36, r111):
    goto L21(i36);
  L24(i45, r121):
    r125 = `!`(r121);
    c28 = `as.logical`(r125);
    if c28 then L134() else L25(i45, c28);
  L103():
    p36 = prom<V +>{
      self7 = ld self;
      self8 = force? self7;
      checkMissing(self8);
      return self8;
    };
    p37 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    p38 = prom<V +>{
      tbl = ld tbl;
      tbl1 = force? tbl;
      checkMissing(tbl1);
      return tbl1;
    };
    r101 = dyn _mergeImportMethods(p36, p37, p38);
    check L104() else D41();
  L105():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L106() else L107();
  L127():
    r119 = `!`(r118);
    c23 = `as.logical`(r119);
    c24 = `&&`(c20, c23);
    goto L22(i37, c24);
  L130():
    get0 = ldf get0;
    check L132() else D55();
  L131():
    r120 = dyn base10(<lang `<-`(f, get0(g, envir=ns))>);
    goto L24(i39, r120);
  D41():
    deopt 134 [i17, r101];
  D55():
    deopt 184 [i39];
  L17(i29, r103):
    st allVars = r103;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L25(i47, c30):
    c34 = `as.logical`(c30);
    if c34 then L139() else L26();
  L104():
    c15 = `==`(r101, NULL);
    goto L15(i17, c15);
  L106():
    allVars = ld allVars;
    check L108() else D42();
  L107():
    r102 = dyn base7(<sym allVars>, <sym tbl>);
    goto L17(i24, r102);
  L132():
    p45 = prom<V +>{
      g12 = ld g;
      g13 = force? g12;
      checkMissing(g13);
      return g13;
    };
    p46 = prom<V +>{
      ns7 = ld ns;
      ns8 = force? ns7;
      checkMissing(ns8);
      return ns8;
    };
    r124 = dyn get0[, envir](p45, p46);
    check L133() else D56();
  L134():
    __6 = ldf `::`;
    check L135() else D57();
  D42():
    deopt 138 [i24, allVars];
  D56():
    deopt 188 [i39, r124];
  D57():
    deopt 193 [i45, c28];
  L18(i32, r106):
    st generics = r106;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L116() else L117();
  L26():
    _in_4 = ldf `%in%`;
    check L156() else D69();
  L30(i60, r139):
    goto L34(i60);
  L108():
    allVars1 = force? allVars;
    checkMissing(allVars1);
    tbl2 = ld tbl;
    check L109() else D43();
  L111():
    generics = ld generics;
    check L113() else D45();
  L112():
    r105 = dyn base8(<sym generics>, <sym g>);
    goto L18(i29, r105);
  L133():
    st f = r124;
    c27 = `==`(r124, NULL);
    goto L24(i39, c27);
  L135():
    r126 = dyn __6("methods", "is");
    check L136() else D58();
  L139():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L140() else L141();
  D43():
    deopt 140 [i24, tbl2];
  D45():
    deopt 147 [i29, generics];
  D58():
    deopt 196 [i45, c28, r126];
  D69():
    deopt 230 [i47];
  L19(i35, r109):
    st packages = r109;
    goto L20(i35, r109);
  L27(i53, r131):
    st allVars = r131;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L145() else L146();
  L109():
    tbl3 = force? tbl2;
    checkMissing(tbl3);
    c17 = ldf c in base;
    r104 = dyn c17(allVars1, tbl3);
    check L110() else D44();
  L113():
    generics1 = force? generics;
    checkMissing(generics1);
    g6 = ld g;
    check L114() else D46();
  L116():
    packages = ld packages;
    check L118() else D48();
  L117():
    r108 = dyn base9(<sym packages>, <sym p>);
    goto L19(i32, r108);
  L136():
    checkFun.0(r126);
    r127 = r126 as cls;
    p47 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r129 = dyn r127(p47, "genericFunction");
    check L137() else D59();
  L140():
    allVars2 = ld allVars;
    check L142() else D60();
  L141():
    r130 = dyn base11(<sym allVars>, <sym g>);
    goto L27(i47, r130);
  L156():
    p50 = prom<V +>{
      g18 = ld g;
      g19 = force? g18;
      checkMissing(g19);
      return g19;
    };
    p51 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r142):
      return r142;
    L1():
      c38 = ldf c in base;
      r143 = dyn c38("as.vector", "is.unsorted", "unlist");
      goto L0(r143);
    L2():
      r141 = dyn base14("as.vector", "is.unsorted", "unlist");
      goto L0(r141);
    };
    r145 = dyn _in_4(p50, p51);
    check L157() else D70();
  D44():
    deopt 143 [i24, r104];
  D46():
    deopt 149 [i29, g6];
  D48():
    deopt 156 [i32, packages];
  D59():
    deopt 200 [i45, c28, r129];
  D60():
    deopt 204 [i47, allVars2];
  D70():
    deopt 233 [i47, r145];
  L28(i56, r134):
    st generics = r134;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L150() else L151();
  L110():
    goto L17(i24, r104);
  L114():
    g7 = force? g6;
    checkMissing(g7);
    c18 = ldf c in base;
    r107 = dyn c18(generics1, g7);
    check L115() else D47();
  L118():
    packages1 = force? packages;
    checkMissing(packages1);
    p39 = ld p;
    check L119() else D49();
  L137():
    c31 = `as.logical`(r129);
    c32 = `&&`(c28, c31);
    goto L25(i45, c32);
  L142():
    allVars3 = force? allVars2;
    checkMissing(allVars3);
    g14 = ld g;
    check L143() else D61();
  L145():
    generics2 = ld generics;
    check L147() else D63();
  L146():
    r133 = dyn base12(<sym generics>, <sym g>);
    goto L28(i53, r133);
  L157():
    c39 = `as.logical`(r145);
    if c39 then L158() else L31();
  D47():
    deopt 152 [i29, r107];
  D49():
    deopt 158 [i32, p39];
  D61():
    deopt 206 [i47, g14];
  D63():
    deopt 213 [i53, generics2];
  L29(i59, r137):
    st packages = r137;
    goto L30(i59, r137);
  L31():
    __7 = ldf `::`;
    check L160() else D71();
  L115():
    goto L18(i29, r107);
  L119():
    p40 = force? p39;
    checkMissing(p40);
    c19 = ldf c in base;
    r110 = dyn c19(packages1, p40);
    check L120() else D50();
  L143():
    g15 = force? g14;
    checkMissing(g15);
    c35 = ldf c in base;
    r132 = dyn c35(allVars3, g15);
    check L144() else D62();
  L147():
    generics3 = force? generics2;
    checkMissing(generics3);
    g16 = ld g;
    check L148() else D64();
  L150():
    packages2 = ld packages;
    check L152() else D66();
  L151():
    r136 = dyn base13(<sym packages>, <sym p>);
    goto L29(i56, r136);
  L158():
    goto L30(i47, NULL);
  D50():
    deopt 161 [i32, r110];
  D62():
    deopt 209 [i47, r132];
  D64():
    deopt 215 [i53, g16];
  D66():
    deopt 222 [i56, packages2];
  D71():
    deopt 237 [i47];
  L120():
    goto L19(i32, r110);
  L144():
    goto L27(i47, r132);
  L148():
    g17 = force? g16;
    checkMissing(g17);
    c36 = ldf c in base;
    r135 = dyn c36(generics3, g17);
    check L149() else D65();
  L152():
    packages3 = force? packages2;
    checkMissing(packages3);
    p48 = ld p;
    check L153() else D67();
  L160():
    r146 = dyn __7("methods", "getFunction");
    check L161() else D72();
  D65():
    deopt 218 [i53, r135];
  D67():
    deopt 224 [i56, p48];
  D72():
    deopt 240 [i47, r146];
  L149():
    goto L28(i53, r135);
  L153():
    p49 = force? p48;
    checkMissing(p49);
    c37 = ldf c in base;
    r138 = dyn c37(packages3, p49);
    check L154() else D68();
  L161():
    checkFun.0(r146);
    r147 = r146 as cls;
    p52 = prom<V +>{
      g20 = ld g;
      g21 = force? g20;
      checkMissing(g21);
      return g21;
    };
    p53 = prom<V +>{
      self11 = ld self;
      self12 = force? self11;
      checkMissing(self12);
      return self12;
    };
    r150 = dyn r147[, mustFind, where](p52, FALSE, p53);
    check L162() else D73();
  D68():
    deopt 227 [i56, r138];
  D73():
    deopt 247 [i47, r150];
  L154():
    goto L29(i56, r138);
  L162():
    st fun = r150;
    is_primitive = ldf `is.primitive`;
    check L163() else D74();
  D74():
    deopt 250 [i47];
  L163():
    p54 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    r152 = dyn is_primitive(p54);
    check L164() else D75();
  D75():
    deopt 252 [i47, r152];
  L164():
    c40 = `as.logical`(r152);
    if c40 then L32(i47, c40) else L165();
  L32(i63, c41):
    c46 = `as.logical`(c41);
    if c46 then L170() else L33();
  L165():
    __8 = ldf `::`;
    check L166() else D76();
  D76():
    deopt 254 [i47, c40];
  L33():
    warning = ldf warning;
    check L172() else D79();
  L166():
    r153 = dyn __8("methods", "is");
    check L167() else D77();
  L170():
    goto L30(i63, NULL);
  D77():
    deopt 257 [i47, c40, r153];
  D79():
    deopt 266 [i63];
  L167():
    checkFun.0(r153);
    r154 = r153 as cls;
    p55 = prom<V +>{
      fun2 = ld fun;
      fun3 = force? fun2;
      checkMissing(fun3);
      return fun3;
    };
    r156 = dyn r154(p55, "genericFunction");
    check L168() else D78();
  L172():
    p62 = prom<V +>{
      gettextf = ldf gettextf;
      p57 = prom<V +>{
        sQuote6 = ldf sQuote;
        p56 = prom<V +>{
          g22 = ld g;
          g23 = force? g22;
          checkMissing(g23);
          return g23;
        };
        r158 = dyn sQuote6(p56);
        return r158;
      };
      p59 = prom<V +>{
        sQuote7 = ldf sQuote;
        p58 = prom<V +>{
          pkg4 = ld pkg;
          pkg5 = force? pkg4;
          checkMissing(pkg5);
          return pkg5;
        };
        r161 = dyn sQuote7(p58);
        return r161;
      };
      p61 = prom<V +>{
        sQuote8 = ldf sQuote;
        p60 = prom<V +>{
          from1 = ld from;
          from2 = force? from1;
          checkMissing(from2);
          return from2;
        };
        r164 = dyn sQuote8(p60);
        return r164;
      };
      r166 = dyn gettextf("No generic function %s found corresponding to requested imported methods from package %s when loading %s (malformed exports?)", p57, p59, p61);
      return r166;
    };
    r168 = dyn warning[, domain, `call.`](p62, NA_LGL, FALSE);
    check L173() else D80();
  D78():
    deopt 261 [i47, c40, r156];
  D80():
    deopt 272 [i63, r168];
  L168():
    c43 = `as.logical`(r156);
    c44 = `||`(c40, c43);
    goto L32(i47, c44);
  L173():
    goto L30(i63, r168);
  }
}