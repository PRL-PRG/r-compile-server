fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner306907019;
    st `.check_make_vars` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner306907019(dir, makevars) {
  (reg dir:*, reg makevars:*) -+> V { var dir:*, var makevars:*, reg makevars_isMissing:L, reg makevars_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg l:*, reg class__:cls, reg r7:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg makevars1:*, reg makevars2:V, reg p2:p(V +), reg r10:V, reg paths:*, reg paths1:V, reg c1:L, reg paths3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_test:cls, reg paths4:*, reg paths5:V, reg p3:p(V +), reg r12:V, reg __:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg paths6:*, reg paths7:V, reg length:cls, reg r16:V, reg r17:V, reg c2:L, reg bad_flags:*, reg bad_flags1:V, reg file_path1:cls, reg basename:cls, reg paths8:*, reg paths9:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg l1:*, reg c3:L, reg r25:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r28:V, reg paths10:*, reg paths11:V, reg c4:L, reg paths13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r29:V, reg Sys_getenv:cls, reg r30:V, reg make:*, reg make1:V, reg r31:V, reg c5:L, reg sprintf:cls, reg make2:*, reg make3:V, reg p6:p(V +), reg shQuote:cls, reg file_path2:cls, reg R_home:cls, reg r34:V, reg p7:p(V +), reg r36:V, reg p8:p(V +), reg r38:V, reg p9:p(V +), reg shQuote1:cls, reg mfile:*, reg mfile1:V, reg p10:p(V +), reg r41:V, reg p11:p(V +), reg shQuote2:cls, reg file_path3:cls, reg R_home1:cls, reg r43:V, reg p12:p(V +), reg r45:V, reg p13:p(V +), reg r47:V, reg p14:p(V +), reg r49:V, reg suppressWarnings:cls, reg tryCatch:cls, reg system:cls, reg command:*, reg command1:V, reg p15:p(V +), reg r51:V, reg p16:p(V +), reg identity:*, reg identity1:V, reg p17:p(V +), reg r54:V, reg p18:p(V +), reg r56:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r57:V, reg r58:V, reg lines:*, reg lines1:V, reg length1:cls, reg r59:V, reg r60:V, reg c6:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r61:V, reg c11:L, reg r62:V, reg lines2:*, reg lines3:V, reg inherits:cls, reg r63:V, reg c12:L, reg c13:V, reg c15:L, reg bad_flags2:*, reg bad_flags3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r66:V, reg r67:V, reg c16:cls, reg r68:V, reg sprintf1:cls, reg paste:cls, reg prefixes:*, reg prefixes1:V, reg p19:p(V +), reg r70:V, reg p20:p(V +), reg r72:V, reg grep:cls, reg uflags_re:*, reg uflags_re1:V, reg p21:p(V +), reg lines4:*, reg lines5:V, reg p22:p(V +), reg r75:V, reg sub:cls, reg uflags_re2:*, reg uflags_re3:V, reg p23:p(V +), reg lines6:*, reg lines7:V, reg c17:L, reg lines9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pos:*, reg pos1:V, reg __2:cls, reg r77:V, reg p24:p(V +), reg r79:V, reg r80:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r81:V, reg r82:V, reg ind:*, reg ind1:V, reg any:cls, reg r83:V, reg c18:L, reg lines10:*, reg lines11:V, reg c19:L, reg lines13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pos2:*, reg pos3:V, reg c20:L, reg lines15:V, reg pos5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg lines17:V, reg dx11:V, reg ind2:*, reg ind3:V, reg __3:cls, reg r84:V, reg __4:cls, reg r85:V, reg l4:*, reg c21:L, reg dx13:V, reg l6:*, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg dx17:V, reg r86:V, reg sprintf2:cls, reg paste1:cls, reg prefixes2:*, reg prefixes3:V, reg p25:p(V +), reg r88:V, reg p26:p(V +), reg r90:V, reg lines18:*, reg lines19:V, reg c22:L, reg lines21:V, reg dr14:V, reg dc7:L, reg dx19:V, reg dx20:V, reg grepl:cls, reg pflags_re:*, reg pflags_re1:V, reg p27:p(V +), reg lines22:*, reg lines23:V, reg p28:p(V +), reg r93:V, reg __5:cls, reg r94:V, reg sub1:cls, reg lines24:*, reg lines25:V, reg p29:p(V +), reg r96:V, reg sub2:cls, reg pflags_re2:*, reg pflags_re3:V, reg p30:p(V +), reg lines26:*, reg lines27:V, reg p31:p(V +), reg r99:V, reg strsplit:cls, reg lines28:*, reg lines29:V, reg p32:p(V +), reg r101:V, reg sprintf3:cls, reg paste2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r102:V, reg r103:V, reg c23:cls, reg r104:V, reg p33:p(V +), reg r106:V, reg p34:p(V +), reg r108:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r109:V, reg r110:V, reg lines30:*, reg lines31:V, reg r111:I, reg s:V, reg l7:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x:V, reg grep1:cls, reg bad_flags_regexp:*, reg bad_flags_regexp1:V, reg p35:p(V +), reg flags:*, reg flags1:V, reg c25:L, reg flags3:V, reg dr16:V, reg dc8:L, reg dx21:V, reg dx22:V, reg i5:*, reg i6:V, reg __6:cls, reg r113:V, reg p36:p(V +), reg r115:V, reg _in_:cls, reg names:*, reg names1:V, reg c26:L, reg names3:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg i7:*, reg i8:V, reg __7:cls, reg r116:V, reg p37:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r118:V, reg r119:V, reg c27:cls, reg r120:V, reg p38:p(V +), reg r122:V, reg c28:L, reg grep2:cls, reg bad:*, reg bad1:V, reg p39:p(V +), reg r124:V, reg i11:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r126:V, reg i14:I, reg r127:V, reg bad2:*, reg bad3:V, reg length2:cls, reg r128:V, reg c29:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r129:V, reg i19:I, reg r130:V, reg bad_flags4:*, reg bad_flags5:V, reg c30:L, reg i21:I, reg bad_flags7:V, reg dr20:V, reg dc10:L, reg dx25:V, reg i23:I, reg dx26:V, reg r131:V, reg structure:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r132:V, reg r133:V, reg bad4:*, reg bad5:V, reg list1:cls, reg r134:V, reg p40:p(V +), reg names4:*, reg names5:V, reg c31:L, reg names7:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg i24:*, reg i25:V, reg __8:cls, reg r136:V, reg p41:p(V +), reg r138:V, reg c32:cls, reg r139:V, reg l8:*, reg c33:L, reg i27:I, reg r141:V, reg l10:*, reg dr24:V, reg dc12:L, reg dx29:V, reg i29:I, reg r143:V, reg dx30:V, reg r144:V, reg i30:I, reg paths14:*, reg paths15:V, reg s1:V, reg l11:I, reg i31:I, reg i32:I, reg i33:I, reg c34:L, reg x1:V, reg readLines:cls, reg f:*, reg f1:V, reg p42:p(V +), reg r147:V, reg sprintf4:cls, reg paste3:cls, reg prefixes4:*, reg prefixes5:V, reg p43:p(V +), reg r149:V, reg p44:p(V +), reg r151:V, reg grep3:cls, reg pflags_re4:*, reg pflags_re5:V, reg p45:p(V +), reg lines32:*, reg lines33:V, reg p46:p(V +), reg r154:V, reg sub3:cls, reg pflags_re6:*, reg pflags_re7:V, reg p47:p(V +), reg lines34:*, reg lines35:V, reg p48:p(V +), reg r157:V, reg strsplit1:cls, reg lines36:*, reg lines37:V, reg p49:p(V +), reg r159:V, reg character:cls, reg r160:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r161:V, reg i38:I, reg r162:V, reg lines38:*, reg lines39:V, reg r163:I, reg s2:V, reg l12:I, reg i39:I, reg i40:I, reg i41:I, reg i42:I, reg c35:L, reg x2:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r164:V, reg i51:I, reg i52:I, reg r165:V, reg bad6:*, reg bad7:V, reg grep4:cls, reg bad_flags_regexp2:*, reg bad_flags_regexp3:V, reg p50:p(V +), reg flags4:*, reg flags5:V, reg c36:L, reg flags7:V, reg dr26:V, reg dc13:L, reg dx31:V, reg dx32:V, reg i53:*, reg i54:V, reg __9:cls, reg r167:V, reg p51:p(V +), reg r169:V, reg c37:cls, reg r170:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r171:V, reg i57:I, reg r172:V, reg bad8:*, reg bad9:V, reg length3:cls, reg r173:V, reg c38:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r174:V, reg i62:I, reg r175:V, reg bad_flags8:*, reg bad_flags9:V, reg c39:L, reg i64:I, reg bad_flags11:V, reg dr28:V, reg dc14:L, reg dx33:V, reg i66:I, reg dx34:V, reg r176:V, reg structure1:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r177:V, reg r178:V, reg bad10:*, reg bad11:V, reg list2:cls, reg r179:V, reg p52:p(V +), reg file_path4:cls, reg basename1:cls, reg f2:*, reg f3:V, reg p53:p(V +), reg r182:V, reg p54:p(V +), reg r184:V, reg p55:p(V +), reg r186:V, reg c40:cls, reg r187:V, reg l13:*, reg c41:L, reg i68:I, reg r189:V, reg l15:*, reg dr30:V, reg dc15:L, reg dx35:V, reg i70:I, reg r191:V, reg dx36:V, reg r192:V, reg i71:I, reg bad_flags12:*, reg bad_flags13:V |
    mkenv;
    st dir = dir;
    makevars_isMissing = missing.0(makevars);
    if makevars_isMissing then L0() else L1(makevars);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("Makevars.in", "Makevars");
      goto L0(r2);
    L2():
      r = dyn base("Makevars.in", "Makevars");
      goto L0(r);
    };
    goto L1(p);
  L1(makevars_orDefault):
    st makevars = makevars_orDefault;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L2(r5):
    st bad_flags = r5;
    l = ld bad_flags;
    class__ = ldf `class<-`;
    check L44() else D1();
  L41():
    list = ldf list in base;
    r6 = dyn list();
    check L43() else D0();
  L42():
    r4 = dyn base1();
    goto L2(r4);
  D0():
    deopt 3 [r6];
  D1():
    deopt 8 ["check_make_vars", l, "check_make_vars"];
  L43():
    goto L2(r6);
  L44():
    r7 = dyn class__(l, NULL, "check_make_vars");
    check L45() else D2();
  D2():
    deopt 10 ["check_make_vars", r7];
  L45():
    st bad_flags = r7;
    file_path = ldf `file.path`;
    check L46() else D3();
  D3():
    deopt 13 [];
  L46():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p2 = prom<V +>{
      makevars1 = ld makevars;
      makevars2 = force? makevars1;
      checkMissing(makevars2);
      return makevars2;
    };
    r10 = dyn file_path(p1, p2);
    check L47() else D4();
  D4():
    deopt 16 [r10];
  L47():
    st paths = r10;
    paths = ld paths;
    check L48() else D5();
  D5():
    deopt 18 [paths];
  L48():
    paths1 = force? paths;
    checkMissing(paths1);
    c1 = `is.object`(paths1);
    if c1 then L49() else L50(paths1);
  L3(dx1):
    st paths = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L49():
    dr = tryDispatchBuiltin.1("[", paths1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(dr);
  L50(paths3):
    file_test = ldf file_test;
    check L52() else D6();
  D6():
    deopt 21 [paths3];
  L4(r15):
    r17 = `!`(r15);
    c2 = `as.logical`(r17);
    if c2 then L58() else L5();
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L52():
    p3 = prom<V +>{
      paths4 = ld paths;
      paths5 = force? paths4;
      checkMissing(paths5);
      return paths5;
    };
    r12 = dyn file_test("-f", p3);
    check L53() else D7();
  L54():
    paths6 = ld paths;
    check L56() else D8();
  L55():
    r14 = dyn base2(<sym paths>);
    goto L4(r14);
  D7():
    deopt 24 [paths3, r12];
  D8():
    deopt 29 [paths6];
  L5():
    file_path1 = ldf `file.path`;
    check L62() else D11();
  L53():
    __ = ldf `[` in base;
    r13 = dyn __(paths3, r12);
    goto L3(r13);
  L56():
    paths7 = force? paths6;
    checkMissing(paths7);
    length = ldf length in base;
    r16 = dyn length(paths7);
    check L57() else D9();
  L58():
    bad_flags = ld bad_flags;
    check L59() else D10();
  D9():
    deopt 32 [r16];
  D10():
    deopt 34 [bad_flags];
  D11():
    deopt 40 [];
  L57():
    goto L4(r16);
  L59():
    bad_flags1 = force? bad_flags;
    checkMissing(bad_flags1);
    popenv;
    return bad_flags1;
  L62():
    p5 = prom<V +>{
      basename = ldf basename;
      p4 = prom<V +>{
        paths8 = ld paths;
        paths9 = force? paths8;
        checkMissing(paths9);
        return paths9;
      };
      r21 = dyn basename(p4);
      return r21;
    };
    r23 = dyn file_path1("src", p5);
    check L63() else D12();
  D12():
    deopt 43 [r23];
  L63():
    l1 = ld bad_flags;
    c3 = `is.object`(l1);
    if c3 then L65() else L66(r23, l1);
  L64(dx3):
    st bad_flags = dx3;
    paths10 = ld paths;
    check L68() else D13();
  L65():
    dr2 = tryDispatchBuiltin.0("$<-", l1, r23);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L67() else L66(r23, dr2);
  L66(r25, l3):
    r28 = `$<-`(l3, <sym paths>, r23);
    goto L64(r28);
  D13():
    deopt 47 [paths10];
  L67():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L64(dx2);
  L68():
    paths11 = force? paths10;
    checkMissing(paths11);
    c4 = `is.object`(paths11);
    if c4 then L69() else L70(paths11);
  L7(dx5):
    st mfile = dx5;
    Sys_getenv = ldf `Sys.getenv`;
    check L72() else D14();
  L69():
    dr4 = tryDispatchBuiltin.1("[", paths11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L71() else L70(dr4);
  L70(paths13):
    __1 = ldf `[` in base;
    r29 = dyn __1(paths13, 1);
    goto L7(r29);
  D14():
    deopt 54 [];
  L71():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L72():
    r30 = dyn Sys_getenv("MAKE");
    check L73() else D15();
  D15():
    deopt 56 [r30];
  L73():
    st make = r30;
    make = ld make;
    check L74() else D16();
  D16():
    deopt 58 [make];
  L74():
    make1 = force? make;
    checkMissing(make1);
    r31 = `==`(make1, "");
    c5 = `as.logical`(r31);
    if c5 then L75() else L8();
  L8():
    goto L9();
  L9():
    sprintf = ldf sprintf;
    check L77() else D17();
  L75():
    st make = "make";
    goto L9();
  D17():
    deopt 68 [];
  L77():
    p6 = prom<V +>{
      make2 = ld make;
      make3 = force? make2;
      checkMissing(make3);
      return make3;
    };
    p9 = prom<V +>{
      shQuote = ldf shQuote;
      p8 = prom<V +>{
        file_path2 = ldf `file.path`;
        p7 = prom<V +>{
          R_home = ldf `R.home`;
          r34 = dyn R_home("share");
          return r34;
        };
        r36 = dyn file_path2(p7, "make", "check_vars_ini.mk");
        return r36;
      };
      r38 = dyn shQuote(p8);
      return r38;
    };
    p11 = prom<V +>{
      shQuote1 = ldf shQuote;
      p10 = prom<V +>{
        mfile = ld mfile;
        mfile1 = force? mfile;
        checkMissing(mfile1);
        return mfile1;
      };
      r41 = dyn shQuote1(p10);
      return r41;
    };
    p14 = prom<V +>{
      shQuote2 = ldf shQuote;
      p13 = prom<V +>{
        file_path3 = ldf `file.path`;
        p12 = prom<V +>{
          R_home1 = ldf `R.home`;
          r43 = dyn R_home1("share");
          return r43;
        };
        r45 = dyn file_path3(p12, "make", "check_vars_out.mk");
        return r45;
      };
      r47 = dyn shQuote2(p13);
      return r47;
    };
    r49 = dyn sprintf("%s -f %s -f %s -f %s makevars_test", p6, p9, p11, p14);
    check L78() else D18();
  D18():
    deopt 74 [r49];
  L78():
    st command = r49;
    suppressWarnings = ldf suppressWarnings;
    check L79() else D19();
  D19():
    deopt 77 [];
  L79():
    p18 = prom<V +>{
      tryCatch = ldf tryCatch;
      p16 = prom<V +>{
        system = ldf system;
        p15 = prom<V +>{
          command = ld command;
          command1 = force? command;
          checkMissing(command1);
          return command1;
        };
        r51 = dyn system[, intern, `ignore.stderr`](p15, TRUE, TRUE);
        return r51;
      };
      p17 = prom<V +>{
        identity = ld identity;
        identity1 = force? identity;
        checkMissing(identity1);
        return identity1;
      };
      r54 = dyn tryCatch[, error](p16, p17);
      return r54;
    };
    r56 = dyn suppressWarnings(p18);
    check L80() else D20();
  D20():
    deopt 79 [r56];
  L80():
    st lines = r56;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L81() else L82();
  L10(r58):
    r60 = `!`(r58);
    c6 = `as.logical`(r60);
    if c6 then L11(c6) else L85();
  L81():
    lines = ld lines;
    check L83() else D21();
  L82():
    r57 = dyn base3(<sym lines>);
    goto L10(r57);
  D21():
    deopt 83 [lines];
  L11(c7):
    c15 = `as.logical`(c7);
    if c15 then L91() else L13();
  L83():
    lines1 = force? lines;
    checkMissing(lines1);
    length1 = ldf length in base;
    r59 = dyn length1(lines1);
    check L84() else D22();
  L85():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L86() else L87();
  D22():
    deopt 86 [r59];
  L12(c11, r62):
    c12 = `as.logical`(r62);
    c13 = `||`(c11, c12);
    goto L11(c13);
  L13():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L95() else L96();
  L84():
    goto L10(r59);
  L86():
    lines2 = ld lines;
    check L88() else D23();
  L87():
    r61 = dyn base4(<sym lines>, "error");
    goto L12(c6, r61);
  L91():
    bad_flags2 = ld bad_flags;
    check L92() else D25();
  D23():
    deopt 90 [c6, lines2];
  D25():
    deopt 97 [bad_flags2];
  L15(r67):
    st prefixes = r67;
    sprintf1 = ldf sprintf;
    check L98() else D27();
  L88():
    lines3 = force? lines2;
    checkMissing(lines3);
    inherits = ldf inherits in base;
    r63 = dyn inherits(lines3, "error", FALSE);
    check L89() else D24();
  L92():
    bad_flags3 = force? bad_flags2;
    checkMissing(bad_flags3);
    popenv;
    return bad_flags3;
  L95():
    c16 = ldf c in base;
    r68 = dyn c16("CPP", "C", "CXX", "CXX98", "CXX11", "CXX14", "CXX17", "CXX20", "CXX23", "F", "FC", "OBJC", "OBJCXX");
    check L97() else D26();
  L96():
    r66 = dyn base5("CPP", "C", "CXX", "CXX98", "CXX11", "CXX14", "CXX17", "CXX20", "CXX23", "F", "FC", "OBJC", "OBJCXX");
    goto L15(r66);
  D24():
    deopt 95 [c6, r63];
  D26():
    deopt 118 [r68];
  D27():
    deopt 121 [];
  L89():
    goto L12(c6, r63);
  L97():
    goto L15(r68);
  L98():
    p20 = prom<V +>{
      paste = ldf paste;
      p19 = prom<V +>{
        prefixes = ld prefixes;
        prefixes1 = force? prefixes;
        checkMissing(prefixes1);
        return prefixes1;
      };
      r70 = dyn paste[, collapse](p19, "|");
      return r70;
    };
    r72 = dyn sprintf1("^(%s)FLAGS: *(.*)$", p20);
    check L99() else D28();
  D28():
    deopt 124 [r72];
  L99():
    st uflags_re = r72;
    grep = ldf grep;
    check L100() else D29();
  D29():
    deopt 127 [];
  L100():
    p21 = prom<V +>{
      uflags_re = ld uflags_re;
      uflags_re1 = force? uflags_re;
      checkMissing(uflags_re1);
      return uflags_re1;
    };
    p22 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r75 = dyn grep(p21, p22);
    check L101() else D30();
  D30():
    deopt 130 [r75];
  L101():
    st pos = r75;
    sub = ldf sub;
    check L102() else D31();
  D31():
    deopt 133 [];
  L102():
    p23 = prom<V +>{
      uflags_re2 = ld uflags_re;
      uflags_re3 = force? uflags_re2;
      checkMissing(uflags_re3);
      return uflags_re3;
    };
    p24 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      c17 = `is.object`(lines7);
      if c17 then L1() else L2(lines7);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", lines7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(lines9):
      pos = ld pos;
      pos1 = force? pos;
      __2 = ldf `[` in base;
      r77 = dyn __2(lines9, pos1);
      goto L0(r77);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r79 = dyn sub(p23, "\\2", p24);
    check L103() else D32();
  D32():
    deopt 137 [r79];
  L103():
    r80 = `!=`(r79, "-o /dev/null");
    st ind = r80;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L104() else L105();
  L16(r82):
    c18 = `as.logical`(r82);
    if c18 then L108() else L17();
  L104():
    ind = ld ind;
    check L106() else D33();
  L105():
    r81 = dyn base6(<sym ind>);
    goto L16(r81);
  D33():
    deopt 143 [ind];
  L17():
    goto L20();
  L20():
    sprintf2 = ldf sprintf;
    check L123() else D38();
  L106():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r83 = dyn any(ind1);
    check L107() else D34();
  L108():
    lines10 = ld lines;
    check L109() else D35();
  D34():
    deopt 146 [r83];
  D35():
    deopt 147 [lines10];
  D38():
    deopt 161 [];
  L107():
    goto L16(r83);
  L109():
    lines11 = force? lines10;
    checkMissing(lines11);
    c19 = `is.object`(lines11);
    if c19 then L110() else L111(lines11);
  L123():
    p26 = prom<V +>{
      paste1 = ldf paste;
      p25 = prom<V +>{
        prefixes2 = ld prefixes;
        prefixes3 = force? prefixes2;
        checkMissing(prefixes3);
        return prefixes3;
      };
      r88 = dyn paste1[, collapse](p25, "|");
      return r88;
    };
    r90 = dyn sprintf2("^PKG_(%s)FLAGS: ", p26);
    check L124() else D39();
  D39():
    deopt 164 [r90];
  L18(dx9):
    l4 = ld bad_flags;
    c21 = `is.object`(l4);
    if c21 then L119() else L120(dx9, l4);
  L110():
    dr8 = tryDispatchBuiltin.1("[", lines11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L112() else L111(dr8);
  L111(lines13):
    pos2 = ld pos;
    check L113() else D36();
  L124():
    st pflags_re = r90;
    lines18 = ld lines;
    check L125() else D40();
  D36():
    deopt 149 [lines13, pos2];
  D40():
    deopt 166 [lines18];
  L112():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L18(dx8);
  L113():
    pos3 = force? pos2;
    checkMissing(pos3);
    c20 = `is.object`(pos3);
    if c20 then L114() else L115(lines13, pos3);
  L118(dx16, dx17):
    st bad_flags = dx17;
    goto L20();
  L119():
    dr12 = tryDispatchBuiltin.0("$<-", l4, dx9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L121() else L120(dx9, dr12);
  L120(dx13, l6):
    r86 = `$<-`(l6, <sym uflags>, dx9);
    goto L118(dx13, r86);
  L125():
    lines19 = force? lines18;
    checkMissing(lines19);
    c22 = `is.object`(lines19);
    if c22 then L126() else L127(lines19);
  L19(lines17, dx11):
    __4 = ldf `[` in base;
    r85 = dyn __4(lines17, dx11);
    goto L18(r85);
  L21(dx20):
    st lines = dx20;
    sub1 = ldf sub;
    check L131() else D43();
  L114():
    dr10 = tryDispatchBuiltin.1("[", pos3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L116() else L115(lines13, dr10);
  L115(lines15, pos5):
    ind2 = ld ind;
    check L117() else D37();
  L121():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L118(dx9, dx15);
  L126():
    dr14 = tryDispatchBuiltin.1("[", lines19);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L128() else L127(dr14);
  L127(lines21):
    grepl = ldf grepl;
    check L129() else D41();
  D37():
    deopt 151 [lines15, pos5, ind2];
  D41():
    deopt 169 [lines21];
  D43():
    deopt 176 [];
  L116():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L19(lines13, dx10);
  L117():
    ind3 = force? ind2;
    __3 = ldf `[` in base;
    r84 = dyn __3(pos5, ind3);
    goto L19(lines15, r84);
  L128():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L21(dx19);
  L129():
    p27 = prom<V +>{
      pflags_re = ld pflags_re;
      pflags_re1 = force? pflags_re;
      checkMissing(pflags_re1);
      return pflags_re1;
    };
    p28 = prom<V +>{
      lines22 = ld lines;
      lines23 = force? lines22;
      checkMissing(lines23);
      return lines23;
    };
    r93 = dyn grepl(p27, p28);
    check L130() else D42();
  L131():
    p29 = prom<V +>{
      lines24 = ld lines;
      lines25 = force? lines24;
      checkMissing(lines25);
      return lines25;
    };
    r96 = dyn sub1(":.*", "", p29);
    check L132() else D44();
  D42():
    deopt 172 [lines21, r93];
  D44():
    deopt 180 [r96];
  L130():
    __5 = ldf `[` in base;
    r94 = dyn __5(lines21, r93);
    goto L21(r94);
  L132():
    st names = r96;
    sub2 = ldf sub;
    check L133() else D45();
  D45():
    deopt 183 [];
  L133():
    p30 = prom<V +>{
      pflags_re2 = ld pflags_re;
      pflags_re3 = force? pflags_re2;
      checkMissing(pflags_re3);
      return pflags_re3;
    };
    p31 = prom<V +>{
      lines26 = ld lines;
      lines27 = force? lines26;
      checkMissing(lines27);
      return lines27;
    };
    r99 = dyn sub2(p30, "", p31);
    check L134() else D46();
  D46():
    deopt 187 [r99];
  L134():
    st lines = r99;
    strsplit = ldf strsplit;
    check L135() else D47();
  D47():
    deopt 190 [];
  L135():
    p32 = prom<V +>{
      lines28 = ld lines;
      lines29 = force? lines28;
      checkMissing(lines29);
      return lines29;
    };
    r101 = dyn strsplit(p32, "[[:space:]]+");
    check L136() else D48();
  D48():
    deopt 193 [r101];
  L136():
    st flags = r101;
    sprintf3 = ldf sprintf;
    check L137() else D49();
  D49():
    deopt 196 [];
  L137():
    p34 = prom<V +>{
      paste2 = ldf paste;
      p33 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r103):
        return r103;
      L1():
        c23 = ldf c in base;
        r104 = dyn c23("O.*", "W", "w", "W[^l].*", "ansi", "pedantic", "traditional", "f.*", "m.*", "std.*", "isystem", "x", "pipe", "cpp", "g", "q");
        goto L0(r104);
      L2():
        r102 = dyn base7("O.*", "W", "w", "W[^l].*", "ansi", "pedantic", "traditional", "f.*", "m.*", "std.*", "isystem", "x", "pipe", "cpp", "g", "q");
        goto L0(r102);
      };
      r106 = dyn paste2[, collapse](p33, "|");
      return r106;
    };
    r108 = dyn sprintf3("^-(%s)$", p34);
    check L138() else D50();
  D50():
    deopt 199 [r108];
  L138():
    st bad_flags_regexp = r108;
    sym8 = ldf seq_along;
    base8 = ldf seq_along in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L139() else L140();
  L22(r110):
    s = toForSeq(r110);
    l7 = length(s);
    i = 0;
    goto L23(i);
  L139():
    lines30 = ld lines;
    check L141() else D51();
  L140():
    r109 = dyn base8(<sym lines>);
    goto L22(r109);
  D51():
    deopt 202 [lines30];
  L23(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l7, i2);
    if c24 then L142() else L30();
  L141():
    lines31 = force? lines30;
    checkMissing(lines31);
    r111 = seq_along(lines31);
    goto L22(r111);
  L30():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    grep1 = ldf grep;
    check L143() else D52();
  L142():
    paths14 = ld paths;
    check L171() else D64();
  D52():
    deopt 206 [i2];
  D64():
    deopt 257 [paths14];
  L143():
    p35 = prom<V +>{
      bad_flags_regexp = ld bad_flags_regexp;
      bad_flags_regexp1 = force? bad_flags_regexp;
      checkMissing(bad_flags_regexp1);
      return bad_flags_regexp1;
    };
    p36 = prom<V +>{
      flags = ld flags;
      flags1 = force? flags;
      checkMissing(flags1);
      c25 = `is.object`(flags1);
      if c25 then L1() else L2(flags1);
    L0(dx22):
      return dx22;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", flags1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(flags3):
      i5 = ld i;
      i6 = force? i5;
      __6 = ldf `[[` in base;
      r113 = dyn __6(flags3, i6);
      goto L0(r113);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx21);
    };
    r115 = dyn grep1[, , value](p35, p36, TRUE);
    check L144() else D53();
  L171():
    paths15 = force? paths14;
    checkMissing(paths15);
    s1 = toForSeq(paths15);
    l11 = length(s1);
    i31 = 0;
    goto L31(i31);
  D53():
    deopt 211 [i2, r115];
  L31(i32):
    i33 = `+`.1(i32, 1);
    c34 = `<`.1(l11, i33);
    if c34 then L172() else L40();
  L144():
    st bad = r115;
    _in_ = ldf `%in%`;
    check L145() else D54();
  D54():
    deopt 214 [i2];
  L40():
    x1 = `[[`(s1, i33, NULL, TRUE);
    st f = x1;
    readLines = ldf readLines;
    check L173() else D65();
  L145():
    p37 = prom<V +>{
      names = ld names;
      names1 = force? names;
      checkMissing(names1);
      c26 = `is.object`(names1);
      if c26 then L1() else L2(names1);
    L0(dx24):
      return dx24;
    L1():
      dr18 = tryDispatchBuiltin.1("[", names1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(names3):
      i7 = ld i;
      i8 = force? i7;
      __7 = ldf `[` in base;
      r116 = dyn __7(names3, i8);
      goto L0(r116);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx23);
    };
    p38 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r119):
      return r119;
    L1():
      c27 = ldf c in base;
      r120 = dyn c27("PKG_FFLAGS", "PKG_FCFLAGS");
      goto L0(r120);
    L2():
      r118 = dyn base9("PKG_FFLAGS", "PKG_FCFLAGS");
      goto L0(r118);
    };
    r122 = dyn _in_(p37, p38);
    check L146() else D55();
  L172():
    bad_flags12 = ld bad_flags;
    check L215() else D88();
  D55():
    deopt 217 [i2, r122];
  D65():
    deopt 260 [i33];
  D88():
    deopt 345 [bad_flags12];
  L146():
    c28 = `as.logical`(r122);
    if c28 then L147() else L24();
  L173():
    p42 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r147 = dyn readLines[, warn](p42, FALSE);
    check L174() else D66();
  L215():
    bad_flags13 = force? bad_flags12;
    checkMissing(bad_flags13);
    popenv;
    return bad_flags13;
  D66():
    deopt 264 [i33, r147];
  L24():
    goto L25(i2);
  L25(i11):
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L151() else L152();
  L147():
    grep2 = ldf grep;
    check L148() else D56();
  L174():
    st lines = r147;
    sprintf4 = ldf sprintf;
    check L175() else D67();
  D56():
    deopt 219 [i2];
  D67():
    deopt 267 [i33];
  L26(i14, r127):
    c29 = `as.logical`(r127);
    if c29 then L155() else L27();
  L148():
    p39 = prom<V +>{
      bad = ld bad;
      bad1 = force? bad;
      checkMissing(bad1);
      return bad1;
    };
    r124 = dyn grep2[, , invert, value]("^-std=f", p39, TRUE, TRUE);
    check L149() else D57();
  L151():
    bad2 = ld bad;
    check L153() else D58();
  L152():
    r126 = dyn base10(<sym bad>);
    goto L26(i11, r126);
  L175():
    p44 = prom<V +>{
      paste3 = ldf paste;
      p43 = prom<V +>{
        prefixes4 = ld prefixes;
        prefixes5 = force? prefixes4;
        checkMissing(prefixes5);
        return prefixes5;
      };
      r149 = dyn paste3[, collapse](p43, "|");
      return r149;
    };
    r151 = dyn sprintf4(".*[.o]: +PKG_(%s)FLAGS *=", p44);
    check L176() else D68();
  D57():
    deopt 226 [i2, r124];
  D58():
    deopt 232 [i11, bad2];
  D68():
    deopt 270 [i33, r151];
  L27():
    goto L29(i14);
  L29(i30):
    goto L23(i30);
  L149():
    st bad = r124;
    goto L25(i2);
  L153():
    bad3 = force? bad2;
    checkMissing(bad3);
    length2 = ldf length in base;
    r128 = dyn length2(bad3);
    check L154() else D59();
  L155():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L156() else L157();
  L176():
    st pflags_re2 = r151;
    grep3 = ldf grep;
    check L177() else D69();
  D59():
    deopt 235 [i11, r128];
  D69():
    deopt 273 [i33];
  L28(i19, r130):
    l8 = ld bad_flags;
    c33 = `is.object`(l8);
    if c33 then L167() else L168(i19, r130, l8);
  L154():
    goto L26(i11, r128);
  L156():
    bad_flags4 = ld bad_flags;
    check L158() else D60();
  L157():
    r129 = dyn base11(<lang `$`(bad_flags, pflags)>, <lang structure(list(bad), names=`[`(names, i))>);
    goto L28(i14, r129);
  L177():
    p45 = prom<V +>{
      pflags_re4 = ld pflags_re2;
      pflags_re5 = force? pflags_re4;
      checkMissing(pflags_re5);
      return pflags_re5;
    };
    p46 = prom<V +>{
      lines32 = ld lines;
      lines33 = force? lines32;
      checkMissing(lines33);
      return lines33;
    };
    r154 = dyn grep3[, , value](p45, p46, TRUE);
    check L178() else D70();
  D60():
    deopt 238 [i14, bad_flags4];
  D70():
    deopt 278 [i33, r154];
  L158():
    bad_flags5 = force? bad_flags4;
    checkMissing(bad_flags5);
    c30 = `is.object`(bad_flags5);
    if c30 then L160() else L161(i14, bad_flags5);
  L166(i29, r143, dx30):
    st bad_flags = dx30;
    goto L29(i29);
  L167():
    dr24 = tryDispatchBuiltin.0("$<-", l8, r130);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L169() else L168(i19, r130, dr24);
  L168(i27, r141, l10):
    r144 = `$<-`(l10, <sym pflags>, r130);
    goto L166(i27, r141, r144);
  L178():
    st lines = r154;
    sub3 = ldf sub;
    check L179() else D71();
  D71():
    deopt 281 [i33];
  L159(i23, dx26):
    structure = ldf structure;
    check L163() else D61();
  L160():
    dr20 = tryDispatchBuiltin.1("$", bad_flags5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L162() else L161(i14, dr20);
  L161(i21, bad_flags7):
    r131 = `$`(bad_flags7, <sym pflags>);
    goto L159(i21, r131);
  L169():
    dx29 = getTryDispatchBuiltinValue(dr24);
    goto L166(i19, r130, dx29);
  L179():
    p47 = prom<V +>{
      pflags_re6 = ld pflags_re2;
      pflags_re7 = force? pflags_re6;
      checkMissing(pflags_re7);
      return pflags_re7;
    };
    p48 = prom<V +>{
      lines34 = ld lines;
      lines35 = force? lines34;
      checkMissing(lines35);
      return lines35;
    };
    r157 = dyn sub3(p47, "", p48);
    check L180() else D72();
  D61():
    deopt 242 [i23];
  D72():
    deopt 285 [i33, r157];
  L162():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L159(i14, dx25);
  L163():
    p40 = prom<V +>{
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r133):
      return r133;
    L1():
      bad4 = ld bad;
      bad5 = force? bad4;
      checkMissing(bad5);
      list1 = ldf list in base;
      r134 = dyn list1(bad5);
      goto L0(r134);
    L2():
      r132 = dyn base12(<sym bad>);
      goto L0(r132);
    };
    p41 = prom<V +>{
      names4 = ld names;
      names5 = force? names4;
      checkMissing(names5);
      c31 = `is.object`(names5);
      if c31 then L1() else L2(names5);
    L0(dx28):
      return dx28;
    L1():
      dr22 = tryDispatchBuiltin.1("[", names5);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(names7):
      i24 = ld i;
      i25 = force? i24;
      __8 = ldf `[` in base;
      r136 = dyn __8(names7, i25);
      goto L0(r136);
    L3():
      dx27 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx27);
    };
    r138 = dyn structure[, names](p40, p41);
    check L164() else D62();
  L180():
    st lines = r157;
    strsplit1 = ldf strsplit;
    check L181() else D73();
  D62():
    deopt 246 [i23, r138];
  D73():
    deopt 288 [i33];
  L164():
    c32 = ldf c in base;
    r139 = dyn c32(dx26, r138);
    check L165() else D63();
  L181():
    p49 = prom<V +>{
      lines36 = ld lines;
      lines37 = force? lines36;
      checkMissing(lines37);
      return lines37;
    };
    r159 = dyn strsplit1(p49, "[[:space:]]+");
    check L182() else D74();
  D63():
    deopt 248 [i23, r139];
  D74():
    deopt 291 [i33, r159];
  L165():
    goto L28(i23, r139);
  L182():
    st flags = r159;
    character = ldf character;
    check L183() else D75();
  D75():
    deopt 294 [i33];
  L183():
    r160 = dyn character();
    check L184() else D76();
  D76():
    deopt 295 [i33, r160];
  L184():
    st bad = r160;
    sym13 = ldf seq_along;
    base13 = ldf seq_along in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L185() else L186();
  L32(i38, r162):
    s2 = toForSeq(r162);
    l12 = length(s2);
    i39 = 0;
    goto L33(i38, i39);
  L185():
    lines38 = ld lines;
    check L187() else D77();
  L186():
    r161 = dyn base13(<sym lines>);
    goto L32(i33, r161);
  D77():
    deopt 298 [i33, lines38];
  L33(i40, i41):
    i42 = `+`.1(i41, 1);
    c35 = `<`.1(l12, i42);
    if c35 then L188() else L35();
  L187():
    lines39 = force? lines38;
    checkMissing(lines39);
    r163 = seq_along(lines39);
    goto L32(i33, r163);
  L35():
    x2 = `[[`(s2, i42, NULL, TRUE);
    st i = x2;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L189() else L190();
  L188():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L195() else L196();
  L34(i51, i52, r165):
    st bad = r165;
    goto L33(i51, i52);
  L36(i57, r172):
    c38 = `as.logical`(r172);
    if c38 then L199() else L37();
  L189():
    bad6 = ld bad;
    check L191() else D78();
  L190():
    r164 = dyn base14(<sym bad>, <lang grep(bad_flags_regexp, `[[`(flags, i), value=TRUE)>);
    goto L34(i40, i42, r164);
  L195():
    bad8 = ld bad;
    check L197() else D82();
  L196():
    r171 = dyn base15(<sym bad>);
    goto L36(i40, r171);
  D78():
    deopt 303 [i40, i42, bad6];
  D82():
    deopt 320 [i40, bad8];
  L37():
    goto L39(i57);
  L39(i71):
    goto L31(i71);
  L191():
    bad7 = force? bad6;
    checkMissing(bad7);
    grep4 = ldf grep;
    check L192() else D79();
  L197():
    bad9 = force? bad8;
    checkMissing(bad9);
    length3 = ldf length in base;
    r173 = dyn length3(bad9);
    check L198() else D83();
  L199():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L200() else L201();
  D79():
    deopt 306 [i40, i42];
  D83():
    deopt 323 [i40, r173];
  L38(i62, r175):
    l13 = ld bad_flags;
    c41 = `is.object`(l13);
    if c41 then L211() else L212(i62, r175, l13);
  L192():
    p50 = prom<V +>{
      bad_flags_regexp2 = ld bad_flags_regexp;
      bad_flags_regexp3 = force? bad_flags_regexp2;
      checkMissing(bad_flags_regexp3);
      return bad_flags_regexp3;
    };
    p51 = prom<V +>{
      flags4 = ld flags;
      flags5 = force? flags4;
      checkMissing(flags5);
      c36 = `is.object`(flags5);
      if c36 then L1() else L2(flags5);
    L0(dx32):
      return dx32;
    L1():
      dr26 = tryDispatchBuiltin.1("[[", flags5);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(flags7):
      i53 = ld i;
      i54 = force? i53;
      __9 = ldf `[[` in base;
      r167 = dyn __9(flags7, i54);
      goto L0(r167);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx31);
    };
    r169 = dyn grep4[, , value](p50, p51, TRUE);
    check L193() else D80();
  L198():
    goto L36(i40, r173);
  L200():
    bad_flags8 = ld bad_flags;
    check L202() else D84();
  L201():
    r174 = dyn base16(<lang `$`(bad_flags, p2flags)>, <lang structure(list(bad), names=file.path("src", basename(f)))>);
    goto L38(i57, r174);
  D80():
    deopt 311 [i40, i42, r169];
  D84():
    deopt 326 [i57, bad_flags8];
  L193():
    c37 = ldf c in base;
    r170 = dyn c37(bad7, r169);
    check L194() else D81();
  L202():
    bad_flags9 = force? bad_flags8;
    checkMissing(bad_flags9);
    c39 = `is.object`(bad_flags9);
    if c39 then L204() else L205(i57, bad_flags9);
  L210(i70, r191, dx36):
    st bad_flags = dx36;
    goto L39(i70);
  L211():
    dr30 = tryDispatchBuiltin.0("$<-", l13, r175);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L213() else L212(i62, r175, dr30);
  L212(i68, r189, l15):
    r192 = `$<-`(l15, <sym p2flags>, r175);
    goto L210(i68, r189, r192);
  D81():
    deopt 313 [i40, i42, r170];
  L194():
    goto L34(i40, i42, r170);
  L203(i66, dx34):
    structure1 = ldf structure;
    check L207() else D85();
  L204():
    dr28 = tryDispatchBuiltin.1("$", bad_flags9);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L206() else L205(i57, dr28);
  L205(i64, bad_flags11):
    r176 = `$`(bad_flags11, <sym p2flags>);
    goto L203(i64, r176);
  L213():
    dx35 = getTryDispatchBuiltinValue(dr30);
    goto L210(i62, r175, dx35);
  D85():
    deopt 330 [i66];
  L206():
    dx33 = getTryDispatchBuiltinValue(dr28);
    goto L203(i57, dx33);
  L207():
    p52 = prom<V +>{
      sym17 = ldf list;
      base17 = ldf list in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r178):
      return r178;
    L1():
      bad10 = ld bad;
      bad11 = force? bad10;
      checkMissing(bad11);
      list2 = ldf list in base;
      r179 = dyn list2(bad11);
      goto L0(r179);
    L2():
      r177 = dyn base17(<sym bad>);
      goto L0(r177);
    };
    p55 = prom<V +>{
      file_path4 = ldf `file.path`;
      p54 = prom<V +>{
        basename1 = ldf basename;
        p53 = prom<V +>{
          f2 = ld f;
          f3 = force? f2;
          checkMissing(f3);
          return f3;
        };
        r182 = dyn basename1(p53);
        return r182;
      };
      r184 = dyn file_path4("src", p54);
      return r184;
    };
    r186 = dyn structure1[, names](p52, p55);
    check L208() else D86();
  D86():
    deopt 334 [i66, r186];
  L208():
    c40 = ldf c in base;
    r187 = dyn c40(dx34, r186);
    check L209() else D87();
  D87():
    deopt 336 [i66, r187];
  L209():
    goto L38(i66, r187);
  }
}