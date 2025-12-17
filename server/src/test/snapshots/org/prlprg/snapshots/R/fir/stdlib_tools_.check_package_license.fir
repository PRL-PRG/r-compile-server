fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2268648857;
    st `.check_package_license` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2268648857(dfile, dir) {
  (reg dfile:*, reg dir:*) -+> V { var dfile:*, var dir:*, reg file_path_as_absolute:cls, reg dfile1:*, reg dfile2:V, reg p:p(V +), reg r1:V, reg _read_description:cls, reg dfile3:*, reg dfile4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c:L, reg dirname:cls, reg dfile5:*, reg dfile6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg list:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg db:*, reg db1:V, reg c1:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg is_na:cls, reg r16:V, reg r17:V, reg c2:L, reg analyze_license:cls, reg val:*, reg val1:V, reg p3:p(V +), reg r19:V, reg status:*, reg status1:V, reg c3:L, reg status3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg status4:*, reg status5:V, reg c4:L, reg status7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r23:V, reg length:cls, reg r24:V, reg c5:L, reg pointers:*, reg pointers1:V, reg c6:L, reg pointers3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg file_test:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p4:p(V +), reg pointers4:*, reg pointers5:V, reg p5:p(V +), reg r27:V, reg p6:p(V +), reg r29:V, reg r30:V, reg __1:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg bad_pointers:*, reg bad_pointers1:V, reg length1:cls, reg r34:V, reg c7:L, reg bad_pointers2:*, reg bad_pointers3:V, reg l:*, reg c8:L, reg bad_pointers5:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r35:V, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg grepl:cls, reg patt:*, reg patt1:V, reg p7:p(V +), reg status8:*, reg status9:V, reg c9:L, reg status11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r41:V, reg p8:p(V +), reg r43:V, reg any:cls, reg r44:V, reg c10:L, reg status12:*, reg status13:V, reg c11:L, reg status15:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r45:V, reg c12:L, reg dx15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg ind:*, reg ind1:V, reg __2:cls, reg r46:V, reg l3:*, reg c13:L, reg dx19:V, reg l5:*, reg dr16:V, reg dc8:L, reg dx21:V, reg dx23:V, reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg status16:*, reg status17:V, reg c14:L, reg status19:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r51:V, reg length2:cls, reg r52:V, reg c15:L, reg c17:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg c20:L, reg r54:V, reg extensions:*, reg extensions1:V, reg c21:L, reg c23:L, reg extensions3:V, reg dr20:V, reg dc10:L, reg dx26:V, reg c25:L, reg dx27:V, reg r55:V, reg r56:V, reg any1:cls, reg r57:V, reg c26:L, reg c27:V, reg c29:L, reg extensions4:*, reg extensions5:V, reg c30:L, reg extensions7:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg r58:V, reg c31:L, reg dx31:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg ind2:*, reg ind3:V, reg __3:cls, reg r59:V, reg l6:*, reg c32:L, reg dx35:V, reg l8:*, reg dr26:V, reg dc13:L, reg dx37:V, reg dx39:V, reg r60:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg _in_:cls, reg status20:*, reg status21:V, reg c33:L, reg status23:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg r64:V, reg p9:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg r67:V, reg c34:cls, reg r68:V, reg p10:p(V +), reg r70:V, reg any2:cls, reg r71:V, reg c35:L, reg status24:*, reg status25:V, reg c36:L, reg status27:V, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg r72:V, reg c37:L, reg dx45:V, reg dr32:V, reg dc16:L, reg dx46:V, reg dx47:V, reg ind4:*, reg ind5:V, reg __4:cls, reg r73:V, reg l9:*, reg c38:L, reg dx49:V, reg l11:*, reg dr34:V, reg dc17:L, reg dx51:V, reg dx53:V, reg r74:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r76:V, reg r77:V, reg status28:*, reg status29:V, reg c39:L, reg status31:V, reg dr36:V, reg dc18:L, reg dx54:V, reg dx55:V, reg r78:V, reg length3:cls, reg r79:V, reg c40:L, reg extensions8:*, reg extensions9:V, reg c41:L, reg extensions11:V, reg dr38:V, reg dc19:L, reg dx56:V, reg dx57:V, reg r80:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r81:V, reg r82:V, reg grepl1:cls, reg components:*, reg components1:V, reg p11:p(V +), reg r84:V, reg any3:cls, reg r85:V, reg c42:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r86:V, reg r87:V, reg c43:cls, reg r88:V, reg r89:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r90:V, reg r91:V, reg grepl2:cls, reg components2:*, reg components3:V, reg p12:p(V +), reg r93:V, reg any4:cls, reg r94:V, reg c44:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r95:V, reg r96:V, reg c45:cls, reg r97:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r98:V, reg r99:V, reg nms:*, reg nms1:V, reg c46:V, reg r100:V, reg c47:L, reg c49:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r101:V, reg c52:L, reg r102:V, reg status32:*, reg status33:V, reg c53:L, reg c55:L, reg status35:V, reg dr40:V, reg dc20:L, reg dx58:V, reg c57:L, reg dx59:V, reg r103:V, reg length4:cls, reg r104:V, reg c58:L, reg c59:V, reg c61:L, reg c63:V, reg file_test1:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p13:p(V +), reg pointers6:*, reg pointers7:V, reg c64:L, reg pointers9:V, reg dr42:V, reg dc21:L, reg dx60:V, reg dx61:V, reg __5:cls, reg r106:V, reg p14:p(V +), reg r108:V, reg p15:p(V +), reg r110:V, reg c65:L, reg c66:V, reg c68:L, reg tryCatch:cls, reg read_dcf:cls, reg file_path2:cls, reg dir5:*, reg dir6:V, reg p16:p(V +), reg pointers10:*, reg pointers11:V, reg c69:L, reg pointers13:V, reg dr44:V, reg dc22:L, reg dx62:V, reg dx63:V, reg __6:cls, reg r112:V, reg p17:p(V +), reg r114:V, reg p18:p(V +), reg nms2:*, reg nms3:V, reg p19:p(V +), reg r117:V, reg p20:p(V +), reg identity:*, reg identity1:V, reg p21:p(V +), reg r120:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r121:V, reg r122:V, reg val2:*, reg val3:V, reg inherits:cls, reg r123:V, reg c70:L, reg l12:*, reg c71:L, reg r125:L, reg l14:*, reg dr46:V, reg dc23:L, reg dx64:V, reg dx65:V, reg r128:V, reg r129:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r130:V, reg r131:V, reg val4:*, reg val5:V, reg is_na1:cls, reg r132:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r135:V, reg r136:V, reg r137:V, reg val6:*, reg val7:V, reg nzchar:cls, reg r138:V, reg r139:V, reg r140:V, reg which:cls, reg rowSums:cls, reg ind6:*, reg ind7:V, reg p22:p(V +), reg r142:V, reg r143:V, reg p23:p(V +), reg r145:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r146:V, reg r147:V, reg pos:*, reg pos1:V, reg length5:cls, reg r148:V, reg c72:L, reg gettextf:cls, reg pos2:*, reg pos3:V, reg p24:p(V +), reg vapply:cls, reg pos4:*, reg pos5:V, reg p25:p(V +), reg r151:cls, reg p26:p(V +), reg r153:V, reg p27:p(V +), reg r155:V, reg l15:*, reg c73:L, reg r157:V, reg l17:*, reg dr48:V, reg dc24:L, reg dx66:V, reg dx67:V, reg r160:V, reg r161:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r163:V, reg r164:V, reg _in_1:cls, reg status36:*, reg status37:V, reg c74:L, reg status39:V, reg dr50:V, reg dc25:L, reg dx68:V, reg dx69:V, reg r165:V, reg p28:p(V +), reg r167:V, reg any5:cls, reg r168:V, reg c75:L, reg c77:V, reg _in_2:cls, reg db4:*, reg db5:V, reg c78:L, reg db7:V, reg dr52:V, reg dc26:L, reg dx70:V, reg dx71:V, reg __7:cls, reg r169:V, reg p29:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r171:V, reg r172:V, reg c79:cls, reg r173:V, reg p30:p(V +), reg r175:V, reg r176:V, reg c80:L, reg c81:V, reg c83:L, reg status40:*, reg status41:V, reg c84:L, reg status43:V, reg dr54:V, reg dc27:L, reg dx72:V, reg dx73:V, reg r177:V, reg c85:L, reg dx75:V, reg dr56:V, reg dc28:L, reg dx76:V, reg dx77:V, reg ind8:*, reg ind9:V, reg __8:cls, reg r178:V, reg l18:*, reg c86:L, reg dx79:V, reg l20:*, reg dr58:V, reg dc29:L, reg dx81:V, reg dx83:V, reg r179:V, reg ok:*, reg ok1:V, reg r181:V, reg c87:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r182:V, reg r183:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r184:V, reg r185:V, reg val8:*, reg val9:V, reg list1:cls, reg r186:V, reg status44:*, reg status45:V, reg c88:cls, reg r187:V, reg r188:V, reg l21:*, reg class__:cls, reg r190:V, reg out:*, reg out1:V |
    mkenv;
    st dfile = dfile;
    st dir = dir;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L61() else D0();
  D0():
    deopt 1 [];
  L61():
    p = prom<V +>{
      dfile1 = ld dfile;
      dfile2 = force? dfile1;
      checkMissing(dfile2);
      return dfile2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L62() else D1();
  D1():
    deopt 3 [r1];
  L62():
    st dfile = r1;
    _read_description = ldf `.read_description`;
    check L63() else D2();
  D2():
    deopt 6 [];
  L63():
    p1 = prom<V +>{
      dfile3 = ld dfile;
      dfile4 = force? dfile3;
      checkMissing(dfile4);
      return dfile4;
    };
    r3 = dyn _read_description(p1);
    check L64() else D3();
  D3():
    deopt 8 [r3];
  L64():
    st db = r3;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L65() else L66();
  L0(r5):
    c = `as.logical`(r5);
    if c then L67() else L1();
  L65():
    missing = ldf missing in base;
    r6 = dyn missing(<sym dir>);
    goto L0(r6);
  L66():
    r4 = dyn base(<sym dir>);
    goto L0(r4);
  L1():
    goto L2();
  L2():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L71() else L72();
  L67():
    dirname = ldf dirname;
    check L68() else D4();
  D4():
    deopt 14 [];
  L3(r11):
    st out = r11;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L74() else L75();
  L68():
    p2 = prom<V +>{
      dfile5 = ld dfile;
      dfile6 = force? dfile5;
      checkMissing(dfile6);
      return dfile6;
    };
    r8 = dyn dirname(p2);
    check L69() else D5();
  L71():
    list = ldf list in base;
    r12 = dyn list();
    check L73() else D6();
  L72():
    r10 = dyn base1();
    goto L3(r10);
  D5():
    deopt 16 [r8];
  D6():
    deopt 23 [r12];
  L4(r14):
    r17 = `!`(r14);
    c2 = `as.logical`(r17);
    if c2 then L81() else L6();
  L69():
    st dir = r8;
    goto L2();
  L73():
    goto L3(r12);
  L74():
    db = ld db;
    check L76() else D7();
  L75():
    r13 = dyn base2(<lang `<-`(val, `[`(db, "License"))>);
    goto L4(r13);
  D7():
    deopt 27 [db];
  L6():
    goto L60();
  L60():
    l21 = ld out;
    class__ = ldf `class<-`;
    check L313() else D78();
  L76():
    db1 = force? db;
    checkMissing(db1);
    c1 = `is.object`(db1);
    if c1 then L77() else L78(db1);
  L81():
    analyze_license = ldf analyze_license;
    check L82() else D9();
  D9():
    deopt 37 [];
  D78():
    deopt 351 ["check_package_license", l21, "check_package_license"];
  L5(dx1):
    st val = dx1;
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(dx1);
    check L80() else D8();
  L77():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L79() else L78(dr);
  L78(db3):
    __ = ldf `[` in base;
    r15 = dyn __(db3, "License");
    goto L5(r15);
  L82():
    p3 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    r19 = dyn analyze_license(p3);
    check L83() else D10();
  L313():
    r190 = dyn class__(l21, NULL, "check_package_license");
    check L314() else D79();
  D8():
    deopt 34 [r16];
  D10():
    deopt 39 [r19];
  D79():
    deopt 353 ["check_package_license", r190];
  L79():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L80():
    goto L4(r16);
  L83():
    st status = r19;
    status = ld status;
    check L84() else D11();
  L314():
    st out = r190;
    out = ld out;
    check L315() else D80();
  D11():
    deopt 41 [status];
  D80():
    deopt 355 [out];
  L84():
    status1 = force? status;
    checkMissing(status1);
    c3 = `is.object`(status1);
    if c3 then L86() else L87(status1);
  L315():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  L85(dx3):
    st ok = dx3;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L89() else L90();
  L86():
    dr2 = tryDispatchBuiltin.1("$", status1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L88() else L87(dr2);
  L87(status3):
    r20 = `$`(status3, <sym is_canonical>);
    goto L85(r20);
  L7(r22):
    c5 = `as.logical`(r22);
    if c5 then L97() else L8();
  L88():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L85(dx2);
  L89():
    status4 = ld status;
    check L91() else D12();
  L90():
    r21 = dyn base3(<lang `<-`(pointers, `$`(status, pointers))>);
    goto L7(r21);
  D12():
    deopt 47 [status4];
  L8():
    goto L13();
  L13():
    st patt = "(^Modified BSD License$|^BSD$|^CC BY.* [23][.]0)";
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L116() else L117();
  L91():
    status5 = force? status4;
    checkMissing(status5);
    c4 = `is.object`(status5);
    if c4 then L93() else L94(status5);
  L97():
    pointers = ld pointers;
    check L98() else D14();
  D14():
    deopt 53 [pointers];
  L14(r39):
    c10 = `as.logical`(r39);
    if c10 then L121() else L15();
  L92(dx5):
    st pointers = dx5;
    length = ldf length in base;
    r24 = dyn length(dx5);
    check L96() else D13();
  L93():
    dr4 = tryDispatchBuiltin.1("$", status5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L95() else L94(dr4);
  L94(status7):
    r23 = `$`(status7, <sym pointers>);
    goto L92(r23);
  L98():
    pointers1 = force? pointers;
    checkMissing(pointers1);
    c6 = `is.object`(pointers1);
    if c6 then L99() else L100(pointers1);
  L116():
    grepl = ldf grepl;
    check L118() else D20();
  L117():
    r38 = dyn base5(<lang `<-`(ind, grepl(patt, `$`(status, components)))>);
    goto L14(r38);
  D13():
    deopt 52 [r24];
  D20():
    deopt 87 [];
  L9(dx7):
    st bad_pointers = dx7;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L104() else L105();
  L15():
    goto L17();
  L17():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L136() else L137();
  L95():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L92(dx4);
  L96():
    goto L7(r24);
  L99():
    dr6 = tryDispatchBuiltin.1("[", pointers1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L101() else L100(dr6);
  L100(pointers3):
    file_test = ldf file_test;
    check L102() else D15();
  L118():
    p7 = prom<V +>{
      patt = ld patt;
      patt1 = force? patt;
      checkMissing(patt1);
      return patt1;
    };
    p8 = prom<V +>{
      status8 = ld status;
      status9 = force? status8;
      checkMissing(status9);
      c9 = `is.object`(status9);
      if c9 then L1() else L2(status9);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", status9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(status11):
      r41 = `$`(status11, <sym components>);
      goto L0(r41);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r43 = dyn grepl(p7, p8);
    check L119() else D21();
  L121():
    status12 = ld status;
    check L122() else D23();
  D15():
    deopt 56 [pointers3];
  D21():
    deopt 90 [r43];
  D23():
    deopt 94 [status12];
  L10(r33):
    c7 = `as.logical`(r33);
    if c7 then L108() else L11();
  L18(r50):
    c15 = `as.logical`(r50);
    if c15 then L144() else L19(c15);
  L101():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx6);
  L102():
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p4 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      p5 = prom<V +>{
        pointers4 = ld pointers;
        pointers5 = force? pointers4;
        checkMissing(pointers5);
        return pointers5;
      };
      r27 = dyn file_path(p4, p5);
      return r27;
    };
    r29 = dyn file_test("-f", p6);
    check L103() else D16();
  L104():
    bad_pointers = ld bad_pointers;
    check L106() else D17();
  L105():
    r32 = dyn base4(<sym bad_pointers>);
    goto L10(r32);
  L119():
    st ind = r43;
    any = ldf any in base;
    r44 = dyn any(r43);
    check L120() else D22();
  L122():
    status13 = force? status12;
    checkMissing(status13);
    c11 = `is.object`(status13);
    if c11 then L124() else L125(status13);
  L136():
    status16 = ld status;
    check L138() else D25();
  L137():
    r49 = dyn base6(<lang `<-`(extensions, `$`(status, extensions))>);
    goto L18(r49);
  D16():
    deopt 59 [pointers3, r29];
  D17():
    deopt 65 [bad_pointers];
  D22():
    deopt 93 [r44];
  D25():
    deopt 110 [status16];
  L11():
    goto L12(NULL);
  L12(r36):
    goto L13();
  L19(c17):
    c29 = `as.logical`(c17);
    if c29 then L154() else L21();
  L103():
    r30 = `!`(r29);
    __1 = ldf `[` in base;
    r31 = dyn __1(pointers3, r30);
    goto L9(r31);
  L106():
    bad_pointers1 = force? bad_pointers;
    checkMissing(bad_pointers1);
    length1 = ldf length in base;
    r34 = dyn length1(bad_pointers1);
    check L107() else D18();
  L108():
    bad_pointers2 = ld bad_pointers;
    check L109() else D19();
  L120():
    goto L14(r44);
  L123(dx13):
    c12 = `is.object`(dx13);
    if c12 then L127() else L128(dx13);
  L124():
    dr12 = tryDispatchBuiltin.1("$", status13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L126() else L125(dr12);
  L125(status15):
    r45 = `$`(status15, <sym components>);
    goto L123(r45);
  L138():
    status17 = force? status16;
    checkMissing(status17);
    c14 = `is.object`(status17);
    if c14 then L140() else L141(status17);
  L144():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L145() else L146();
  D18():
    deopt 68 [r34];
  D19():
    deopt 69 [bad_pointers2];
  L16(dx17):
    l3 = ld status;
    c13 = `is.object`(l3);
    if c13 then L132() else L133(dx17, l3);
  L20(c20, r54):
    c26 = `as.logical`(r54);
    c27 = `&&`(c20, c26);
    goto L19(c27);
  L21():
    goto L23();
  L23():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L169() else L170();
  L107():
    goto L10(r34);
  L109():
    bad_pointers3 = force? bad_pointers2;
    checkMissing(bad_pointers3);
    l = ld status;
    c8 = `is.object`(l);
    if c8 then L111() else L112(bad_pointers3, l);
  L126():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L123(dx12);
  L127():
    dr14 = tryDispatchBuiltin.1("[", dx13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L129() else L128(dr14);
  L128(dx15):
    ind = ld ind;
    check L130() else D24();
  L139(dx25):
    st extensions = dx25;
    length2 = ldf length in base;
    r52 = dyn length2(dx25);
    check L143() else D26();
  L140():
    dr18 = tryDispatchBuiltin.1("$", status17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L142() else L141(dr18);
  L141(status19):
    r51 = `$`(status19, <sym extensions>);
    goto L139(r51);
  L145():
    extensions = ld extensions;
    check L147() else D27();
  L146():
    r53 = dyn base7(<lang `<-`(ind, `!`(`$`(extensions, extensible)))>);
    goto L20(c15, r53);
  L154():
    extensions4 = ld extensions;
    check L155() else D29();
  D24():
    deopt 97 [dx15, ind];
  D26():
    deopt 115 [r52];
  D27():
    deopt 118 [c15, extensions];
  D29():
    deopt 126 [extensions4];
  L24(r63):
    c35 = `as.logical`(r63);
    if c35 then L174() else L25();
  L110(dx9):
    st status = dx9;
    st ok = FALSE;
    goto L12(FALSE);
  L111():
    dr8 = tryDispatchBuiltin.0("$<-", l, bad_pointers3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L113() else L112(bad_pointers3, dr8);
  L112(bad_pointers5, l2):
    r35 = `$<-`(l2, <sym bad_pointers>, bad_pointers3);
    goto L110(r35);
  L129():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L16(dx16);
  L130():
    ind1 = force? ind;
    __2 = ldf `[` in base;
    r46 = dyn __2(dx15, ind1);
    goto L16(r46);
  L131(dx23):
    st status = dx23;
    st ok = FALSE;
    goto L17();
  L132():
    dr16 = tryDispatchBuiltin.0("$<-", l3, dx17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L134() else L133(dx17, dr16);
  L133(dx19, l5):
    r47 = `$<-`(l5, <sym deprecated>, dx17);
    goto L131(r47);
  L142():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L139(dx24);
  L143():
    goto L18(r52);
  L147():
    extensions1 = force? extensions;
    checkMissing(extensions1);
    c21 = `is.object`(extensions1);
    if c21 then L149() else L150(c15, extensions1);
  L155():
    extensions5 = force? extensions4;
    checkMissing(extensions5);
    c30 = `is.object`(extensions5);
    if c30 then L157() else L158(extensions5);
  L169():
    _in_ = ldf `%in%`;
    check L171() else D31();
  L170():
    r62 = dyn base8(<lang `<-`(ind, `%in%`(`$`(status, components), c("MIT License", "MIT", "BSD 2-clause License", "BSD_2_clause", "BSD 3-clause License", "BSD_3_clause")))>);
    goto L24(r62);
  D31():
    deopt 143 [];
  L25():
    goto L27();
  L27():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L189() else L190();
  L113():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L110(dx8);
  L134():
    dx21 = getTryDispatchBuiltinValue(dr16);
    goto L131(dx21);
  L148(c25, dx27):
    r56 = `!`(dx27);
    st ind = r56;
    any1 = ldf any in base;
    r57 = dyn any1(r56);
    check L152() else D28();
  L149():
    dr20 = tryDispatchBuiltin.1("$", extensions1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L151() else L150(c15, dr20);
  L150(c23, extensions3):
    r55 = `$`(extensions3, <sym extensible>);
    goto L148(c23, r55);
  L156(dx29):
    c31 = `is.object`(dx29);
    if c31 then L160() else L161(dx29);
  L157():
    dr22 = tryDispatchBuiltin.1("$", extensions5);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L159() else L158(dr22);
  L158(extensions7):
    r58 = `$`(extensions7, <sym components>);
    goto L156(r58);
  L171():
    p9 = prom<V +>{
      status20 = ld status;
      status21 = force? status20;
      checkMissing(status21);
      c33 = `is.object`(status21);
      if c33 then L1() else L2(status21);
    L0(dx41):
      return dx41;
    L1():
      dr28 = tryDispatchBuiltin.1("$", status21);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(status23):
      r64 = `$`(status23, <sym components>);
      goto L0(r64);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx40);
    };
    p10 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      c34 = ldf c in base;
      r68 = dyn c34("MIT License", "MIT", "BSD 2-clause License", "BSD_2_clause", "BSD 3-clause License", "BSD_3_clause");
      goto L0(r68);
    L2():
      r66 = dyn base9("MIT License", "MIT", "BSD 2-clause License", "BSD_2_clause", "BSD 3-clause License", "BSD_3_clause");
      goto L0(r66);
    };
    r70 = dyn _in_(p9, p10);
    check L172() else D32();
  L174():
    status24 = ld status;
    check L175() else D34();
  D28():
    deopt 124 [c25, r57];
  D32():
    deopt 146 [r70];
  D34():
    deopt 150 [status24];
  L22(dx33):
    l6 = ld status;
    c32 = `is.object`(l6);
    if c32 then L165() else L166(dx33, l6);
  L28(r77):
    c40 = `as.logical`(r77);
    if c40 then L197() else L29();
  L151():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L148(c15, dx26);
  L152():
    goto L20(c25, r57);
  L159():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L156(dx28);
  L160():
    dr24 = tryDispatchBuiltin.1("[", dx29);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L162() else L161(dr24);
  L161(dx31):
    ind2 = ld ind;
    check L163() else D30();
  L172():
    st ind = r70;
    any2 = ldf any in base;
    r71 = dyn any2(r70);
    check L173() else D33();
  L175():
    status25 = force? status24;
    checkMissing(status25);
    c36 = `is.object`(status25);
    if c36 then L177() else L178(status25);
  L189():
    status28 = ld status;
    check L191() else D36();
  L190():
    r76 = dyn base10(<lang `<-`(extensions, `$`(status, extensions))>);
    goto L28(r76);
  D30():
    deopt 129 [dx31, ind2];
  D33():
    deopt 149 [r71];
  D36():
    deopt 166 [status28];
  L29():
    goto L50();
  L50():
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L277() else L278();
  L162():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L22(dx32);
  L163():
    ind3 = force? ind2;
    __3 = ldf `[` in base;
    r59 = dyn __3(dx31, ind3);
    goto L22(r59);
  L164(dx39):
    st status = dx39;
    st ok = FALSE;
    goto L23();
  L165():
    dr26 = tryDispatchBuiltin.0("$<-", l6, dx33);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L167() else L166(dx33, dr26);
  L166(dx35, l8):
    r60 = `$<-`(l8, <sym bad_extensions>, dx33);
    goto L164(r60);
  L173():
    goto L24(r71);
  L176(dx43):
    c37 = `is.object`(dx43);
    if c37 then L180() else L181(dx43);
  L177():
    dr30 = tryDispatchBuiltin.1("$", status25);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L179() else L178(dr30);
  L178(status27):
    r72 = `$`(status27, <sym components>);
    goto L176(r72);
  L191():
    status29 = force? status28;
    checkMissing(status29);
    c39 = `is.object`(status29);
    if c39 then L193() else L194(status29);
  L197():
    extensions8 = ld extensions;
    check L198() else D38();
  D38():
    deopt 172 [extensions8];
  L26(dx47):
    l9 = ld status;
    c38 = `is.object`(l9);
    if c38 then L185() else L186(dx47, l9);
  L51(r164):
    c75 = `as.logical`(r164);
    if c75 then L282() else L52(c75);
  L167():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L164(dx37);
  L179():
    dx42 = getTryDispatchBuiltinValue(dr30);
    goto L176(dx42);
  L180():
    dr32 = tryDispatchBuiltin.1("[", dx43);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L182() else L181(dr32);
  L181(dx45):
    ind4 = ld ind;
    check L183() else D35();
  L192(dx55):
    st extensions = dx55;
    length3 = ldf length in base;
    r79 = dyn length3(dx55);
    check L196() else D37();
  L193():
    dr36 = tryDispatchBuiltin.1("$", status29);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L195() else L194(dr36);
  L194(status31):
    r78 = `$`(status31, <sym extensions>);
    goto L192(r78);
  L198():
    extensions9 = force? extensions8;
    checkMissing(extensions9);
    c41 = `is.object`(extensions9);
    if c41 then L200() else L201(extensions9);
  L277():
    _in_1 = ldf `%in%`;
    check L279() else D66();
  L278():
    r163 = dyn base21(<lang `<-`(ind, `%in%`(`$`(status, components), "ACM"))>);
    goto L51(r163);
  D35():
    deopt 153 [dx45, ind4];
  D37():
    deopt 171 [r79];
  D66():
    deopt 299 [];
  L52(c77):
    c83 = `as.logical`(c77);
    if c83 then L286() else L53();
  L182():
    dx46 = getTryDispatchBuiltinValue(dr32);
    goto L26(dx46);
  L183():
    ind5 = force? ind4;
    __4 = ldf `[` in base;
    r73 = dyn __4(dx45, ind5);
    goto L26(r73);
  L184(dx53):
    st status = dx53;
    st ok = FALSE;
    goto L27();
  L185():
    dr34 = tryDispatchBuiltin.0("$<-", l9, dx47);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L187() else L186(dx47, dr34);
  L186(dx49, l11):
    r74 = `$<-`(l11, <sym miss_extension>, dx47);
    goto L184(r74);
  L195():
    dx54 = getTryDispatchBuiltinValue(dr36);
    goto L192(dx54);
  L196():
    goto L28(r79);
  L199(dx57):
    st components = dx57;
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L203() else L204();
  L200():
    dr38 = tryDispatchBuiltin.1("$", extensions9);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L202() else L201(dr38);
  L201(extensions11):
    r80 = `$`(extensions11, <sym components>);
    goto L199(r80);
  L279():
    p28 = prom<V +>{
      status36 = ld status;
      status37 = force? status36;
      checkMissing(status37);
      c74 = `is.object`(status37);
      if c74 then L1() else L2(status37);
    L0(dx69):
      return dx69;
    L1():
      dr50 = tryDispatchBuiltin.1("$", status37);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(status39):
      r165 = `$`(status39, <sym components>);
      goto L0(r165);
    L3():
      dx68 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx68);
    };
    r167 = dyn _in_1(p28, "ACM");
    check L280() else D67();
  L282():
    _in_2 = ldf `%in%`;
    check L283() else D69();
  D67():
    deopt 302 [r167];
  D69():
    deopt 307 [c75];
  L30(r82):
    c42 = `as.logical`(r82);
    if c42 then L208() else L31();
  L53():
    goto L55();
  L55():
    ok = ld ok;
    check L301() else D73();
  L187():
    dx51 = getTryDispatchBuiltinValue(dr34);
    goto L184(dx51);
  L202():
    dx56 = getTryDispatchBuiltinValue(dr38);
    goto L199(dx56);
  L203():
    grepl1 = ldf grepl;
    check L205() else D39();
  L204():
    r81 = dyn base11(<lang grepl("^BSD[ _]3", components)>);
    goto L30(r81);
  L280():
    st ind = r167;
    any5 = ldf any in base;
    r168 = dyn any5(r167);
    check L281() else D68();
  L283():
    p29 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      c78 = `is.object`(db5);
      if c78 then L1() else L2(db5);
    L0(dx71):
      return dx71;
    L1():
      dr52 = tryDispatchBuiltin.1("[", db5);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(db7):
      __7 = ldf `[` in base;
      r169 = dyn __7(db7, "Package");
      goto L0(r169);
    L3():
      dx70 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx70);
    };
    p30 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r172):
      return r172;
    L1():
      c79 = ldf c in base;
      r173 = dyn c79("akima", "tripack");
      goto L0(r173);
    L2():
      r171 = dyn base22("akima", "tripack");
      goto L0(r171);
    };
    r175 = dyn _in_2(p29, p30);
    check L284() else D70();
  L286():
    status40 = ld status;
    check L287() else D71();
  D39():
    deopt 179 [];
  D68():
    deopt 305 [r168];
  D70():
    deopt 310 [c75, r175];
  D71():
    deopt 313 [status40];
  D73():
    deopt 327 [ok];
  L31():
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L213() else L214();
  L33(r89):
    st nms = r89;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L223() else L224();
  L205():
    p11 = prom<V +>{
      components = ld components;
      components1 = force? components;
      checkMissing(components1);
      return components1;
    };
    r84 = dyn grepl1("^BSD[ _]3", p11);
    check L206() else D40();
  L208():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L209() else L210();
  L281():
    goto L51(r168);
  L284():
    r176 = `!`(r175);
    c80 = `as.logical`(r176);
    c81 = `&&`(c75, c80);
    goto L52(c81);
  L287():
    status41 = force? status40;
    checkMissing(status41);
    c84 = `is.object`(status41);
    if c84 then L289() else L290(status41);
  L301():
    ok1 = force? ok;
    checkMissing(ok1);
    r181 = `!`(ok1);
    c87 = `as.logical`(r181);
    if c87 then L302() else L56();
  D40():
    deopt 182 [r84];
  L32(r87):
    goto L33(r87);
  L34(r91):
    c44 = `as.logical`(r91);
    if c44 then L218() else L35();
  L37(r99):
    r100 = `!`(r99);
    c47 = `as.logical`(r100);
    if c47 then L226() else L38(c47);
  L56():
    goto L59(NULL);
  L59(r188):
    goto L60();
  L206():
    any3 = ldf any in base;
    r85 = dyn any3(r84);
    check L207() else D41();
  L209():
    c43 = ldf c in base;
    r88 = dyn c43("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION");
    check L211() else D42();
  L210():
    r86 = dyn base12("YEAR", "COPYRIGHT HOLDER", "ORGANIZATION");
    goto L32(r86);
  L213():
    grepl2 = ldf grepl;
    check L215() else D43();
  L214():
    r90 = dyn base13(<lang grepl("^(MIT|BSD[ _]2)", components)>);
    goto L34(r90);
  L223():
    nms = ld nms;
    check L225() else D47();
  L224():
    r98 = dyn base15(<sym nms>);
    goto L37(r98);
  L288(dx73):
    c85 = `is.object`(dx73);
    if c85 then L292() else L293(dx73);
  L289():
    dr54 = tryDispatchBuiltin.1("$", status41);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L291() else L290(dr54);
  L290(status43):
    r177 = `$`(status43, <sym components>);
    goto L288(r177);
  L302():
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L303() else L304();
  D41():
    deopt 184 [r85];
  D42():
    deopt 191 [r88];
  D43():
    deopt 195 [];
  D47():
    deopt 211 [nms];
  L35():
    goto L33(NULL);
  L38(c49):
    c61 = `as.logical`(c49);
    if c61 then L236() else L40(c61);
  L54(dx77):
    l18 = ld status;
    c86 = `is.object`(l18);
    if c86 then L297() else L298(dx77, l18);
  L57(r183):
    st out = r183;
    goto L59(r183);
  L207():
    goto L30(r85);
  L211():
    goto L32(r88);
  L215():
    p12 = prom<V +>{
      components2 = ld components;
      components3 = force? components2;
      checkMissing(components3);
      return components3;
    };
    r93 = dyn grepl2("^(MIT|BSD[ _]2)", p12);
    check L216() else D44();
  L218():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L219() else L220();
  L225():
    nms1 = force? nms;
    checkMissing(nms1);
    c46 = `==`(nms1, NULL);
    goto L37(c46);
  L226():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L227() else L228();
  L291():
    dx72 = getTryDispatchBuiltinValue(dr54);
    goto L288(dx72);
  L292():
    dr56 = tryDispatchBuiltin.1("[", dx73);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L294() else L293(dr56);
  L293(dx75):
    ind8 = ld ind;
    check L295() else D72();
  L303():
    sym24 = ldf list;
    base24 = ldf list in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L305() else L306();
  L304():
    r182 = dyn base23(<lang list(license=val)>, <sym status>);
    goto L57(r182);
  D44():
    deopt 198 [r93];
  D72():
    deopt 316 [dx75, ind8];
  L36(r96):
    goto L33(r96);
  L39(c52, r102):
    c58 = `as.logical`(r102);
    c59 = `&&`(c52, c58);
    goto L38(c59);
  L40(c63):
    c68 = `as.logical`(c63);
    if c68 then L240() else L41();
  L58(r185):
    status44 = ld status;
    check L309() else D76();
  L216():
    any4 = ldf any in base;
    r94 = dyn any4(r93);
    check L217() else D45();
  L219():
    c45 = ldf c in base;
    r97 = dyn c45("YEAR", "COPYRIGHT HOLDER");
    check L221() else D46();
  L220():
    r95 = dyn base14("YEAR", "COPYRIGHT HOLDER");
    goto L36(r95);
  L227():
    status32 = ld status;
    check L229() else D48();
  L228():
    r101 = dyn base16(<lang `<-`(pointers, `$`(status, pointers))>);
    goto L39(c47, r101);
  L236():
    file_test1 = ldf file_test;
    check L237() else D50();
  L294():
    dx76 = getTryDispatchBuiltinValue(dr56);
    goto L54(dx76);
  L295():
    ind9 = force? ind8;
    __8 = ldf `[` in base;
    r178 = dyn __8(dx75, ind9);
    goto L54(r178);
  L296(dx83):
    st status = dx83;
    st ok = FALSE;
    goto L55();
  L297():
    dr58 = tryDispatchBuiltin.0("$<-", l18, dx77);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L299() else L298(dx77, dr58);
  L298(dx79, l20):
    r179 = `$<-`(l20, <sym ACM>, dx77);
    goto L296(r179);
  L305():
    val8 = ld val;
    check L307() else D74();
  L306():
    r184 = dyn base24[license](<sym val>);
    goto L58(r184);
  D45():
    deopt 200 [r94];
  D46():
    deopt 206 [r97];
  D48():
    deopt 217 [c47, status32];
  D50():
    deopt 225 [c61];
  D74():
    deopt 334 [val8];
  D76():
    deopt 339 [status44];
  L41():
    goto L49(NULL);
  L49(r161):
    goto L50();
  L217():
    goto L34(r94);
  L221():
    goto L36(r97);
  L229():
    status33 = force? status32;
    checkMissing(status33);
    c53 = `is.object`(status33);
    if c53 then L231() else L232(c47, status33);
  L237():
    p15 = prom<V +>{
      file_path1 = ldf `file.path`;
      p13 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p14 = prom<V +>{
        pointers6 = ld pointers;
        pointers7 = force? pointers6;
        checkMissing(pointers7);
        c64 = `is.object`(pointers7);
        if c64 then L1() else L2(pointers7);
      L0(dx61):
        return dx61;
      L1():
        dr42 = tryDispatchBuiltin.1("[", pointers7);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L3() else L2(dr42);
      L2(pointers9):
        __5 = ldf `[` in base;
        r106 = dyn __5(pointers9, 1);
        goto L0(r106);
      L3():
        dx60 = getTryDispatchBuiltinValue(dr42);
        goto L0(dx60);
      };
      r108 = dyn file_path1(p13, p14);
      return r108;
    };
    r110 = dyn file_test1("-f", p15);
    check L238() else D51();
  L240():
    tryCatch = ldf tryCatch;
    check L241() else D52();
  L299():
    dx81 = getTryDispatchBuiltinValue(dr58);
    goto L296(dx81);
  L307():
    val9 = force? val8;
    checkMissing(val9);
    list1 = ldf list in base;
    r186 = dyn list1(val9);
    check L308() else D75();
  L309():
    status45 = force? status44;
    checkMissing(status45);
    c88 = ldf c in base;
    r187 = dyn c88(r185, status45);
    check L310() else D77();
  D51():
    deopt 228 [c61, r110];
  D52():
    deopt 231 [];
  D75():
    deopt 338 [r186];
  D77():
    deopt 342 [r187];
  L230(c57, dx59):
    st pointers = dx59;
    length4 = ldf length in base;
    r104 = dyn length4(dx59);
    check L234() else D49();
  L231():
    dr40 = tryDispatchBuiltin.1("$", status33);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L233() else L232(c47, dr40);
  L232(c55, status35):
    r103 = `$`(status35, <sym pointers>);
    goto L230(c55, r103);
  L238():
    c65 = `as.logical`(r110);
    c66 = `&&`(c61, c65);
    goto L40(c66);
  L241():
    p20 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p18 = prom<V +>{
        file_path2 = ldf `file.path`;
        p16 = prom<V +>{
          dir5 = ld dir;
          dir6 = force? dir5;
          checkMissing(dir6);
          return dir6;
        };
        p17 = prom<V +>{
          pointers10 = ld pointers;
          pointers11 = force? pointers10;
          checkMissing(pointers11);
          c69 = `is.object`(pointers11);
          if c69 then L1() else L2(pointers11);
        L0(dx63):
          return dx63;
        L1():
          dr44 = tryDispatchBuiltin.1("[", pointers11);
          dc22 = getTryDispatchBuiltinDispatched(dr44);
          if dc22 then L3() else L2(dr44);
        L2(pointers13):
          __6 = ldf `[` in base;
          r112 = dyn __6(pointers13, 1);
          goto L0(r112);
        L3():
          dx62 = getTryDispatchBuiltinValue(dr44);
          goto L0(dx62);
        };
        r114 = dyn file_path2(p16, p17);
        return r114;
      };
      p19 = prom<V +>{
        nms2 = ld nms;
        nms3 = force? nms2;
        checkMissing(nms3);
        return nms3;
      };
      r117 = dyn read_dcf[, fields](p18, p19);
      return r117;
    };
    p21 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r120 = dyn tryCatch[, error](p20, p21);
    check L242() else D53();
  L308():
    goto L58(r186);
  L310():
    goto L57(r187);
  D49():
    deopt 222 [c57, r104];
  D53():
    deopt 235 [r120];
  L233():
    dx58 = getTryDispatchBuiltinValue(dr40);
    goto L230(c47, dx58);
  L234():
    goto L39(c57, r104);
  L242():
    st val = r120;
    sym17 = ldf inherits;
    base17 = ldf inherits in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L243() else L244();
  L42(r122):
    c70 = `as.logical`(r122);
    if c70 then L247() else L43();
  L243():
    val2 = ld val;
    check L245() else D54();
  L244():
    r121 = dyn base17(<sym val>, "error");
    goto L42(r121);
  D54():
    deopt 239 [val2];
  L43():
    sym18 = ldf `is.na`;
    base18 = ldf `is.na` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L253() else L254();
  L44(r129):
    goto L49(r129);
  L245():
    val3 = force? val2;
    checkMissing(val3);
    inherits = ldf inherits in base;
    r123 = dyn inherits(val3, "error", FALSE);
    check L246() else D55();
  L247():
    l12 = ld status;
    c71 = `is.object`(l12);
    if c71 then L249() else L250(TRUE, l12);
  D55():
    deopt 244 [r123];
  L45(r131):
    sym19 = ldf nzchar;
    base19 = ldf nzchar in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L257() else L258();
  L246():
    goto L42(r123);
  L248(dx65):
    st status = dx65;
    st ok = FALSE;
    goto L44(FALSE);
  L249():
    dr46 = tryDispatchBuiltin.0("$<-", l12, TRUE);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L251() else L250(TRUE, dr46);
  L250(r125, l14):
    r128 = `$<-`(l14, <sym license_stub_is_bad_DCF>, TRUE);
    goto L248(r128);
  L253():
    val4 = ld val;
    check L255() else D56();
  L254():
    r130 = dyn base18(<sym val>);
    goto L45(r130);
  D56():
    deopt 255 [val4];
  L46(r136, r137):
    r139 = `!`(r137);
    r140 = `||`(r136, r139);
    st ind = r140;
    which = ldf which;
    check L261() else D60();
  L251():
    dx64 = getTryDispatchBuiltinValue(dr46);
    goto L248(dx64);
  L255():
    val5 = force? val4;
    checkMissing(val5);
    is_na1 = ldf `is.na` in base;
    r132 = dyn is_na1(val5);
    check L256() else D57();
  L257():
    val6 = ld val;
    check L259() else D58();
  L258():
    r135 = dyn base19(<sym val>);
    goto L46(r131, r135);
  D57():
    deopt 258 [r132];
  D58():
    deopt 260 [r131, val6];
  D60():
    deopt 268 [];
  L256():
    goto L45(r132);
  L259():
    val7 = force? val6;
    checkMissing(val7);
    nzchar = ldf nzchar in base;
    r138 = dyn nzchar(val7);
    check L260() else D59();
  L261():
    p23 = prom<V +>{
      rowSums = ldf rowSums;
      p22 = prom<V +>{
        ind6 = ld ind;
        ind7 = force? ind6;
        checkMissing(ind7);
        return ind7;
      };
      r142 = dyn rowSums(p22);
      r143 = `>`(r142, 0.0);
      return r143;
    };
    r145 = dyn which(p23);
    check L262() else D61();
  D59():
    deopt 263 [r131, r138];
  D61():
    deopt 270 [r145];
  L260():
    goto L46(r131, r138);
  L262():
    st pos = r145;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L263() else L264();
  L47(r147):
    c72 = `as.logical`(r147);
    if c72 then L267() else L48();
  L263():
    pos = ld pos;
    check L265() else D62();
  L264():
    r146 = dyn base20(<sym pos>);
    goto L47(r146);
  D62():
    deopt 274 [pos];
  L48():
    goto L44(NULL);
  L265():
    pos1 = force? pos;
    checkMissing(pos1);
    length5 = ldf length in base;
    r148 = dyn length5(pos1);
    check L266() else D63();
  L267():
    gettextf = ldf gettextf;
    check L268() else D64();
  D63():
    deopt 277 [r148];
  D64():
    deopt 279 [];
  L266():
    goto L47(r148);
  L268():
    p24 = prom<V +>{
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      return pos3;
    };
    p27 = prom<V +>{
      vapply = ldf vapply;
      p25 = prom<V +>{
        pos4 = ld pos;
        pos5 = force? pos4;
        checkMissing(pos5);
        return pos5;
      };
      p26 = prom<V +>{
        r151 = clos inner3913899244;
        return r151;
      };
      r153 = dyn vapply(p25, p26, "");
      return r153;
    };
    r155 = dyn gettextf("Record: %d Field(s): %s", p24, p27);
    check L269() else D65();
  D65():
    deopt 283 [r155];
  L269():
    l15 = ld status;
    c73 = `is.object`(l15);
    if c73 then L271() else L272(r155, l15);
  L270(dx67):
    st status = dx67;
    st ok = FALSE;
    goto L44(FALSE);
  L271():
    dr48 = tryDispatchBuiltin.0("$<-", l15, r155);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L273() else L272(r155, dr48);
  L272(r157, l17):
    r160 = `$<-`(l17, <sym license_stub_fields_not_complete>, r155);
    goto L270(r160);
  L273():
    dx66 = getTryDispatchBuiltinValue(dr48);
    goto L270(dx66);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg paste:cls, reg nms:*, reg nms1:V, reg c:L, reg nms3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg c1:L, reg nms5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg nms7:V, reg dx3:V, reg p1:*, reg p2:V, reg __:cls, reg r:V, reg __1:cls, reg r1:V, reg p3:p(V +), reg r3:V |
    mkenv;
    st p = p;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      c = `is.object`(nms1);
      if c then L2() else L3(nms1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", nms1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(nms3):
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      c1 = `is.object`(ind1);
      if c1 then L5() else L6(nms3);
    L1(nms7, dx3):
      __1 = ldf `[` in base;
      r1 = dyn __1(nms7, dx3);
      goto L0(r1);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", ind1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(nms3);
    L6(nms5):
      p1 = ld p;
      p2 = force? p1;
      __ = ldf `[` in base;
      r = dyn __(ind1, p2, <missing>);
      goto L1(nms5, r);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(nms3, dx2);
    };
    r3 = dyn paste[, collapse](p3, ", ");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}