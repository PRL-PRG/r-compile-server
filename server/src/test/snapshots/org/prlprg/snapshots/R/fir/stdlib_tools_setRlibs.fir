fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2313248330;
    st setRlibs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2313248330(lib0, pkgdir, suggests, libdir, self, self2, quote, LinkingTo, tests) {
  (reg lib0:*, reg pkgdir:*, reg suggests:*, reg libdir:*, reg self:*, reg self2:*, reg quote:*, reg LinkingTo:*, reg tests:*) -+> V { var lib0:*, reg lib0_isMissing:L, reg lib0_orDefault:*, var pkgdir:*, reg pkgdir_isMissing:L, reg pkgdir_orDefault:*, var suggests:*, reg suggests_isMissing:L, reg suggests_orDefault:*, var libdir:*, reg libdir_isMissing:L, reg libdir_orDefault:*, var self:*, reg self_isMissing:L, reg self_orDefault:*, var self2:*, reg self2_isMissing:L, reg self2_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var LinkingTo:*, reg LinkingTo_isMissing:L, reg LinkingTo_orDefault:*, var tests:*, reg tests_isMissing:L, reg tests_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg WINDOWS:*, reg WINDOWS1:V, reg c1:L, reg c3:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c6:L, reg r3:V, reg Sys_getenv:cls, reg r4:V, reg nzchar:cls, reg r5:V, reg r6:V, reg c7:L, reg c8:V, reg r7:cls, reg _split_description:cls, reg _read_description:cls, reg file_path:cls, reg pkgdir1:*, reg pkgdir2:V, reg p:p(V +), reg r9:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V, reg unname:cls, reg pi:*, reg pi1:V, reg c10:L, reg pi3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r14:V, reg c11:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg tempfile:cls, reg r18:V, reg dir_create:cls, reg tmplib:*, reg tmplib1:V, reg p4:p(V +), reg r20:V, reg config_val_to_logical:cls, reg Sys_getenv1:cls, reg r21:V, reg p5:p(V +), reg r23:V, reg test_recommended:*, reg test_recommended1:V, reg c12:L, reg _get_standard_package_names:cls, reg r24:V, reg c13:L, reg r26:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r27:V, reg _in_:cls, reg thispkg:*, reg thispkg1:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:V, reg c14:cls, reg r31:V, reg p7:p(V +), reg r33:V, reg c15:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg exceptions:*, reg exceptions1:V, reg c16:cls, reg r36:V, reg _in_1:cls, reg thispkg2:*, reg thispkg3:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg c17:cls, reg r41:V, reg p9:p(V +), reg r43:V, reg c18:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg exceptions2:*, reg exceptions3:V, reg c19:cls, reg r46:V, reg _w_o_:cls, reg recommended:*, reg recommended1:V, reg p10:p(V +), reg exceptions4:*, reg exceptions5:V, reg p11:p(V +), reg r50:V, reg recommended2:*, reg recommended3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c20:L, reg x:V, reg pkg:*, reg pkg1:V, reg thispkg4:*, reg thispkg5:V, reg r51:V, reg c21:L, reg dir_create1:cls, reg file_path1:cls, reg tmplib2:*, reg tmplib3:V, reg p12:p(V +), reg pkg2:*, reg pkg3:V, reg p13:p(V +), reg r55:V, reg p14:p(V +), reg r57:V, reg file_path2:cls, reg _Library:*, reg _Library1:V, reg p15:p(V +), reg pkg4:*, reg pkg5:V, reg p16:p(V +), reg r60:V, reg file_exists:cls, reg f:*, reg f1:V, reg p17:p(V +), reg r62:V, reg c22:L, reg file_copy:cls, reg f2:*, reg f3:V, reg p18:p(V +), reg pd:*, reg pd1:V, reg p19:p(V +), reg r65:V, reg i11:I, reg close:cls, reg file:cls, reg file_path3:cls, reg pd2:*, reg pd3:V, reg p20:p(V +), reg r68:V, reg p21:p(V +), reg r70:V, reg p22:p(V +), reg r72:V, reg r73:cls, reg suggests1:*, reg suggests2:V, reg c23:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r74:V, reg r75:V, reg pi4:*, reg pi5:V, reg c24:L, reg pi7:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r76:V, reg names:cls, reg r77:V, reg r78:V, reg unname1:cls, reg pi8:*, reg pi9:V, reg c25:L, reg pi11:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r79:V, reg c26:L, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __1:cls, reg r80:V, reg p23:p(V +), reg r82:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r83:V, reg r84:V, reg VB:*, reg VB1:V, reg is_na:cls, reg r85:V, reg c27:L, reg character:cls, reg r86:V, reg r87:V, reg unlist:cls, reg strsplit:cls, reg VB2:*, reg VB3:V, reg p24:p(V +), reg r89:V, reg p25:p(V +), reg r91:V, reg unique:cls, reg gsub:cls, reg VB4:*, reg VB5:V, reg p26:p(V +), reg r93:V, reg p27:p(V +), reg r95:V, reg sug:*, reg sug1:V, reg tests1:*, reg tests2:V, reg c28:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r96:V, reg r97:V, reg sug2:*, reg sug3:V, reg intersect:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r98:V, reg r99:V, reg pi12:*, reg pi13:V, reg c29:L, reg pi15:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg r100:V, reg names1:cls, reg r101:V, reg p28:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r103:V, reg r104:V, reg c30:cls, reg r105:V, reg p29:p(V +), reg r107:V, reg c31:cls, reg r108:V, reg sug4:*, reg sug5:V, reg unique1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r109:V, reg r110:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r111:V, reg r112:V, reg pi16:*, reg pi17:V, reg c32:L, reg pi19:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r113:V, reg names2:cls, reg r114:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r115:V, reg r116:V, reg pi20:*, reg pi21:V, reg c33:L, reg pi23:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r117:V, reg names3:cls, reg r118:V, reg LinkingTo1:*, reg LinkingTo2:V, reg c34:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r119:V, reg r120:V, reg pi24:*, reg pi25:V, reg c35:L, reg pi27:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r121:V, reg names4:cls, reg r122:V, reg r123:V, reg sug6:*, reg sug7:V, reg c36:cls, reg r124:V, reg p30:p(V +), reg r126:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r127:V, reg r128:V, reg libdir1:*, reg libdir2:V, reg length:cls, reg r129:V, reg c37:L, reg c39:V, reg self3:*, reg self4:V, reg c40:L, reg c41:V, reg c43:L, reg flink:cls, reg file_path4:cls, reg libdir3:*, reg libdir4:V, reg p31:p(V +), reg thispkg6:*, reg thispkg7:V, reg p32:p(V +), reg r132:V, reg p33:p(V +), reg tmplib4:*, reg tmplib5:V, reg p34:p(V +), reg r135:V, reg _libPaths:cls, reg r137:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r138:V, reg r139:V, reg lp:*, reg lp1:V, reg c44:L, reg lp3:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r140:V, reg lp6:V, reg r141:V, reg lp7:*, reg lp8:V, reg length1:cls, reg r142:V, reg __2:cls, reg r143:V, reg _Library2:*, reg _Library3:V, reg c45:cls, reg r144:V, reg thispkg8:*, reg thispkg9:V, reg unique2:cls, reg _w_o_1:cls, reg deps:*, reg deps1:V, reg p35:p(V +), reg already:*, reg already1:V, reg p36:p(V +), reg r147:V, reg p37:p(V +), reg r149:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r150:V, reg r151:V, reg more:*, reg more1:V, reg length2:cls, reg r152:V, reg c46:L, reg more2:*, reg more3:V, reg character1:cls, reg r153:V, reg m0:*, reg m1:V, reg s1:V, reg l1:I, reg i13:I, reg i14:I, reg i15:I, reg c47:L, reg x1:V, reg test_recommended2:*, reg test_recommended3:V, reg c48:L, reg _in_2:cls, reg pkg6:*, reg pkg7:V, reg p38:p(V +), reg recommended4:*, reg recommended5:V, reg p39:p(V +), reg r156:V, reg c49:L, reg unlink:cls, reg file_path5:cls, reg tmplib6:*, reg tmplib7:V, reg p40:p(V +), reg pkg8:*, reg pkg9:V, reg p41:p(V +), reg r159:V, reg p42:p(V +), reg r161:V, reg i22:I, reg pkg10:*, reg pkg11:V, reg r163:V, reg c50:L, reg unlink_dummies:cls, reg _w_o_2:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r164:V, reg r165:V, reg c51:cls, reg r166:V, reg p43:p(V +), reg thispkg10:*, reg thispkg11:V, reg p44:p(V +), reg r169:V, reg p45:p(V +), reg r171:V, reg i25:I, reg pkg12:*, reg pkg13:V, reg r173:V, reg c52:L, reg unlink_dummies1:cls, reg _w_o_3:cls, reg thispkg12:*, reg thispkg13:V, reg p46:p(V +), reg r175:V, reg p47:p(V +), reg r177:V, reg i28:I, reg pkg14:*, reg pkg15:V, reg r179:V, reg c53:L, reg unlink_dummies2:cls, reg _w_o_4:cls, reg thispkg14:*, reg thispkg15:V, reg p48:p(V +), reg r181:V, reg p49:p(V +), reg r183:V, reg i31:I, reg pkg16:*, reg pkg17:V, reg r185:V, reg c54:L, reg unlink_dummies3:cls, reg _w_o_5:cls, reg thispkg16:*, reg thispkg17:V, reg p50:p(V +), reg r187:V, reg p51:p(V +), reg r189:V, reg i34:I, reg r190:V, reg i35:I, reg find_package:cls, reg pkg18:*, reg pkg19:V, reg p52:p(V +), reg r193:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r194:V, reg i38:I, reg r195:V, reg where:*, reg where1:V, reg length3:cls, reg r196:V, reg c55:L, reg _notin_:cls, reg dirname:cls, reg where2:*, reg where3:V, reg p53:p(V +), reg r198:V, reg p54:p(V +), reg poss:*, reg poss1:V, reg p55:p(V +), reg r201:V, reg c56:L, reg flink1:cls, reg where4:*, reg where5:V, reg p56:p(V +), reg tmplib8:*, reg tmplib9:V, reg p57:p(V +), reg r204:V, reg i43:I, reg test_recommended4:*, reg test_recommended5:V, reg r206:V, reg c57:L, reg readRDS:cls, reg file_path6:cls, reg where6:*, reg where7:V, reg p58:p(V +), reg r208:V, reg p59:p(V +), reg r210:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r211:V, reg i49:I, reg r212:V, reg more4:*, reg more5:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r213:V, reg i52:I, reg r214:V, reg pi28:*, reg pi29:V, reg c58:L, reg i54:I, reg pi31:V, reg dr24:V, reg dc12:L, reg dx28:V, reg i56:I, reg dx29:V, reg r215:V, reg names5:cls, reg r216:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r217:V, reg i59:I, reg r218:V, reg pi32:*, reg pi33:V, reg c59:L, reg i61:I, reg pi35:V, reg dr26:V, reg dc13:L, reg dx30:V, reg i63:I, reg dx31:V, reg r219:V, reg names6:cls, reg r220:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r221:V, reg i66:I, reg r222:V, reg pi36:*, reg pi37:V, reg c60:L, reg i68:I, reg pi39:V, reg dr28:V, reg dc14:L, reg dx32:V, reg i70:I, reg dx33:V, reg r223:V, reg names7:cls, reg r224:V, reg c61:cls, reg r225:V, reg i71:I, reg sym24:cls, reg base24:cls, reg guard24:L, reg r227:V, reg r228:V, reg already2:*, reg already3:V, reg m2:*, reg m3:V, reg c62:cls, reg r229:V, reg unique3:cls, reg _w_o_6:cls, reg more6:*, reg more7:V, reg p60:p(V +), reg already4:*, reg already5:V, reg p61:p(V +), reg r232:V, reg p62:p(V +), reg r234:V, reg self5:*, reg self6:V, reg c63:L, reg flink2:cls, reg normalizePath:cls, reg pkgdir3:*, reg pkgdir4:V, reg p63:p(V +), reg r236:V, reg p64:p(V +), reg tmplib10:*, reg tmplib11:V, reg p65:p(V +), reg r239:V, reg tmplib12:*, reg tmplib13:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r241:V, reg r242:V, reg lib1:*, reg lib2:V, reg nzchar1:cls, reg r243:V, reg c64:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r244:V, reg r245:V, reg lib3:*, reg lib4:V, reg rlibs:*, reg rlibs1:V, reg c65:cls, reg r246:V, reg paste:cls, reg rlibs2:*, reg rlibs3:V, reg p66:p(V +), reg _Platform4:*, reg _Platform5:V, reg c66:L, reg _Platform7:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r249:V, reg p67:p(V +), reg r251:V, reg quote1:*, reg quote2:V, reg c67:L, reg shQuote:cls, reg rlibs4:*, reg rlibs5:V, reg p68:p(V +), reg r253:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r255:V, reg r256:V, reg paste1:cls, reg rlibs6:*, reg rlibs7:V, reg p69:p(V +), reg r258:V, reg WINDOWS2:*, reg WINDOWS3:V, reg c68:L, reg r259:S, reg c69:cls, reg r260:V |
    mkenv;
    lib0_isMissing = missing.0(lib0);
    if lib0_isMissing then L0("") else L0(lib0);
  L0(lib0_orDefault):
    st lib0 = lib0_orDefault;
    pkgdir_isMissing = missing.0(pkgdir);
    if pkgdir_isMissing then L1(".") else L1(pkgdir);
  L1(pkgdir_orDefault):
    st pkgdir = pkgdir_orDefault;
    suggests_isMissing = missing.0(suggests);
    if suggests_isMissing then L2(FALSE) else L2(suggests);
  L2(suggests_orDefault):
    st suggests = suggests_orDefault;
    libdir_isMissing = missing.0(libdir);
    if libdir_isMissing then L3(NULL) else L3(libdir);
  L3(libdir_orDefault):
    st libdir = libdir_orDefault;
    self_isMissing = missing.0(self);
    if self_isMissing then L4(FALSE) else L4(self);
  L4(self_orDefault):
    st self = self_orDefault;
    self2_isMissing = missing.0(self2);
    if self2_isMissing then L5(TRUE) else L5(self2);
  L5(self2_orDefault):
    st self2 = self2_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L6(FALSE) else L6(quote);
  L6(quote_orDefault):
    st quote = quote_orDefault;
    LinkingTo_isMissing = missing.0(LinkingTo);
    if LinkingTo_isMissing then L7(FALSE) else L7(LinkingTo);
  L7(LinkingTo_orDefault):
    st LinkingTo = LinkingTo_orDefault;
    tests_isMissing = missing.0(tests);
    if tests_isMissing then L8(FALSE) else L8(tests);
  L8(tests_orDefault):
    st tests = tests_orDefault;
    _Platform = ld `.Platform`;
    check L79() else D0();
  D0():
    deopt 0 [_Platform];
  L79():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L81() else L82(_Platform1);
  L80(dx1):
    r1 = `==`(dx1, "windows");
    st WINDOWS = r1;
    WINDOWS = ld WINDOWS;
    check L84() else D1();
  L81():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L83() else L82(dr);
  L82(_Platform3):
    r = `$`(_Platform3, <sym OS.type>);
    goto L80(r);
  D1():
    deopt 6 [WINDOWS];
  L83():
    dx = getTryDispatchBuiltinValue(dr);
    goto L80(dx);
  L84():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c1 = `as.logical`(WINDOWS1);
    if c1 then L85() else L9(c1);
  L9(c3):
    st useJunctions = c3;
    r7 = clos inner838351097;
    st flink = r7;
    _split_description = ldf `.split_description`;
    check L92() else D5();
  L85():
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L86() else L87();
  D5():
    deopt 23 [];
  L10(c6, r3):
    r6 = `!`(r3);
    c7 = `as.logical`(r6);
    c8 = `&&`(c6, c7);
    goto L9(c8);
  L86():
    Sys_getenv = ldf `Sys.getenv`;
    check L88() else D2();
  L87():
    r2 = dyn base(<lang Sys.getenv("R_WIN_NO_JUNCTIONS")>);
    goto L10(c1, r2);
  L92():
    p2 = prom<V +>{
      _read_description = ldf `.read_description`;
      p1 = prom<V +>{
        file_path = ldf `file.path`;
        p = prom<V +>{
          pkgdir1 = ld pkgdir;
          pkgdir2 = force? pkgdir1;
          checkMissing(pkgdir2);
          return pkgdir2;
        };
        r9 = dyn file_path(p, "DESCRIPTION");
        return r9;
      };
      r11 = dyn _read_description(p1);
      return r11;
    };
    r13 = dyn _split_description(p2);
    check L93() else D6();
  D2():
    deopt 11 [c1];
  D6():
    deopt 25 [r13];
  L88():
    r4 = dyn Sys_getenv("R_WIN_NO_JUNCTIONS");
    check L89() else D3();
  L93():
    st pi = r13;
    unname = ldf unname;
    check L94() else D7();
  D3():
    deopt 13 [c1, r4];
  D7():
    deopt 28 [];
  L89():
    nzchar = ldf nzchar in base;
    r5 = dyn nzchar(r4);
    check L90() else D4();
  L94():
    p3 = prom<V +>{
      pi = ld pi;
      pi1 = force? pi;
      checkMissing(pi1);
      c10 = `is.object`(pi1);
      if c10 then L2() else L3(pi1);
    L1(dx3):
      c11 = `is.object`(dx3);
      if c11 then L5() else L6(dx3);
    L2():
      dr2 = tryDispatchBuiltin.1("$", pi1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(pi3):
      r14 = `$`(pi3, <sym DESCRIPTION>);
      goto L1(r14);
    L0(dx7):
      return dx7;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L5():
      dr4 = tryDispatchBuiltin.1("[", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      __ = ldf `[` in base;
      r15 = dyn __(dx5, "Package");
      goto L0(r15);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    r17 = dyn unname(p3);
    check L95() else D8();
  D4():
    deopt 15 [c1, r5];
  D8():
    deopt 30 [r17];
  L90():
    goto L10(c1, r5);
  L95():
    st thispkg = r17;
    tempfile = ldf tempfile;
    check L96() else D9();
  D9():
    deopt 33 [];
  L96():
    r18 = dyn tempfile("RLIBS_");
    check L97() else D10();
  D10():
    deopt 35 [r18];
  L97():
    st tmplib = r18;
    dir_create = ldf `dir.create`;
    check L98() else D11();
  D11():
    deopt 38 [];
  L98():
    p4 = prom<V +>{
      tmplib = ld tmplib;
      tmplib1 = force? tmplib;
      checkMissing(tmplib1);
      return tmplib1;
    };
    r20 = dyn dir_create(p4);
    check L99() else D12();
  D12():
    deopt 40 [r20];
  L99():
    config_val_to_logical = ldf config_val_to_logical;
    check L100() else D13();
  D13():
    deopt 42 [];
  L100():
    p5 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r21 = dyn Sys_getenv1("_R_CHECK_NO_RECOMMENDED_", "FALSE");
      return r21;
    };
    r23 = dyn config_val_to_logical(p5);
    check L101() else D14();
  D14():
    deopt 44 [r23];
  L101():
    st test_recommended = r23;
    test_recommended = ld test_recommended;
    check L102() else D15();
  D15():
    deopt 46 [test_recommended];
  L102():
    test_recommended1 = force? test_recommended;
    checkMissing(test_recommended1);
    c12 = `as.logical`(test_recommended1);
    if c12 then L103() else L11();
  L11():
    goto L24();
  L24():
    r73 = clos inner3415099399;
    st unlink_dummies = r73;
    suggests1 = ld suggests;
    check L148() else D41();
  L103():
    _get_standard_package_names = ldf `.get_standard_package_names`;
    check L104() else D16();
  D16():
    deopt 49 [];
  D41():
    deopt 137 [suggests1];
  L104():
    r24 = dyn _get_standard_package_names();
    check L105() else D17();
  L148():
    suggests2 = force? suggests1;
    checkMissing(suggests2);
    c23 = `as.logical`(suggests2);
    if c23 then L149() else L25();
  D17():
    deopt 50 [r24];
  L25():
    unname1 = ldf unname;
    check L159() else D44();
  L27(r78):
    st sug = r78;
    unique1 = ldf unique;
    check L184() else D61();
  L105():
    c13 = `is.object`(r24);
    if c13 then L107() else L108(r24);
  L149():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L150() else L151();
  D44():
    deopt 147 [];
  D61():
    deopt 190 [];
  L26(r75):
    goto L27(r75);
  L106(dx9):
    st recommended = dx9;
    st exceptions = "codetools";
    _in_ = ldf `%in%`;
    check L110() else D18();
  L107():
    dr6 = tryDispatchBuiltin.1("$", r24);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L109() else L108(dr6);
  L108(r26):
    r27 = `$`(r26, <sym recommended>);
    goto L106(r27);
  L150():
    pi4 = ld pi;
    check L152() else D42();
  L151():
    r74 = dyn base5(<lang `$`(pi, Suggests)>);
    goto L26(r74);
  L159():
    p23 = prom<V +>{
      pi8 = ld pi;
      pi9 = force? pi8;
      checkMissing(pi9);
      c25 = `is.object`(pi9);
      if c25 then L2() else L3(pi9);
    L1(dx13):
      c26 = `is.object`(dx13);
      if c26 then L5() else L6(dx13);
    L2():
      dr10 = tryDispatchBuiltin.1("$", pi9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(pi11):
      r79 = `$`(pi11, <sym DESCRIPTION>);
      goto L1(r79);
    L0(dx17):
      return dx17;
    L4():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx12);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx13);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx15):
      __1 = ldf `[` in base;
      r80 = dyn __1(dx15, "VignetteBuilder");
      goto L0(r80);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    r82 = dyn unname1(p23);
    check L160() else D45();
  L184():
    p30 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L6() else L7();
    L0(r110):
      return r110;
    L6():
      sym11 = ldf names;
      base11 = ldf names in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L8() else L9();
    L7():
      r109 = dyn base10(<lang names(`$`(pi, Depends))>, <lang names(`$`(pi, Imports))>, <lang if(LinkingTo, names(`$`(pi, LinkingTo)))>, <sym sug>);
      goto L0(r109);
    L1(r112):
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L14() else L15();
    L8():
      pi16 = ld pi;
      pi17 = force? pi16;
      checkMissing(pi17);
      c32 = `is.object`(pi17);
      if c32 then L11() else L12(pi17);
    L9():
      r111 = dyn base11(<lang `$`(pi, Depends)>);
      goto L1(r111);
    L2(r116):
      LinkingTo1 = ld LinkingTo;
      LinkingTo2 = force? LinkingTo1;
      checkMissing(LinkingTo2);
      c34 = `as.logical`(LinkingTo2);
      if c34 then L20() else L3();
    L10(dx21):
      names2 = ldf names in base;
      r114 = dyn names2(dx21);
      goto L1(r114);
    L11():
      dr16 = tryDispatchBuiltin.1("$", pi17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L13() else L12(dr16);
    L12(pi19):
      r113 = `$`(pi19, <sym Depends>);
      goto L10(r113);
    L14():
      pi20 = ld pi;
      pi21 = force? pi20;
      checkMissing(pi21);
      c33 = `is.object`(pi21);
      if c33 then L17() else L18(pi21);
    L15():
      r115 = dyn base12(<lang `$`(pi, Imports)>);
      goto L2(r115);
    L3():
      goto L5(NULL);
    L5(r123):
      sug6 = ld sug;
      sug7 = force? sug6;
      checkMissing(sug7);
      c36 = ldf c in base;
      r124 = dyn c36(r112, r116, r123, sug7);
      goto L0(r124);
    L13():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L10(dx20);
    L16(dx23):
      names3 = ldf names in base;
      r118 = dyn names3(dx23);
      goto L2(r118);
    L17():
      dr18 = tryDispatchBuiltin.1("$", pi21);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L19() else L18(dr18);
    L18(pi23):
      r117 = `$`(pi23, <sym Imports>);
      goto L16(r117);
    L20():
      sym13 = ldf names;
      base13 = ldf names in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L21() else L22();
    L4(r120):
      goto L5(r120);
    L19():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L16(dx22);
    L21():
      pi24 = ld pi;
      pi25 = force? pi24;
      checkMissing(pi25);
      c35 = `is.object`(pi25);
      if c35 then L24() else L25(pi25);
    L22():
      r119 = dyn base13(<lang `$`(pi, LinkingTo)>);
      goto L4(r119);
    L23(dx25):
      names4 = ldf names in base;
      r122 = dyn names4(dx25);
      goto L4(r122);
    L24():
      dr20 = tryDispatchBuiltin.1("$", pi25);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L26() else L25(dr20);
    L25(pi27):
      r121 = `$`(pi27, <sym LinkingTo>);
      goto L23(r121);
    L26():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L23(dx24);
    };
    r126 = dyn unique1(p30);
    check L185() else D62();
  D18():
    deopt 57 [];
  D42():
    deopt 141 [pi4];
  D45():
    deopt 149 [r82];
  D62():
    deopt 192 [r126];
  L109():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L106(dx8);
  L110():
    p6 = prom<V +>{
      thispkg = ld thispkg;
      thispkg1 = force? thispkg;
      checkMissing(thispkg1);
      return thispkg1;
    };
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      c14 = ldf c in base;
      r31 = dyn c14("MASS", "Rcpp");
      goto L0(r31);
    L2():
      r29 = dyn base1("MASS", "Rcpp");
      goto L0(r29);
    };
    r33 = dyn _in_(p6, p7);
    check L111() else D19();
  L152():
    pi5 = force? pi4;
    checkMissing(pi5);
    c24 = `is.object`(pi5);
    if c24 then L154() else L155(pi5);
  L160():
    st VB = r82;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L161() else L162();
  L185():
    st deps = r126;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L186() else L187();
  D19():
    deopt 60 [r33];
  L28(r84):
    c27 = `as.logical`(r84);
    if c27 then L165() else L29();
  L33(r128):
    c37 = `as.logical`(r128);
    if c37 then L190() else L34(c37);
  L111():
    c15 = `as.logical`(r33);
    if c15 then L112() else L12();
  L153(dx11):
    names = ldf names in base;
    r77 = dyn names(dx11);
    check L157() else D43();
  L154():
    dr8 = tryDispatchBuiltin.1("$", pi5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L156() else L155(dr8);
  L155(pi7):
    r76 = `$`(pi7, <sym Suggests>);
    goto L153(r76);
  L161():
    VB = ld VB;
    check L163() else D46();
  L162():
    r83 = dyn base6(<sym VB>);
    goto L28(r83);
  L186():
    libdir1 = ld libdir;
    check L188() else D63();
  L187():
    r127 = dyn base14(<sym libdir>);
    goto L33(r127);
  D43():
    deopt 145 [r77];
  D46():
    deopt 153 [VB];
  D63():
    deopt 196 [libdir1];
  L12():
    goto L14();
  L14():
    _in_1 = ldf `%in%`;
    check L118() else D22();
  L29():
    unlist = ldf unlist;
    check L169() else D50();
  L30(r87):
    st sug = r87;
    tests1 = ld tests;
    check L174() else D55();
  L34(c39):
    c43 = `as.logical`(c39);
    if c43 then L193() else L35();
  L112():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L113() else L114();
  L156():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L153(dx10);
  L157():
    goto L26(r77);
  L163():
    VB1 = force? VB;
    checkMissing(VB1);
    is_na = ldf `is.na` in base;
    r85 = dyn is_na(VB1);
    check L164() else D47();
  L165():
    character = ldf character;
    check L166() else D48();
  L188():
    libdir2 = force? libdir1;
    checkMissing(libdir2);
    length = ldf length in base;
    r129 = dyn length(libdir2);
    check L189() else D64();
  L190():
    self3 = ld self2;
    check L191() else D65();
  D22():
    deopt 73 [];
  D47():
    deopt 156 [r85];
  D48():
    deopt 158 [];
  D50():
    deopt 161 [];
  D55():
    deopt 173 [tests1];
  D64():
    deopt 199 [r129];
  D65():
    deopt 200 [c37, self3];
  L13(r35):
    st exceptions = r35;
    goto L14();
  L35():
    goto L36();
  L36():
    _libPaths = ldf `.libPaths`;
    check L197() else D68();
  L113():
    exceptions = ld exceptions;
    check L115() else D20();
  L114():
    r34 = dyn base2(<sym exceptions>, "Matrix", "lattice");
    goto L13(r34);
  L118():
    p8 = prom<V +>{
      thispkg2 = ld thispkg;
      thispkg3 = force? thispkg2;
      checkMissing(thispkg3);
      return thispkg3;
    };
    p9 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c17 = ldf c in base;
      r41 = dyn c17("Modalclust", "aroma.core", "iWebPlots", "openair", "oce", "pcalg", "tileHMM");
      goto L0(r41);
    L2():
      r39 = dyn base3("Modalclust", "aroma.core", "iWebPlots", "openair", "oce", "pcalg", "tileHMM");
      goto L0(r39);
    };
    r43 = dyn _in_1(p8, p9);
    check L119() else D23();
  L164():
    goto L28(r85);
  L166():
    r86 = dyn character();
    check L167() else D49();
  L169():
    p25 = prom<V +>{
      strsplit = ldf strsplit;
      p24 = prom<V +>{
        VB2 = ld VB;
        VB3 = force? VB2;
        checkMissing(VB3);
        return VB3;
      };
      r89 = dyn strsplit(p24, ",");
      return r89;
    };
    r91 = dyn unlist(p25);
    check L170() else D51();
  L174():
    tests2 = force? tests1;
    checkMissing(tests2);
    c28 = `as.logical`(tests2);
    if c28 then L175() else L31();
  L189():
    goto L33(r129);
  L191():
    self4 = force? self3;
    checkMissing(self4);
    c40 = `as.logical`(self4);
    c41 = `&&`(c37, c40);
    goto L34(c41);
  L193():
    flink = ldf flink;
    check L194() else D66();
  D20():
    deopt 63 [exceptions];
  D23():
    deopt 76 [r43];
  D49():
    deopt 159 [r86];
  D51():
    deopt 163 [r91];
  D66():
    deopt 204 [];
  D68():
    deopt 211 [];
  L31():
    sug4 = ld sug;
    check L183() else D60();
  L115():
    exceptions1 = force? exceptions;
    checkMissing(exceptions1);
    c16 = ldf c in base;
    r36 = dyn c16(exceptions1, "Matrix", "lattice");
    check L116() else D21();
  L119():
    c18 = `as.logical`(r43);
    if c18 then L120() else L15();
  L167():
    goto L30(r86);
  L170():
    st VB = r91;
    unique = ldf unique;
    check L171() else D52();
  L175():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L176() else L177();
  L194():
    p33 = prom<V +>{
      file_path4 = ldf `file.path`;
      p31 = prom<V +>{
        libdir3 = ld libdir;
        libdir4 = force? libdir3;
        checkMissing(libdir4);
        return libdir4;
      };
      p32 = prom<V +>{
        thispkg6 = ld thispkg;
        thispkg7 = force? thispkg6;
        checkMissing(thispkg7);
        return thispkg7;
      };
      r132 = dyn file_path4(p31, p32);
      return r132;
    };
    p34 = prom<V +>{
      tmplib4 = ld tmplib;
      tmplib5 = force? tmplib4;
      checkMissing(tmplib5);
      return tmplib5;
    };
    r135 = dyn flink(p33, p34);
    check L195() else D67();
  L197():
    r137 = dyn _libPaths();
    check L198() else D69();
  D21():
    deopt 68 [r36];
  D52():
    deopt 166 [];
  D60():
    deopt 186 [sug4];
  D67():
    deopt 207 [r135];
  D69():
    deopt 212 [r137];
  L15():
    goto L17();
  L17():
    _w_o_ = ldf `%w/o%`;
    check L126() else D26();
  L32(r97):
    goto L27(r97);
  L116():
    goto L13(r36);
  L120():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L121() else L122();
  L171():
    p27 = prom<V +>{
      gsub = ldf gsub;
      p26 = prom<V +>{
        VB4 = ld VB;
        VB5 = force? VB4;
        checkMissing(VB5);
        return VB5;
      };
      r93 = dyn gsub("[[:space:]]", "", p26);
      return r93;
    };
    r95 = dyn unique(p27);
    check L172() else D53();
  L176():
    sug2 = ld sug;
    check L178() else D56();
  L177():
    r96 = dyn base7(<sym sug>, <lang intersect(names(`$`(pi, Suggests)), c("RUnit", "testthat", "tinytest"))>);
    goto L32(r96);
  L183():
    sug5 = force? sug4;
    checkMissing(sug5);
    goto L27(sug5);
  L195():
    goto L36();
  L198():
    st lp = r137;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L199() else L200();
  D26():
    deopt 88 [];
  D53():
    deopt 168 [r95];
  D56():
    deopt 177 [sug2];
  L16(r45):
    st exceptions = r45;
    goto L17();
  L37(r139):
    st poss = r139;
    thispkg8 = ld thispkg;
    check L211() else D75();
  L121():
    exceptions2 = ld exceptions;
    check L123() else D24();
  L122():
    r44 = dyn base4(<sym exceptions>, "KernSmooth");
    goto L16(r44);
  L126():
    p10 = prom<V +>{
      recommended = ld recommended;
      recommended1 = force? recommended;
      checkMissing(recommended1);
      return recommended1;
    };
    p11 = prom<V +>{
      exceptions4 = ld exceptions;
      exceptions5 = force? exceptions4;
      checkMissing(exceptions5);
      return exceptions5;
    };
    r50 = dyn _w_o_(p10, p11);
    check L127() else D27();
  L172():
    st sug = r95;
    sug = ld sug;
    check L173() else D54();
  L178():
    sug3 = force? sug2;
    checkMissing(sug3);
    intersect = ldf intersect;
    check L179() else D57();
  L199():
    lp = ld lp;
    check L201() else D70();
  L200():
    r138 = dyn base15(<lang `[`(lp, length(lp))>, <sym .Library>);
    goto L37(r138);
  D24():
    deopt 79 [exceptions2];
  D27():
    deopt 91 [r50];
  D54():
    deopt 170 [sug];
  D57():
    deopt 180 [];
  D70():
    deopt 216 [lp];
  D75():
    deopt 230 [thispkg8];
  L123():
    exceptions3 = force? exceptions2;
    checkMissing(exceptions3);
    c19 = ldf c in base;
    r46 = dyn c19(exceptions3, "KernSmooth");
    check L124() else D25();
  L127():
    st recommended = r50;
    recommended2 = ld recommended;
    check L128() else D28();
  L173():
    sug1 = force? sug;
    checkMissing(sug1);
    goto L30(sug1);
  L179():
    p28 = prom<V +>{
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r99):
      return r99;
    L1():
      pi12 = ld pi;
      pi13 = force? pi12;
      checkMissing(pi13);
      c29 = `is.object`(pi13);
      if c29 then L4() else L5(pi13);
    L2():
      r98 = dyn base8(<lang `$`(pi, Suggests)>);
      goto L0(r98);
    L3(dx19):
      names1 = ldf names in base;
      r101 = dyn names1(dx19);
      goto L0(r101);
    L4():
      dr14 = tryDispatchBuiltin.1("$", pi13);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L6() else L5(dr14);
    L5(pi15):
      r100 = `$`(pi15, <sym Suggests>);
      goto L3(r100);
    L6():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L3(dx18);
    };
    p29 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r104):
      return r104;
    L1():
      c30 = ldf c in base;
      r105 = dyn c30("RUnit", "testthat", "tinytest");
      goto L0(r105);
    L2():
      r103 = dyn base9("RUnit", "testthat", "tinytest");
      goto L0(r103);
    };
    r107 = dyn intersect(p28, p29);
    check L180() else D58();
  L201():
    lp1 = force? lp;
    checkMissing(lp1);
    c44 = `is.object`(lp1);
    if c44 then L202() else L203(lp1);
  L211():
    thispkg9 = force? thispkg8;
    checkMissing(thispkg9);
    st already = thispkg9;
    unique2 = ldf unique;
    check L212() else D76();
  D25():
    deopt 83 [r46];
  D28():
    deopt 93 [recommended2];
  D58():
    deopt 183 [r107];
  D76():
    deopt 234 [];
  L38(dx27):
    _Library2 = ld `.Library`;
    check L209() else D73();
  L124():
    goto L16(r46);
  L128():
    recommended3 = force? recommended2;
    checkMissing(recommended3);
    s = toForSeq(recommended3);
    l = length(s);
    i = 0;
    goto L18(i);
  L180():
    c31 = ldf c in base;
    r108 = dyn c31(sug3, r107);
    check L181() else D59();
  L202():
    dr22 = tryDispatchBuiltin.1("[", lp1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L204() else L203(dr22);
  L203(lp3):
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L205() else L206();
  L212():
    p37 = prom<V +>{
      _w_o_1 = ldf `%w/o%`;
      p35 = prom<V +>{
        deps = ld deps;
        deps1 = force? deps;
        checkMissing(deps1);
        return deps1;
      };
      p36 = prom<V +>{
        already = ld already;
        already1 = force? already;
        checkMissing(already1);
        return already1;
      };
      r147 = dyn _w_o_1(p35, p36);
      return r147;
    };
    r149 = dyn unique2(p37);
    check L213() else D77();
  D59():
    deopt 185 [r108];
  D73():
    deopt 225 [_Library2];
  D77():
    deopt 236 [r149];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c20 = `<`.1(l, i2);
    if c20 then L129() else L23();
  L39(lp6, r141):
    __2 = ldf `[` in base;
    r143 = dyn __2(lp6, r141);
    goto L38(r143);
  L181():
    goto L32(r108);
  L204():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L38(dx26);
  L205():
    lp7 = ld lp;
    check L207() else D71();
  L206():
    r140 = dyn base16(<sym lp>);
    goto L39(lp3, r140);
  L209():
    _Library3 = force? _Library2;
    checkMissing(_Library3);
    c45 = ldf c in base;
    r144 = dyn c45(dx27, _Library3);
    check L210() else D74();
  L213():
    st more = r149;
    goto L67();
  D71():
    deopt 220 [lp3, lp7];
  D74():
    deopt 228 [r144];
  L23():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    pkg = ld pkg;
    check L130() else D29();
  L67():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L214() else L215();
  L129():
    goto L24();
  L207():
    lp8 = force? lp7;
    checkMissing(lp8);
    length1 = ldf length in base;
    r142 = dyn length1(lp8);
    check L208() else D72();
  L210():
    goto L37(r144);
  D29():
    deopt 95 [i2, pkg];
  D72():
    deopt 223 [lp3, r142];
  L40(r151):
    c46 = `as.logical`(r151);
    if c46 then L218() else L41();
  L130():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    thispkg4 = ld thispkg;
    check L131() else D30();
  L208():
    goto L39(lp3, r142);
  L214():
    more = ld more;
    check L216() else D78();
  L215():
    r150 = dyn base17(<sym more>);
    goto L40(r150);
  D30():
    deopt 96 [i2, pkg1, thispkg4];
  D78():
    deopt 240 [more];
  L41():
    self5 = ld self;
    check L309() else D125();
  L131():
    thispkg5 = force? thispkg4;
    checkMissing(thispkg5);
    r51 = `==`(pkg1, thispkg5);
    c21 = `as.logical`(r51);
    if c21 then L132() else L19();
  L216():
    more1 = force? more;
    checkMissing(more1);
    length2 = ldf length in base;
    r152 = dyn length2(more1);
    check L217() else D79();
  L218():
    more2 = ld more;
    check L219() else D80();
  D79():
    deopt 243 [r152];
  D80():
    deopt 244 [more2];
  D125():
    deopt 394 [self5];
  L19():
    dir_create1 = ldf `dir.create`;
    check L135() else D31();
  L132():
    goto L18(i2);
  L217():
    goto L40(r152);
  L219():
    more3 = force? more2;
    checkMissing(more3);
    st m0 = more3;
    character1 = ldf character;
    check L220() else D81();
  L309():
    self6 = force? self5;
    checkMissing(self6);
    c63 = `as.logical`(self6);
    if c63 then L310() else L68();
  D31():
    deopt 104 [i2];
  D81():
    deopt 248 [];
  L68():
    goto L69();
  L69():
    tmplib12 = ld tmplib;
    check L314() else D128();
  L135():
    p14 = prom<V +>{
      file_path1 = ldf `file.path`;
      p12 = prom<V +>{
        tmplib2 = ld tmplib;
        tmplib3 = force? tmplib2;
        checkMissing(tmplib3);
        return tmplib3;
      };
      p13 = prom<V +>{
        pkg2 = ld pkg;
        pkg3 = force? pkg2;
        checkMissing(pkg3);
        return pkg3;
      };
      r55 = dyn file_path1(p12, p13);
      st pd = r55;
      invisible.0();
      return r55;
    };
    r57 = dyn dir_create1(p14);
    check L136() else D32();
  L220():
    r153 = dyn character1();
    check L221() else D82();
  L310():
    flink2 = ldf flink;
    check L311() else D126();
  D32():
    deopt 106 [i2, r57];
  D82():
    deopt 249 [r153];
  D126():
    deopt 397 [];
  D128():
    deopt 403 [tmplib12];
  L136():
    file_path2 = ldf `file.path`;
    check L137() else D33();
  L221():
    st more = r153;
    m0 = ld m0;
    check L222() else D83();
  L311():
    p64 = prom<V +>{
      normalizePath = ldf normalizePath;
      p63 = prom<V +>{
        pkgdir3 = ld pkgdir;
        pkgdir4 = force? pkgdir3;
        checkMissing(pkgdir4);
        return pkgdir4;
      };
      r236 = dyn normalizePath(p63);
      return r236;
    };
    p65 = prom<V +>{
      tmplib10 = ld tmplib;
      tmplib11 = force? tmplib10;
      checkMissing(tmplib11);
      return tmplib11;
    };
    r239 = dyn flink2(p64, p65);
    check L312() else D127();
  L314():
    tmplib13 = force? tmplib12;
    checkMissing(tmplib13);
    st rlibs = tmplib13;
    sym25 = ldf nzchar;
    base25 = ldf nzchar in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L315() else L316();
  D33():
    deopt 108 [i2];
  D83():
    deopt 251 [m0];
  D127():
    deopt 400 [r239];
  L70(r242):
    c64 = `as.logical`(r242);
    if c64 then L319() else L71();
  L137():
    p15 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    p16 = prom<V +>{
      pkg4 = ld pkg;
      pkg5 = force? pkg4;
      checkMissing(pkg5);
      return pkg5;
    };
    r60 = dyn file_path2(p15, p16, "DESCRIPTION");
    check L138() else D34();
  L222():
    m1 = force? m0;
    checkMissing(m1);
    s1 = toForSeq(m1);
    l1 = length(s1);
    i13 = 0;
    goto L42(i13);
  L312():
    goto L69();
  L315():
    lib1 = ld lib0;
    check L317() else D129();
  L316():
    r241 = dyn base25(<sym lib0>);
    goto L70(r241);
  D34():
    deopt 112 [i2, r60];
  D129():
    deopt 408 [lib1];
  L42(i14):
    i15 = `+`.1(i14, 1);
    c47 = `<`.1(l1, i15);
    if c47 then L223() else L65();
  L71():
    goto L73();
  L73():
    paste = ldf paste;
    check L326() else D134();
  L138():
    st f = r60;
    file_exists = ldf `file.exists`;
    check L139() else D35();
  L317():
    lib2 = force? lib1;
    checkMissing(lib2);
    nzchar1 = ldf nzchar in base;
    r243 = dyn nzchar1(lib2);
    check L318() else D130();
  L319():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L320() else L321();
  D35():
    deopt 115 [i2];
  D130():
    deopt 411 [r243];
  D134():
    deopt 424 [];
  L65():
    x1 = `[[`(s1, i15, NULL, TRUE);
    st pkg = x1;
    test_recommended2 = ld test_recommended;
    check L224() else D84();
  L72(r245):
    st rlibs = r245;
    goto L73();
  L139():
    p17 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r62 = dyn file_exists(p17);
    check L140() else D36();
  L223():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L301() else L302();
  L318():
    goto L70(r243);
  L320():
    lib3 = ld lib0;
    check L322() else D131();
  L321():
    r244 = dyn base26(<sym lib0>, <sym rlibs>);
    goto L72(r244);
  L326():
    p66 = prom<V +>{
      rlibs2 = ld rlibs;
      rlibs3 = force? rlibs2;
      checkMissing(rlibs3);
      return rlibs3;
    };
    p67 = prom<V +>{
      _Platform4 = ld `.Platform`;
      _Platform5 = force? _Platform4;
      checkMissing(_Platform5);
      c66 = `is.object`(_Platform5);
      if c66 then L1() else L2(_Platform5);
    L0(dx35):
      return dx35;
    L1():
      dr30 = tryDispatchBuiltin.1("$", _Platform5);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(_Platform7):
      r249 = `$`(_Platform7, <sym path.sep>);
      goto L0(r249);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx34);
    };
    r251 = dyn paste[, collapse](p66, p67);
    check L327() else D135();
  D36():
    deopt 117 [i2, r62];
  D84():
    deopt 253 [i15, test_recommended2];
  D131():
    deopt 414 [lib3];
  D135():
    deopt 428 [r251];
  L66(r228):
    st already = r228;
    unique3 = ldf unique;
    check L306() else D123();
  L140():
    c22 = `as.logical`(r62);
    if c22 then L141() else L21();
  L224():
    test_recommended3 = force? test_recommended2;
    checkMissing(test_recommended3);
    c48 = `as.logical`(test_recommended3);
    if c48 then L225() else L43();
  L301():
    already2 = ld already;
    check L303() else D120();
  L302():
    r227 = dyn base24(<sym already>, <sym m0>);
    goto L66(r227);
  L322():
    lib4 = force? lib3;
    checkMissing(lib4);
    rlibs = ld rlibs;
    check L323() else D132();
  L327():
    st rlibs = r251;
    quote1 = ld quote;
    check L328() else D136();
  D120():
    deopt 379 [already2];
  D123():
    deopt 387 [];
  D132():
    deopt 416 [rlibs];
  D136():
    deopt 430 [quote1];
  L21():
    goto L22(i2);
  L22(i11):
    close = ldf close;
    check L145() else D39();
  L43():
    goto L54(i15);
  L54(i35):
    find_package = ldf `find.package`;
    check L253() else D101();
  L141():
    file_copy = ldf `file.copy`;
    check L142() else D37();
  L225():
    _in_2 = ldf `%in%`;
    check L226() else D85();
  L303():
    already3 = force? already2;
    checkMissing(already3);
    m2 = ld m0;
    check L304() else D121();
  L306():
    p62 = prom<V +>{
      _w_o_6 = ldf `%w/o%`;
      p60 = prom<V +>{
        more6 = ld more;
        more7 = force? more6;
        checkMissing(more7);
        return more7;
      };
      p61 = prom<V +>{
        already4 = ld already;
        already5 = force? already4;
        checkMissing(already5);
        return already5;
      };
      r232 = dyn _w_o_6(p60, p61);
      return r232;
    };
    r234 = dyn unique3(p62);
    check L307() else D124();
  L323():
    rlibs1 = force? rlibs;
    checkMissing(rlibs1);
    c65 = ldf c in base;
    r246 = dyn c65(lib4, rlibs1);
    check L324() else D133();
  L328():
    quote2 = force? quote1;
    checkMissing(quote2);
    c67 = `as.logical`(quote2);
    if c67 then L329() else L74();
  D37():
    deopt 119 [i2];
  D39():
    deopt 126 [i11];
  D85():
    deopt 256 [i15];
  D101():
    deopt 310 [i35];
  D121():
    deopt 381 [m2];
  D124():
    deopt 389 [r234];
  D133():
    deopt 419 [r246];
  L74():
    goto L75();
  L75():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L333() else L334();
  L142():
    p18 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p19 = prom<V +>{
      pd = ld pd;
      pd1 = force? pd;
      checkMissing(pd1);
      return pd1;
    };
    r65 = dyn file_copy(p18, p19);
    check L143() else D38();
  L145():
    p22 = prom<V +>{
      file = ldf file;
      p21 = prom<V +>{
        file_path3 = ldf `file.path`;
        p20 = prom<V +>{
          pd2 = ld pd;
          pd3 = force? pd2;
          checkMissing(pd3);
          return pd3;
        };
        r68 = dyn file_path3(p20, "dummy_for_check");
        return r68;
      };
      r70 = dyn file(p21, "w");
      return r70;
    };
    r72 = dyn close(p22);
    check L146() else D40();
  L226():
    p38 = prom<V +>{
      pkg6 = ld pkg;
      pkg7 = force? pkg6;
      checkMissing(pkg7);
      return pkg7;
    };
    p39 = prom<V +>{
      recommended4 = ld recommended;
      recommended5 = force? recommended4;
      checkMissing(recommended5);
      return recommended5;
    };
    r156 = dyn _in_2(p38, p39);
    check L227() else D86();
  L253():
    p52 = prom<V +>{
      pkg18 = ld pkg;
      pkg19 = force? pkg18;
      checkMissing(pkg19);
      return pkg19;
    };
    r193 = dyn find_package[, quiet](p52, TRUE);
    check L254() else D102();
  L304():
    m3 = force? m2;
    checkMissing(m3);
    c62 = ldf c in base;
    r229 = dyn c62(already3, m3);
    check L305() else D122();
  L307():
    st more = r234;
    goto L67();
  L324():
    goto L72(r246);
  L329():
    shQuote = ldf shQuote;
    check L330() else D137();
  D38():
    deopt 122 [i2, r65];
  D40():
    deopt 128 [i11, r72];
  D86():
    deopt 259 [i15, r156];
  D102():
    deopt 314 [i35, r193];
  D122():
    deopt 384 [r229];
  D137():
    deopt 433 [];
  L76(r256):
    popenv;
    return r256;
  L143():
    goto L22(i2);
  L146():
    goto L18(i11);
  L227():
    c49 = `as.logical`(r156);
    if c49 then L228() else L44();
  L254():
    st where = r193;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L255() else L256();
  L305():
    goto L66(r229);
  L330():
    p68 = prom<V +>{
      rlibs4 = ld rlibs;
      rlibs5 = force? rlibs4;
      checkMissing(rlibs5);
      return rlibs5;
    };
    r253 = dyn shQuote(p68);
    check L331() else D138();
  L333():
    paste1 = ldf paste0;
    check L335() else D139();
  L334():
    r255 = dyn base27(<lang paste0("R_LIBS=", rlibs)>, <lang if(WINDOWS, "R_ENVIRON_USER='no_such_file'", "R_ENVIRON_USER=''")>, "R_LIBS_USER='NULL'", "R_LIBS_SITE='NULL'");
    goto L76(r255);
  D138():
    deopt 435 [r253];
  D139():
    deopt 442 [];
  L44():
    goto L45(i15);
  L45(i22):
    pkg10 = ld pkg;
    check L232() else D89();
  L55(i38, r195):
    c55 = `as.logical`(r195);
    if c55 then L259() else L56();
  L228():
    unlink = ldf unlink;
    check L229() else D87();
  L255():
    where = ld where;
    check L257() else D103();
  L256():
    r194 = dyn base19(<sym where>);
    goto L55(i35, r194);
  L331():
    st rlibs = r253;
    goto L75();
  L335():
    p69 = prom<V +>{
      rlibs6 = ld rlibs;
      rlibs7 = force? rlibs6;
      checkMissing(rlibs7);
      return rlibs7;
    };
    r258 = dyn paste1("R_LIBS=", p69);
    check L336() else D140();
  D87():
    deopt 261 [i15];
  D89():
    deopt 267 [i22, pkg10];
  D103():
    deopt 318 [i35, where];
  D140():
    deopt 445 [r258];
  L56():
    goto L64(i38);
  L64(i71):
    goto L42(i71);
  L229():
    p42 = prom<V +>{
      file_path5 = ldf `file.path`;
      p40 = prom<V +>{
        tmplib6 = ld tmplib;
        tmplib7 = force? tmplib6;
        checkMissing(tmplib7);
        return tmplib7;
      };
      p41 = prom<V +>{
        pkg8 = ld pkg;
        pkg9 = force? pkg8;
        checkMissing(pkg9);
        return pkg9;
      };
      r159 = dyn file_path5(p40, p41);
      return r159;
    };
    r161 = dyn unlink(p42, TRUE);
    check L230() else D88();
  L232():
    pkg11 = force? pkg10;
    checkMissing(pkg11);
    r163 = `==`(pkg11, "mgcv");
    c50 = `as.logical`(r163);
    if c50 then L233() else L46();
  L257():
    where1 = force? where;
    checkMissing(where1);
    length3 = ldf length in base;
    r196 = dyn length3(where1);
    check L258() else D104();
  L259():
    _notin_ = ldf `%notin%`;
    check L260() else D105();
  L336():
    WINDOWS2 = ld WINDOWS;
    check L337() else D141();
  D88():
    deopt 264 [i15, r161];
  D104():
    deopt 321 [i35, r196];
  D105():
    deopt 323 [i38];
  D141():
    deopt 446 [WINDOWS2];
  L46():
    goto L47(i22);
  L47(i25):
    pkg12 = ld pkg;
    check L237() else D92();
  L230():
    goto L45(i15);
  L233():
    unlink_dummies = ldf unlink_dummies;
    check L234() else D90();
  L258():
    goto L55(i35, r196);
  L260():
    p54 = prom<V +>{
      dirname = ldf dirname;
      p53 = prom<V +>{
        where2 = ld where;
        where3 = force? where2;
        checkMissing(where3);
        return where3;
      };
      r198 = dyn dirname(p53);
      return r198;
    };
    p55 = prom<V +>{
      poss = ld poss;
      poss1 = force? poss;
      checkMissing(poss1);
      return poss1;
    };
    r201 = dyn _notin_(p54, p55);
    check L261() else D106();
  L337():
    WINDOWS3 = force? WINDOWS2;
    checkMissing(WINDOWS3);
    c68 = `as.logical`(WINDOWS3);
    if c68 then L338() else L77();
  D90():
    deopt 272 [i22];
  D92():
    deopt 277 [i25, pkg12];
  D106():
    deopt 326 [i38, r201];
  L77():
    goto L78("R_ENVIRON_USER=''");
  L78(r259):
    c69 = ldf c in base;
    r260 = dyn c69(r258, r259, "R_LIBS_USER='NULL'", "R_LIBS_SITE='NULL'");
    check L340() else D142();
  L234():
    p45 = prom<V +>{
      _w_o_2 = ldf `%w/o%`;
      p43 = prom<V +>{
        sym18 = ldf c;
        base18 = ldf c in base;
        guard18 = `==`.4(sym18, base18);
        if guard18 then L1() else L2();
      L0(r165):
        return r165;
      L1():
        c51 = ldf c in base;
        r166 = dyn c51("Matrix", "lattice", "nlme");
        goto L0(r166);
      L2():
        r164 = dyn base18("Matrix", "lattice", "nlme");
        goto L0(r164);
      };
      p44 = prom<V +>{
        thispkg10 = ld thispkg;
        thispkg11 = force? thispkg10;
        checkMissing(thispkg11);
        return thispkg11;
      };
      r169 = dyn _w_o_2(p43, p44);
      return r169;
    };
    r171 = dyn unlink_dummies(p45);
    check L235() else D91();
  L237():
    pkg13 = force? pkg12;
    checkMissing(pkg13);
    r173 = `==`(pkg13, "Matrix");
    c52 = `as.logical`(r173);
    if c52 then L238() else L48();
  L261():
    c56 = `as.logical`(r201);
    if c56 then L262() else L57();
  L338():
    goto L78("R_ENVIRON_USER='no_such_file'");
  D91():
    deopt 274 [i22, r171];
  D142():
    deopt 455 [r260];
  L48():
    goto L49(i25);
  L49(i28):
    pkg14 = ld pkg;
    check L242() else D95();
  L57():
    test_recommended4 = ld test_recommended;
    check L266() else D109();
  L58(i43):
    readRDS = ldf readRDS;
    check L270() else D110();
  L235():
    goto L47(i22);
  L238():
    unlink_dummies1 = ldf unlink_dummies;
    check L239() else D93();
  L262():
    flink1 = ldf flink;
    check L263() else D107();
  L340():
    goto L76(r260);
  D93():
    deopt 282 [i25];
  D95():
    deopt 287 [i28, pkg14];
  D107():
    deopt 328 [i38];
  D109():
    deopt 332 [i38, test_recommended4];
  D110():
    deopt 340 [i43];
  L239():
    p47 = prom<V +>{
      _w_o_3 = ldf `%w/o%`;
      p46 = prom<V +>{
        thispkg12 = ld thispkg;
        thispkg13 = force? thispkg12;
        checkMissing(thispkg13);
        return thispkg13;
      };
      r175 = dyn _w_o_3("lattice", p46);
      return r175;
    };
    r177 = dyn unlink_dummies1(p47);
    check L240() else D94();
  L242():
    pkg15 = force? pkg14;
    checkMissing(pkg15);
    r179 = `==`(pkg15, "class");
    c53 = `as.logical`(r179);
    if c53 then L243() else L50();
  L263():
    p56 = prom<V +>{
      where4 = ld where;
      where5 = force? where4;
      checkMissing(where5);
      return where5;
    };
    p57 = prom<V +>{
      tmplib8 = ld tmplib;
      tmplib9 = force? tmplib8;
      checkMissing(tmplib9);
      return tmplib9;
    };
    r204 = dyn flink1(p56, p57);
    check L264() else D108();
  L266():
    test_recommended5 = force? test_recommended4;
    checkMissing(test_recommended5);
    r206 = `!`(test_recommended5);
    c57 = `as.logical`(r206);
    if c57 then L267() else L59();
  L270():
    p59 = prom<V +>{
      file_path6 = ldf `file.path`;
      p58 = prom<V +>{
        where6 = ld where;
        where7 = force? where6;
        checkMissing(where7);
        return where7;
      };
      r208 = dyn file_path6(p58, "Meta", "package.rds");
      return r208;
    };
    r210 = dyn readRDS(p59);
    check L271() else D111();
  D94():
    deopt 284 [i25, r177];
  D108():
    deopt 331 [i38, r204];
  D111():
    deopt 342 [i43, r210];
  L50():
    goto L51(i28);
  L51(i31):
    pkg16 = ld pkg;
    check L247() else D98();
  L59():
    goto L58(i38);
  L240():
    goto L49(i25);
  L243():
    unlink_dummies2 = ldf unlink_dummies;
    check L244() else D96();
  L264():
    goto L58(i38);
  L267():
    goto L42(i38);
  L271():
    st pi = r210;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L272() else L273();
  D96():
    deopt 292 [i28];
  D98():
    deopt 297 [i31, pkg16];
  L60(i49, r212):
    st more = r212;
    goto L64(i49);
  L244():
    p49 = prom<V +>{
      _w_o_4 = ldf `%w/o%`;
      p48 = prom<V +>{
        thispkg14 = ld thispkg;
        thispkg15 = force? thispkg14;
        checkMissing(thispkg15);
        return thispkg15;
      };
      r181 = dyn _w_o_4("MASS", p48);
      return r181;
    };
    r183 = dyn unlink_dummies2(p49);
    check L245() else D97();
  L247():
    pkg17 = force? pkg16;
    checkMissing(pkg17);
    r185 = `==`(pkg17, "nlme");
    c54 = `as.logical`(r185);
    if c54 then L248() else L52();
  L272():
    more4 = ld more;
    check L274() else D112();
  L273():
    r211 = dyn base20(<sym more>, <lang names(`$`(pi, Depends))>, <lang names(`$`(pi, Imports))>, <lang names(`$`(pi, LinkingTo))>);
    goto L60(i43, r211);
  D97():
    deopt 294 [i28, r183];
  D112():
    deopt 346 [i43, more4];
  L52():
    goto L53(i31, NULL);
  L53(i34, r190):
    goto L54(i34);
  L245():
    goto L51(i28);
  L248():
    unlink_dummies3 = ldf unlink_dummies;
    check L249() else D99();
  L274():
    more5 = force? more4;
    checkMissing(more5);
    sym21 = ldf names;
    base21 = ldf names in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L275() else L276();
  D99():
    deopt 302 [i31];
  L61(i52, r214):
    sym22 = ldf names;
    base22 = ldf names in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L283() else L284();
  L249():
    p51 = prom<V +>{
      _w_o_5 = ldf `%w/o%`;
      p50 = prom<V +>{
        thispkg16 = ld thispkg;
        thispkg17 = force? thispkg16;
        checkMissing(thispkg17);
        return thispkg17;
      };
      r187 = dyn _w_o_5("lattice", p50);
      return r187;
    };
    r189 = dyn unlink_dummies3(p51);
    check L250() else D100();
  L275():
    pi28 = ld pi;
    check L277() else D113();
  L276():
    r213 = dyn base21(<lang `$`(pi, Depends)>);
    goto L61(i43, r213);
  D100():
    deopt 304 [i31, r189];
  D113():
    deopt 350 [i43, pi28];
  L62(i59, r218):
    sym23 = ldf names;
    base23 = ldf names in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L291() else L292();
  L250():
    goto L53(i31, r189);
  L277():
    pi29 = force? pi28;
    checkMissing(pi29);
    c58 = `is.object`(pi29);
    if c58 then L279() else L280(i43, pi29);
  L283():
    pi32 = ld pi;
    check L285() else D115();
  L284():
    r217 = dyn base22(<lang `$`(pi, Imports)>);
    goto L62(i52, r217);
  D115():
    deopt 357 [i52, pi32];
  L63(i66, r222):
    c61 = ldf c in base;
    r225 = dyn c61(more5, r214, r218, r222);
    check L299() else D119();
  L278(i56, dx29):
    names5 = ldf names in base;
    r216 = dyn names5(dx29);
    check L282() else D114();
  L279():
    dr24 = tryDispatchBuiltin.1("$", pi29);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L281() else L280(i43, dr24);
  L280(i54, pi31):
    r215 = `$`(pi31, <sym Depends>);
    goto L278(i54, r215);
  L285():
    pi33 = force? pi32;
    checkMissing(pi33);
    c59 = `is.object`(pi33);
    if c59 then L287() else L288(i52, pi33);
  L291():
    pi36 = ld pi;
    check L293() else D117();
  L292():
    r221 = dyn base23(<lang `$`(pi, LinkingTo)>);
    goto L63(i59, r221);
  D114():
    deopt 354 [i56, r216];
  D117():
    deopt 364 [i59, pi36];
  D119():
    deopt 370 [i66, r225];
  L281():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L278(i43, dx28);
  L282():
    goto L61(i56, r216);
  L286(i63, dx31):
    names6 = ldf names in base;
    r220 = dyn names6(dx31);
    check L290() else D116();
  L287():
    dr26 = tryDispatchBuiltin.1("$", pi33);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L289() else L288(i52, dr26);
  L288(i61, pi35):
    r219 = `$`(pi35, <sym Imports>);
    goto L286(i61, r219);
  L293():
    pi37 = force? pi36;
    checkMissing(pi37);
    c60 = `is.object`(pi37);
    if c60 then L295() else L296(i59, pi37);
  L299():
    goto L60(i66, r225);
  D116():
    deopt 361 [i63, r220];
  L289():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L286(i52, dx30);
  L290():
    goto L62(i63, r220);
  L294(i70, dx33):
    names7 = ldf names in base;
    r224 = dyn names7(dx33);
    check L298() else D118();
  L295():
    dr28 = tryDispatchBuiltin.1("$", pi37);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L297() else L296(i59, dr28);
  L296(i68, pi39):
    r223 = `$`(pi39, <sym LinkingTo>);
    goto L294(i68, r223);
  D118():
    deopt 368 [i70, r224];
  L297():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L294(i59, dx32);
  L298():
    goto L63(i70, r224);
  }
}
fun inner838351097(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:*, reg WINDOWS:*, reg WINDOWS1:V, reg c:L, reg useJunctions:*, reg useJunctions1:V, reg c1:L, reg Sys_junction:cls, reg from1:*, reg from2:V, reg p:p(V +), reg to1:*, reg to2:V, reg p1:p(V +), reg r2:V, reg file_exists:cls, reg file_path:cls, reg to3:*, reg to4:V, reg p2:p(V +), reg basename:cls, reg from3:*, reg from4:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg r9:V, reg c2:L, reg unlink:cls, reg file_path1:cls, reg to5:*, reg to6:V, reg p6:p(V +), reg basename1:cls, reg from5:*, reg from6:V, reg p7:p(V +), reg r14:V, reg p8:p(V +), reg r16:V, reg p9:p(V +), reg r18:V, reg file_copy:cls, reg from7:*, reg from8:V, reg p10:p(V +), reg to7:*, reg to8:V, reg p11:p(V +), reg r22:V, reg file_symlink:cls, reg from9:*, reg from10:V, reg p12:p(V +), reg to9:*, reg to10:V, reg p13:p(V +), reg r26:V, reg res:*, reg res1:V, reg r27:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg from11:*, reg from12:V, reg p14:p(V +), reg r29:V, reg p15:p(V +), reg r31:V |
    mkenv;
    st from = from;
    st to = to;
    WINDOWS = ld WINDOWS;
    check L7() else D0();
  D0():
    deopt 0 [WINDOWS];
  L7():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c = `as.logical`(WINDOWS1);
    if c then L8() else L0();
  L0():
    file_symlink = ldf `file.symlink`;
    check L24() else D10();
  L5():
    res = ld res;
    check L26() else D12();
  L8():
    useJunctions = ld useJunctions;
    check L9() else D1();
  D1():
    deopt 2 [useJunctions];
  D10():
    deopt 35 [];
  D12():
    deopt 40 [res];
  L9():
    useJunctions1 = force? useJunctions;
    checkMissing(useJunctions1);
    c1 = `as.logical`(useJunctions1);
    if c1 then L10() else L1();
  L24():
    p12 = prom<V +>{
      from9 = ld from;
      from10 = force? from9;
      checkMissing(from10);
      return from10;
    };
    p13 = prom<V +>{
      to9 = ld to;
      to10 = force? to9;
      checkMissing(to10);
      return to10;
    };
    r26 = dyn file_symlink(p12, p13);
    check L25() else D11();
  L26():
    res1 = force? res;
    checkMissing(res1);
    r27 = `!`(res1);
    c3 = `as.logical`(r27);
    if c3 then L27() else L6();
  D11():
    deopt 38 [r26];
  L1():
    goto L4();
  L4():
    file_copy = ldf `file.copy`;
    check L21() else D8();
  L6():
    invisible.0();
    popenv;
    return NULL;
  L10():
    Sys_junction = ldf `Sys.junction`;
    check L11() else D2();
  L25():
    st res = r26;
    goto L5();
  L27():
    stop = ldf stop;
    check L28() else D13();
  D2():
    deopt 5 [];
  D8():
    deopt 27 [];
  D13():
    deopt 44 [];
  L11():
    p = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      return from2;
    };
    p1 = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    r2 = dyn Sys_junction(p, p1);
    check L12() else D3();
  L21():
    p10 = prom<V +>{
      from7 = ld from;
      from8 = force? from7;
      checkMissing(from8);
      return from8;
    };
    p11 = prom<V +>{
      to7 = ld to;
      to8 = force? to7;
      checkMissing(to8);
      return to8;
    };
    r22 = dyn file_copy[, , recursive](p10, p11, TRUE);
    check L22() else D9();
  L28():
    p15 = prom<V +>{
      gettextf = ldf gettextf;
      p14 = prom<V +>{
        from11 = ld from;
        from12 = force? from11;
        checkMissing(from12);
        return from12;
      };
      r29 = dyn gettextf("cannot link from %s", p14);
      return r29;
    };
    r31 = dyn stop[, domain](p15, NA_LGL);
    check L29() else D14();
  D3():
    deopt 8 [r2];
  D9():
    deopt 32 [r22];
  D14():
    deopt 48 [r31];
  L12():
    file_exists = ldf `file.exists`;
    check L13() else D4();
  L22():
    st res = r22;
    goto L5();
  L29():
    popenv;
    return r31;
  D4():
    deopt 10 [];
  L13():
    p5 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        to3 = ld to;
        to4 = force? to3;
        checkMissing(to4);
        return to4;
      };
      p4 = prom<V +>{
        basename = ldf basename;
        p3 = prom<V +>{
          from3 = ld from;
          from4 = force? from3;
          checkMissing(from4);
          return from4;
        };
        r5 = dyn basename(p3);
        return r5;
      };
      r7 = dyn file_path(p2, p4, "DESCRIPTION");
      return r7;
    };
    r9 = dyn file_exists(p5);
    check L14() else D5();
  D5():
    deopt 12 [r9];
  L14():
    c2 = `as.logical`(r9);
    if c2 then L15() else L2();
  L2():
    unlink = ldf unlink;
    check L18() else D6();
  L15():
    popenv;
    return NULL;
  D6():
    deopt 19 [];
  L18():
    p9 = prom<V +>{
      file_path1 = ldf `file.path`;
      p6 = prom<V +>{
        to5 = ld to;
        to6 = force? to5;
        checkMissing(to6);
        return to6;
      };
      p8 = prom<V +>{
        basename1 = ldf basename;
        p7 = prom<V +>{
          from5 = ld from;
          from6 = force? from5;
          checkMissing(from6);
          return from6;
        };
        r14 = dyn basename1(p7);
        return r14;
      };
      r16 = dyn file_path1(p6, p8);
      return r16;
    };
    r18 = dyn unlink[, recursive](p9, TRUE);
    check L19() else D7();
  D7():
    deopt 23 [r18];
  L19():
    goto L4();
  }
}
fun inner3415099399(pkgs) {
  (reg pkgs:*) -+> V { var pkgs:*, reg file_path:cls, reg tmplib:*, reg tmplib1:V, reg p:p(V +), reg pkgs1:*, reg pkgs2:V, reg p1:p(V +), reg r2:V, reg unlink:cls, reg pd:*, reg pd1:V, reg c:L, reg pd3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_exists:cls, reg file_path1:cls, reg pd4:*, reg pd5:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg __:cls, reg r7:V, reg p4:p(V +), reg r9:V |
    mkenv;
    st pkgs = pkgs;
    file_path = ldf `file.path`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      tmplib = ld tmplib;
      tmplib1 = force? tmplib;
      checkMissing(tmplib1);
      return tmplib1;
    };
    p1 = prom<V +>{
      pkgs1 = ld pkgs;
      pkgs2 = force? pkgs1;
      checkMissing(pkgs2);
      return pkgs2;
    };
    r2 = dyn file_path(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    st pd = r2;
    unlink = ldf unlink;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p4 = prom<V +>{
      pd = ld pd;
      pd1 = force? pd;
      checkMissing(pd1);
      c = `is.object`(pd1);
      if c then L1() else L2(pd1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", pd1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(pd3):
      file_exists = ldf `file.exists`;
      p3 = prom<V +>{
        file_path1 = ldf `file.path`;
        p2 = prom<V +>{
          pd4 = ld pd;
          pd5 = force? pd4;
          checkMissing(pd5);
          return pd5;
        };
        r4 = dyn file_path1(p2, "dummy_for_check");
        return r4;
      };
      r6 = dyn file_exists(p3);
      __ = ldf `[` in base;
      r7 = dyn __(pd3, r6);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn unlink(p4, TRUE);
    check L3() else D3();
  D3():
    deopt 10 [r9];
  L3():
    popenv;
    return r9;
  }
}