fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner878517372;
    st `.build_Rd_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner878517372(dir, files, encoding, db_file, stages, os, step, built_file, later_file, macros) {
  (reg dir:*, reg files:*, reg encoding:*, reg db_file:*, reg stages:*, reg os:*, reg step:*, reg built_file:*, reg later_file:*, reg macros:*) -+> V { var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var files:*, reg files_isMissing:L, reg files_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var db_file:*, reg db_file_isMissing:L, reg db_file_orDefault:*, var stages:*, reg stages_isMissing:L, reg stages_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var os:*, reg os_isMissing:L, reg os_orDefault:*, reg _OStype:cls, reg r4:V, reg p1:p(V +), var step:*, reg step_isMissing:L, reg step_orDefault:*, var built_file:*, reg built_file_isMissing:L, reg built_file_orDefault:*, var later_file:*, reg later_file_isMissing:L, reg later_file_orDefault:*, var macros:*, reg macros_isMissing:L, reg macros_orDefault:*, reg character:cls, reg r6:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg dir1:*, reg dir2:V, reg c1:V, reg r10:V, reg c2:L, reg file_path_as_absolute:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r12:V, reg loadPkgRdMacros:cls, reg dir5:*, reg dir6:V, reg p4:p(V +), reg r14:V, reg file_path:cls, reg dir7:*, reg dir8:V, reg p5:p(V +), reg r16:V, reg dir_exists:cls, reg man_dir:*, reg man_dir1:V, reg p6:p(V +), reg r18:V, reg r19:V, reg c3:L, reg structure:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg list:cls, reg r22:V, reg p7:p(V +), reg character1:cls, reg r24:V, reg p8:p(V +), reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg files1:*, reg files2:V, reg c4:V, reg c5:L, reg list_files_with_type:cls, reg man_dir2:*, reg man_dir3:V, reg p9:p(V +), reg os1:*, reg os2:V, reg p10:p(V +), reg r33:V, reg _get_package_metadata:cls, reg dir9:*, reg dir10:V, reg p11:p(V +), reg r36:V, reg c6:L, reg r38:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg encoding1:*, reg encoding2:V, reg is_na:cls, reg r42:V, reg c7:L, reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg files3:*, reg files4:V, reg c8:V, reg r47:V, reg c9:L, reg initialRdMacros:cls, reg r48:V, reg stop:cls, reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg macros1:*, reg macros2:V, reg length:cls, reg r52:V, reg c10:L, reg textConnection:cls, reg macros3:*, reg macros4:V, reg p12:p(V +), reg r54:V, reg loadRdMacros:cls, reg con:*, reg con1:V, reg p13:p(V +), reg macros5:*, reg macros6:V, reg p14:p(V +), reg r57:V, reg close:cls, reg con2:*, reg con3:V, reg p15:p(V +), reg r59:V, reg macros7:*, reg macros8:V, reg r61:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg db_file1:*, reg db_file2:V, reg c11:V, reg r64:V, reg c12:L, reg c14:V, reg file_test:cls, reg db_file3:*, reg db_file4:V, reg p16:p(V +), reg r66:V, reg c15:L, reg c16:V, reg c18:L, reg fetchRdDB:cls, reg sub:cls, reg db_file5:*, reg db_file6:V, reg p17:p(V +), reg r68:V, reg p18:p(V +), reg r70:V, reg readRDS:cls, reg file_path1:cls, reg dirname:cls, reg db_file7:*, reg db_file8:V, reg p19:p(V +), reg r72:V, reg p20:p(V +), reg r74:V, reg p21:p(V +), reg r76:V, reg l:*, reg names__:cls, reg r77:V, reg _in_:cls, reg files5:*, reg files6:V, reg p22:p(V +), reg db_names:*, reg db_names1:V, reg p23:p(V +), reg r80:V, reg file_test1:cls, reg files7:*, reg files8:V, reg p24:p(V +), reg db_file9:*, reg db_file10:V, reg p25:p(V +), reg r83:V, reg r84:V, reg indf:*, reg indf1:V, reg _notin_:cls, reg files9:*, reg files10:V, reg p26:p(V +), reg db_names2:*, reg db_names3:V, reg p27:p(V +), reg r87:V, reg r88:V, reg _notin_1:cls, reg db_names4:*, reg db_names5:V, reg p28:p(V +), reg files11:*, reg files12:V, reg p29:p(V +), reg r91:V, reg _in_1:cls, reg db_names6:*, reg db_names7:V, reg p30:p(V +), reg files13:*, reg files14:V, reg c19:L, reg files16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg indf2:*, reg indf3:V, reg __1:cls, reg r93:V, reg p31:p(V +), reg r95:V, reg r96:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r97:V, reg r98:V, reg ind:*, reg ind1:V, reg any:cls, reg r99:V, reg c20:L, reg db:*, reg db1:V, reg c21:L, reg db3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind2:*, reg ind3:V, reg r100:V, reg __2:cls, reg r101:V, reg files17:*, reg files18:V, reg c22:L, reg files20:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg indf4:*, reg indf5:V, reg __3:cls, reg r102:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r103:V, reg r104:V, reg list1:cls, reg r105:V, reg basename:cls, reg files21:*, reg files22:V, reg p32:p(V +), reg r107:V, reg files23:*, reg files24:V, reg l1:*, reg names__1:cls, reg r108:V, reg as_list:cls, reg files25:*, reg files26:V, reg p33:p(V +), reg r110:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r111:V, reg r112:V, reg built_file1:*, reg built_file2:V, reg c23:V, reg r113:V, reg c24:L, reg c26:V, reg file_test2:cls, reg built_file3:*, reg built_file4:V, reg p34:p(V +), reg r115:V, reg c27:L, reg c28:V, reg c30:L, reg readRDS1:cls, reg built_file5:*, reg built_file6:V, reg p35:p(V +), reg r117:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r118:V, reg r119:V, reg built:*, reg built1:V, reg names:cls, reg r120:V, reg _in_2:cls, reg stages1:*, reg stages2:V, reg p36:p(V +), reg r122:V, reg c31:L, reg grepl:cls, reg paste0:cls, reg os3:*, reg os4:V, reg p37:p(V +), reg r124:V, reg p38:p(V +), reg names_built:*, reg names_built1:V, reg p39:p(V +), reg r127:V, reg basename1:cls, reg names_built2:*, reg names_built3:V, reg c32:L, reg names_built5:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg this_os:*, reg this_os1:V, reg __4:cls, reg r128:V, reg p40:p(V +), reg r130:V, reg built2:*, reg built3:V, reg c33:L, reg built5:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg this_os2:*, reg this_os3:V, reg __5:cls, reg r131:V, reg l2:*, reg c34:L, reg dx15:V, reg l4:*, reg dr12:V, reg dc6:L, reg dx17:V, reg dx19:V, reg name_only:*, reg name_only1:V, reg ___:cls, reg r132:V, reg grepl1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r133:V, reg r134:V, reg built6:*, reg built7:V, reg names1:cls, reg r135:V, reg p41:p(V +), reg r137:V, reg built8:*, reg built9:V, reg c35:L, reg built11:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg some_os:*, reg some_os1:V, reg r138:V, reg __6:cls, reg r139:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r140:V, reg r141:V, reg built12:*, reg built13:V, reg names2:cls, reg r142:V, reg l5:*, reg c36:L, reg r145:dots, reg l7:*, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg _notin_2:cls, reg names_built6:*, reg names_built7:V, reg p42:p(V +), reg basenames:*, reg basenames1:V, reg p43:p(V +), reg r150:V, reg ___1:cls, reg r151:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r152:V, reg r153:V, reg built14:*, reg built15:V, reg length1:cls, reg r154:V, reg c37:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r155:V, reg r156:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r157:V, reg r158:V, reg built16:*, reg built17:V, reg names3:cls, reg r159:V, reg basenames2:*, reg basenames3:V, reg match:cls, reg r160:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r161:V, reg r162:V, reg file_test3:cls, reg built_file7:*, reg built_file8:V, reg p44:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r164:V, reg r165:V, reg files27:*, reg files28:V, reg names4:cls, reg r166:V, reg c38:L, reg r168:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg which:*, reg which1:V, reg __7:cls, reg r169:V, reg p45:p(V +), reg r171:V, reg all:cls, reg r172:V, reg c39:L, reg built18:*, reg built19:V, reg l8:*, reg c40:L, reg built21:V, reg l10:*, reg dr20:V, reg dc10:L, reg dx26:V, reg built23:V, reg dx27:V, reg which2:*, reg which3:V, reg ___2:cls, reg r173:V, reg built24:V, reg built25:V, reg _in_3:cls, reg stages3:*, reg stages4:V, reg p46:p(V +), reg r175:V, reg c41:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r176:V, reg r177:V, reg later_file1:*, reg later_file2:V, reg c42:V, reg r178:V, reg c43:L, reg c45:V, reg file_test4:cls, reg later_file3:*, reg later_file4:V, reg p47:p(V +), reg r180:V, reg c46:L, reg c47:V, reg c49:L, reg readRDS2:cls, reg later_file5:*, reg later_file6:V, reg p48:p(V +), reg r182:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r183:V, reg r184:V, reg later:*, reg later1:V, reg names5:cls, reg r185:V, reg l11:*, reg c50:L, reg r187:dots, reg l13:*, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg _notin_3:cls, reg names_later:*, reg names_later1:V, reg p49:p(V +), reg basenames4:*, reg basenames5:V, reg p50:p(V +), reg r192:V, reg ___3:cls, reg r193:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r194:V, reg r195:V, reg later2:*, reg later3:V, reg length2:cls, reg r196:V, reg c51:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r197:V, reg r198:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r199:V, reg r200:V, reg later4:*, reg later5:V, reg names6:cls, reg r201:V, reg basenames6:*, reg basenames7:V, reg match1:cls, reg r202:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r203:V, reg r204:V, reg file_test5:cls, reg later_file7:*, reg later_file8:V, reg p51:p(V +), reg sym25:cls, reg base25:cls, reg guard25:L, reg r206:V, reg r207:V, reg files29:*, reg files30:V, reg names7:cls, reg r208:V, reg c52:L, reg r210:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg which4:*, reg which5:V, reg __8:cls, reg r211:V, reg p52:p(V +), reg r213:V, reg all1:cls, reg r214:V, reg c53:L, reg later6:*, reg later7:V, reg l14:*, reg c54:L, reg later9:V, reg l16:*, reg dr26:V, reg dc13:L, reg dx32:V, reg later11:V, reg dx33:V, reg which6:*, reg which7:V, reg ___4:cls, reg r215:V, reg later12:V, reg later13:V, reg stages5:*, reg stages6:V, reg c55:L, reg stages8:V, reg dr28:V, reg dc14:L, reg dx34:V, reg dx35:V, reg stages9:*, reg stages10:V, reg r216:V, reg __9:cls, reg r217:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r218:V, reg r219:V, reg files31:*, reg files32:V, reg length3:cls, reg r220:V, reg c56:L, reg lapply:cls, reg files33:*, reg files34:V, reg p53:p(V +), reg _fetch_Rd_object:*, reg _fetch_Rd_object1:V, reg p54:p(V +), reg stages11:*, reg stages12:V, reg p55:p(V +), reg r224:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r225:V, reg r226:V, reg files35:*, reg files36:V, reg names8:cls, reg r227:V, reg l17:*, reg names__2:cls, reg r228:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r229:V, reg r230:V, reg db4:*, reg db5:V, reg db6:*, reg db7:V, reg c57:cls, reg r231:V, reg db8:*, reg db9:V |
    mkenv;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L0(NULL) else L0(dir);
  L0(dir_orDefault):
    st dir = dir_orDefault;
    files_isMissing = missing.0(files);
    if files_isMissing then L1(NULL) else L1(files);
  L1(files_orDefault):
    st files = files_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L2("unknown") else L2(encoding);
  L2(encoding_orDefault):
    st encoding = encoding_orDefault;
    db_file_isMissing = missing.0(db_file);
    if db_file_isMissing then L3(NULL) else L3(db_file);
  L3(db_file_orDefault):
    st db_file = db_file_orDefault;
    stages_isMissing = missing.0(stages);
    if stages_isMissing then L4() else L5(stages);
  L4():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("build", "install");
      goto L0(r2);
    L2():
      r = dyn base("build", "install");
      goto L0(r);
    };
    goto L5(p);
  L5(stages_orDefault):
    st stages = stages_orDefault;
    os_isMissing = missing.0(os);
    if os_isMissing then L6() else L7(os);
  L6():
    p1 = prom<V +>{
      _OStype = ldf `.OStype`;
      r4 = dyn _OStype();
      return r4;
    };
    goto L7(p1);
  L7(os_orDefault):
    st os = os_orDefault;
    step_isMissing = missing.0(step);
    if step_isMissing then L8(3) else L8(step);
  L8(step_orDefault):
    st step = step_orDefault;
    built_file_isMissing = missing.0(built_file);
    if built_file_isMissing then L9(NULL) else L9(built_file);
  L9(built_file_orDefault):
    st built_file = built_file_orDefault;
    later_file_isMissing = missing.0(later_file);
    if later_file_isMissing then L10(NULL) else L10(later_file);
  L10(later_file_orDefault):
    st later_file = later_file_orDefault;
    macros_isMissing = missing.0(macros);
    if macros_isMissing then L11() else L12(macros);
  L11():
    p2 = prom<V +>{
      character = ldf character;
      r6 = dyn character();
      return r6;
    };
    goto L12(p2);
  L12(macros_orDefault):
    st macros = macros_orDefault;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L84() else L85();
  L13(r9):
    r10 = `!`(r9);
    c2 = `as.logical`(r10);
    if c2 then L87() else L14();
  L84():
    dir1 = ld dir;
    check L86() else D0();
  L85():
    r8 = dyn base1(<sym dir>);
    goto L13(r8);
  D0():
    deopt 1 [dir1];
  L14():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L120() else L121();
  L24():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L129() else L130();
  L86():
    dir2 = force? dir1;
    checkMissing(dir2);
    c1 = `==`(dir2, NULL);
    goto L13(c1);
  L87():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L88() else D1();
  D1():
    deopt 6 [];
  L25(r46):
    r47 = `!`(r46);
    c9 = `as.logical`(r47);
    if c9 then L123() else L26();
  L27(r51):
    c10 = `as.logical`(r51);
    if c10 then L133() else L28();
  L88():
    p3 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r12 = dyn file_path_as_absolute(p3);
    check L89() else D2();
  L120():
    files3 = ld files;
    check L122() else D18();
  L121():
    r45 = dyn base5(<sym files>);
    goto L25(r45);
  L129():
    macros1 = ld macros;
    check L131() else D23();
  L130():
    r50 = dyn base6(<sym macros>);
    goto L27(r50);
  D2():
    deopt 8 [r12];
  D18():
    deopt 70 [files3];
  D23():
    deopt 84 [macros1];
  L26():
    stop = ldf stop;
    check L127() else D21();
  L28():
    macros7 = ld macros0;
    check L141() else D31();
  L29():
    r61 = clos inner1144301131;
    st `.fetch_Rd_object` = r61;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L142() else L143();
  L89():
    st dir = r12;
    loadPkgRdMacros = ldf loadPkgRdMacros;
    check L90() else D3();
  L122():
    files4 = force? files3;
    checkMissing(files4);
    c8 = `==`(files4, NULL);
    goto L25(c8);
  L123():
    initialRdMacros = ldf initialRdMacros;
    check L124() else D19();
  L131():
    macros2 = force? macros1;
    checkMissing(macros2);
    length = ldf length in base;
    r52 = dyn length(macros2);
    check L132() else D24();
  L133():
    textConnection = ldf textConnection;
    check L134() else D25();
  D3():
    deopt 11 [];
  D19():
    deopt 75 [];
  D21():
    deopt 79 [];
  D24():
    deopt 87 [r52];
  D25():
    deopt 89 [];
  D31():
    deopt 103 [macros7];
  L30(r63):
    r64 = `!`(r63);
    c12 = `as.logical`(r64);
    if c12 then L145() else L31(c12);
  L90():
    p4 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r14 = dyn loadPkgRdMacros(p4);
    check L91() else D4();
  L124():
    r48 = dyn initialRdMacros();
    check L125() else D20();
  L127():
    r49 = dyn stop("you must specify 'dir' or 'files'");
    check L128() else D22();
  L132():
    goto L27(r52);
  L134():
    p12 = prom<V +>{
      macros3 = ld macros;
      macros4 = force? macros3;
      checkMissing(macros4);
      return macros4;
    };
    r54 = dyn textConnection(p12);
    check L135() else D26();
  L141():
    macros8 = force? macros7;
    checkMissing(macros8);
    st macros = macros8;
    goto L29();
  L142():
    db_file1 = ld db_file;
    check L144() else D32();
  L143():
    r62 = dyn base7(<sym db_file>);
    goto L30(r62);
  D4():
    deopt 13 [r14];
  D20():
    deopt 76 [r48];
  D22():
    deopt 81 [r49];
  D26():
    deopt 91 [r54];
  D32():
    deopt 110 [db_file1];
  L31(c14):
    c18 = `as.logical`(c14);
    if c18 then L149() else L32();
  L91():
    st macros0 = r14;
    file_path = ldf `file.path`;
    check L92() else D5();
  L125():
    st macros0 = r48;
    goto L24();
  L128():
    goto L24();
  L135():
    st con = r54;
    loadRdMacros = ldf loadRdMacros;
    check L136() else D27();
  L144():
    db_file2 = force? db_file1;
    checkMissing(db_file2);
    c11 = `==`(db_file2, NULL);
    goto L30(c11);
  L145():
    file_test = ldf file_test;
    check L146() else D33();
  D5():
    deopt 16 [];
  D27():
    deopt 94 [];
  D33():
    deopt 115 [c12];
  L32():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L184() else L185();
  L38():
    basename = ldf basename;
    check L187() else D59();
  L92():
    p5 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r16 = dyn file_path(p5, "man");
    check L93() else D6();
  L136():
    p13 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    p14 = prom<V +>{
      macros5 = ld macros0;
      macros6 = force? macros5;
      checkMissing(macros6);
      return macros6;
    };
    r57 = dyn loadRdMacros(p13, p14);
    check L137() else D28();
  L146():
    p16 = prom<V +>{
      db_file3 = ld db_file;
      db_file4 = force? db_file3;
      checkMissing(db_file4);
      return db_file4;
    };
    r66 = dyn file_test("-f", p16);
    check L147() else D34();
  L149():
    fetchRdDB = ldf fetchRdDB;
    check L150() else D35();
  D6():
    deopt 19 [r16];
  D28():
    deopt 97 [r57];
  D34():
    deopt 118 [c12, r66];
  D35():
    deopt 121 [];
  D59():
    deopt 193 [];
  L39(r104):
    st db = r104;
    goto L38();
  L93():
    st man_dir = r16;
    dir_exists = ldf `dir.exists`;
    check L94() else D7();
  L137():
    st macros = r57;
    close = ldf close;
    check L138() else D29();
  L147():
    c15 = `as.logical`(r66);
    c16 = `&&`(c12, c15);
    goto L31(c16);
  L150():
    p18 = prom<V +>{
      sub = ldf sub;
      p17 = prom<V +>{
        db_file5 = ld db_file;
        db_file6 = force? db_file5;
        checkMissing(db_file6);
        return db_file6;
      };
      r68 = dyn sub("\\.rdx$", "", p17);
      return r68;
    };
    r70 = dyn fetchRdDB(p18);
    check L151() else D36();
  L184():
    list1 = ldf list in base;
    r105 = dyn list1();
    check L186() else D58();
  L185():
    r103 = dyn base9();
    goto L39(r103);
  L187():
    p32 = prom<V +>{
      files21 = ld files;
      files22 = force? files21;
      checkMissing(files22);
      return files22;
    };
    r107 = dyn basename(p32);
    check L188() else D60();
  D7():
    deopt 22 [];
  D29():
    deopt 100 [];
  D36():
    deopt 123 [r70];
  D58():
    deopt 190 [r105];
  D60():
    deopt 195 [r107];
  L94():
    p6 = prom<V +>{
      man_dir = ld man_dir;
      man_dir1 = force? man_dir;
      checkMissing(man_dir1);
      return man_dir1;
    };
    r18 = dyn dir_exists(p6);
    check L95() else D8();
  L138():
    p15 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r59 = dyn close(p15);
    check L139() else D30();
  L151():
    st db = r70;
    readRDS = ldf readRDS;
    check L152() else D37();
  L186():
    goto L39(r105);
  L188():
    st basenames = r107;
    files23 = ld files;
    check L189() else D61();
  D8():
    deopt 24 [r18];
  D30():
    deopt 102 [r59];
  D37():
    deopt 126 [];
  D61():
    deopt 197 [files23];
  L95():
    r19 = `!`(r18);
    c3 = `as.logical`(r19);
    if c3 then L96() else L15();
  L139():
    goto L29();
  L152():
    p21 = prom<V +>{
      file_path1 = ldf `file.path`;
      p20 = prom<V +>{
        dirname = ldf dirname;
        p19 = prom<V +>{
          db_file7 = ld db_file;
          db_file8 = force? db_file7;
          checkMissing(db_file8);
          return db_file8;
        };
        r72 = dyn dirname(p19);
        return r72;
      };
      r74 = dyn file_path1(p20, "paths.rds");
      return r74;
    };
    r76 = dyn readRDS(p21);
    check L153() else D38();
  L189():
    files24 = force? files23;
    checkMissing(files24);
    l1 = ld files;
    names__1 = ldf `names<-`;
    check L190() else D62();
  D38():
    deopt 128 [r76];
  D62():
    deopt 200 [files24, l1, files24];
  L15():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L101() else L102();
  L96():
    structure = ldf structure;
    check L97() else D9();
  L153():
    l = ld db;
    names__ = ldf `names<-`;
    check L154() else D39();
  L190():
    r108 = dyn names__1(l1, NULL, files24);
    check L191() else D63();
  D9():
    deopt 27 [];
  D39():
    deopt 130 [r76, l, r76];
  D63():
    deopt 202 [files24, r108];
  L17(r30):
    c5 = `as.logical`(r30);
    if c5 then L104() else L18();
  L97():
    p7 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      list = ldf list in base;
      r22 = dyn list();
      goto L0(r22);
    L2():
      r20 = dyn base2();
      goto L0(r20);
    };
    p8 = prom<V +>{
      character1 = ldf character;
      r24 = dyn character1();
      return r24;
    };
    r26 = dyn structure[, names](p7, p8);
    check L98() else D10();
  L101():
    files1 = ld files;
    check L103() else D11();
  L102():
    r29 = dyn base3(<sym files>);
    goto L17(r29);
  L154():
    r77 = dyn names__(l, NULL, r76);
    check L155() else D40();
  L191():
    st files = r108;
    as_list = ldf `as.list`;
    check L192() else D64();
  D10():
    deopt 31 [r26];
  D11():
    deopt 36 [files1];
  D40():
    deopt 132 [r76, r77];
  D64():
    deopt 205 [];
  L18():
    goto L19();
  L19():
    _get_package_metadata = ldf `.get_package_metadata`;
    check L108() else D14();
  L98():
    popenv;
    return r26;
  L103():
    files2 = force? files1;
    checkMissing(files2);
    c4 = `==`(files2, NULL);
    goto L17(c4);
  L104():
    list_files_with_type = ldf list_files_with_type;
    check L105() else D12();
  L155():
    st db = r77;
    st db_names = r76;
    _in_ = ldf `%in%`;
    check L156() else D41();
  L192():
    p33 = prom<V +>{
      files25 = ld files;
      files26 = force? files25;
      checkMissing(files26);
      return files26;
    };
    r110 = dyn as_list(p33);
    check L193() else D65();
  D12():
    deopt 40 [];
  D14():
    deopt 50 [];
  D41():
    deopt 136 [];
  D65():
    deopt 207 [r110];
  L105():
    p9 = prom<V +>{
      man_dir2 = ld man_dir;
      man_dir3 = force? man_dir2;
      checkMissing(man_dir3);
      return man_dir3;
    };
    p10 = prom<V +>{
      os1 = ld os;
      os2 = force? os1;
      checkMissing(os2);
      return os2;
    };
    r33 = dyn list_files_with_type[, , OS_subdirs](p9, "docs", p10);
    check L106() else D13();
  L108():
    p11 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r36 = dyn _get_package_metadata(p11, FALSE);
    check L109() else D15();
  L156():
    p22 = prom<V +>{
      files5 = ld files;
      files6 = force? files5;
      checkMissing(files6);
      return files6;
    };
    p23 = prom<V +>{
      db_names = ld db_names;
      db_names1 = force? db_names;
      checkMissing(db_names1);
      return db_names1;
    };
    r80 = dyn _in_(p22, p23);
    check L157() else D42();
  L193():
    st files = r110;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L194() else L195();
  D13():
    deopt 45 [r33];
  D15():
    deopt 53 [r36];
  D42():
    deopt 139 [r80];
  L40(r112):
    r113 = `!`(r112);
    c24 = `as.logical`(r113);
    if c24 then L197() else L41(c24);
  L106():
    st files = r33;
    goto L19();
  L109():
    c6 = `is.object`(r36);
    if c6 then L110() else L111(r36);
  L157():
    file_test1 = ldf file_test;
    check L158() else D43();
  L194():
    built_file1 = ld built_file;
    check L196() else D66();
  L195():
    r111 = dyn base10(<sym built_file>);
    goto L40(r111);
  D43():
    deopt 140 [r80];
  D66():
    deopt 210 [built_file1];
  L20(dx1):
    st encoding = dx1;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L113() else L114();
  L41(c26):
    c30 = `as.logical`(c26);
    if c30 then L201() else L42();
  L110():
    dr = tryDispatchBuiltin.1("[", r36);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L112() else L111(dr);
  L111(r38):
    __ = ldf `[` in base;
    r39 = dyn __(r38, "Encoding");
    goto L20(r39);
  L158():
    p24 = prom<V +>{
      files7 = ld files;
      files8 = force? files7;
      checkMissing(files8);
      return files8;
    };
    p25 = prom<V +>{
      db_file9 = ld db_file;
      db_file10 = force? db_file9;
      checkMissing(db_file10);
      return db_file10;
    };
    r83 = dyn file_test1("-nt", p24, p25);
    check L159() else D44();
  L196():
    built_file2 = force? built_file1;
    checkMissing(built_file2);
    c23 = `==`(built_file2, NULL);
    goto L40(c23);
  L197():
    file_test2 = ldf file_test;
    check L198() else D67();
  D44():
    deopt 144 [r80, r83];
  D67():
    deopt 215 [c24];
  L21(r41):
    c7 = `as.logical`(r41);
    if c7 then L117() else L22();
  L42():
    goto L60();
  L60():
    _in_3 = ldf `%in%`;
    check L268() else D101();
  L112():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L113():
    encoding1 = ld encoding;
    check L115() else D16();
  L114():
    r40 = dyn base4(<sym encoding>);
    goto L21(r40);
  L159():
    r84 = `&&`(r80, r83);
    st indf = r84;
    indf = ld indf;
    check L160() else D45();
  L198():
    p34 = prom<V +>{
      built_file3 = ld built_file;
      built_file4 = force? built_file3;
      checkMissing(built_file4);
      return built_file4;
    };
    r115 = dyn file_test2("-f", p34);
    check L199() else D68();
  L201():
    readRDS1 = ldf readRDS;
    check L202() else D69();
  D16():
    deopt 60 [encoding1];
  D45():
    deopt 147 [indf];
  D68():
    deopt 218 [c24, r115];
  D69():
    deopt 221 [];
  D101():
    deopt 335 [];
  L22():
    goto L23(NULL);
  L23(r43):
    goto L24();
  L115():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    is_na = ldf `is.na` in base;
    r42 = dyn is_na(encoding2);
    check L116() else D17();
  L117():
    st encoding = "unknown";
    goto L23("unknown");
  L160():
    indf1 = force? indf;
    checkMissing(indf1);
    _notin_ = ldf `%notin%`;
    check L161() else D46();
  L199():
    c27 = `as.logical`(r115);
    c28 = `&&`(c24, c27);
    goto L41(c28);
  L202():
    p35 = prom<V +>{
      built_file5 = ld built_file;
      built_file6 = force? built_file5;
      checkMissing(built_file6);
      return built_file6;
    };
    r117 = dyn readRDS1(p35);
    check L203() else D70();
  L268():
    p46 = prom<V +>{
      stages3 = ld stages;
      stages4 = force? stages3;
      checkMissing(stages4);
      return stages4;
    };
    r175 = dyn _in_3("later", p46);
    check L269() else D102();
  D17():
    deopt 63 [r42];
  D46():
    deopt 149 [indf1];
  D70():
    deopt 223 [r117];
  D102():
    deopt 338 [r175];
  L116():
    goto L21(r42);
  L161():
    p26 = prom<V +>{
      files9 = ld files;
      files10 = force? files9;
      checkMissing(files10);
      return files10;
    };
    p27 = prom<V +>{
      db_names2 = ld db_names;
      db_names3 = force? db_names2;
      checkMissing(db_names3);
      return db_names3;
    };
    r87 = dyn _notin_(p26, p27);
    check L162() else D47();
  L203():
    st built = r117;
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L204() else L205();
  L269():
    c41 = `as.logical`(r175);
    if c41 then L270() else L61();
  D47():
    deopt 152 [indf1, r87];
  L43(r119):
    st names_built = r119;
    _in_2 = ldf `%in%`;
    check L208() else D73();
  L61():
    goto L78();
  L78():
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L323() else L324();
  L162():
    r88 = `||`(indf1, r87);
    st indf = r88;
    _notin_1 = ldf `%notin%`;
    check L163() else D48();
  L204():
    built = ld built;
    check L206() else D71();
  L205():
    r118 = dyn base11(<sym built>);
    goto L43(r118);
  L270():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L271() else L272();
  D48():
    deopt 156 [];
  D71():
    deopt 227 [built];
  D73():
    deopt 233 [];
  L62(r177):
    r178 = `!`(r177);
    c43 = `as.logical`(r178);
    if c43 then L274() else L63(c43);
  L79(r219):
    c56 = `as.logical`(r219);
    if c56 then L327() else L80();
  L163():
    p28 = prom<V +>{
      db_names4 = ld db_names;
      db_names5 = force? db_names4;
      checkMissing(db_names5);
      return db_names5;
    };
    p29 = prom<V +>{
      files11 = ld files;
      files12 = force? files11;
      checkMissing(files12);
      return files12;
    };
    r91 = dyn _notin_1(p28, p29);
    check L164() else D49();
  L206():
    built1 = force? built;
    checkMissing(built1);
    names = ldf names in base;
    r120 = dyn names(built1);
    check L207() else D72();
  L208():
    p36 = prom<V +>{
      stages1 = ld stages;
      stages2 = force? stages1;
      checkMissing(stages2);
      return stages2;
    };
    r122 = dyn _in_2("install", p36);
    check L209() else D74();
  L271():
    later_file1 = ld later_file;
    check L273() else D103();
  L272():
    r176 = dyn base19(<sym later_file>);
    goto L62(r176);
  L323():
    files31 = ld files;
    check L325() else D125();
  L324():
    r218 = dyn base26(<sym files>);
    goto L79(r218);
  D49():
    deopt 159 [r91];
  D72():
    deopt 230 [r120];
  D74():
    deopt 236 [r122];
  D103():
    deopt 340 [later_file1];
  D125():
    deopt 428 [files31];
  L63(c45):
    c49 = `as.logical`(c45);
    if c49 then L278() else L64();
  L80():
    goto L83();
  L83():
    db8 = ld db;
    check L342() else D136();
  L164():
    _in_1 = ldf `%in%`;
    check L165() else D50();
  L207():
    goto L43(r120);
  L209():
    c31 = `as.logical`(r122);
    if c31 then L210() else L44();
  L273():
    later_file2 = force? later_file1;
    checkMissing(later_file2);
    c42 = `==`(later_file2, NULL);
    goto L62(c42);
  L274():
    file_test4 = ldf file_test;
    check L275() else D104();
  L325():
    files32 = force? files31;
    checkMissing(files32);
    length3 = ldf length in base;
    r220 = dyn length3(files32);
    check L326() else D126();
  L327():
    lapply = ldf lapply;
    check L328() else D127();
  D50():
    deopt 160 [r91];
  D104():
    deopt 345 [c43];
  D126():
    deopt 431 [r220];
  D127():
    deopt 433 [];
  D136():
    deopt 461 [db8];
  L44():
    goto L49();
  L49():
    l5 = ld built;
    c36 = `is.object`(l5);
    if c36 then L236() else L237(NULL, l5);
  L64():
    goto L76();
  L76():
    stages5 = ld stages;
    check L317() else D123();
  L165():
    p30 = prom<V +>{
      db_names6 = ld db_names;
      db_names7 = force? db_names6;
      checkMissing(db_names7);
      return db_names7;
    };
    p31 = prom<V +>{
      files13 = ld files;
      files14 = force? files13;
      checkMissing(files14);
      c19 = `is.object`(files14);
      if c19 then L1() else L2(files14);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", files14);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(files16):
      indf2 = ld indf;
      indf3 = force? indf2;
      __1 = ldf `[` in base;
      r93 = dyn __1(files16, indf3);
      goto L0(r93);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r95 = dyn _in_1(p30, p31);
    check L166() else D51();
  L210():
    grepl = ldf grepl;
    check L211() else D75();
  L275():
    p47 = prom<V +>{
      later_file3 = ld later_file;
      later_file4 = force? later_file3;
      checkMissing(later_file4);
      return later_file4;
    };
    r180 = dyn file_test4("-f", p47);
    check L276() else D105();
  L278():
    readRDS2 = ldf readRDS;
    check L279() else D106();
  L326():
    goto L79(r220);
  L328():
    p53 = prom<V +>{
      files33 = ld files;
      files34 = force? files33;
      checkMissing(files34);
      return files34;
    };
    p54 = prom<V +>{
      _fetch_Rd_object = ld `.fetch_Rd_object`;
      _fetch_Rd_object1 = force? _fetch_Rd_object;
      checkMissing(_fetch_Rd_object1);
      return _fetch_Rd_object1;
    };
    p55 = prom<V +>{
      stages11 = ld stages;
      stages12 = force? stages11;
      checkMissing(stages12);
      return stages12;
    };
    r224 = dyn lapply(p53, p54, p55);
    check L329() else D128();
  L342():
    db9 = force? db8;
    checkMissing(db9);
    popenv;
    return db9;
  D51():
    deopt 163 [r91, r95];
  D75():
    deopt 238 [];
  D105():
    deopt 348 [c43, r180];
  D106():
    deopt 351 [];
  D123():
    deopt 416 [stages5];
  D128():
    deopt 437 [r224];
  L50(dx23):
    st built = dx23;
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L241() else L242();
  L166():
    r96 = `||`(r91, r95);
    st ind = r96;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L167() else L168();
  L211():
    p38 = prom<V +>{
      paste0 = ldf paste0;
      p37 = prom<V +>{
        os3 = ld os;
        os4 = force? os3;
        checkMissing(os4);
        return os4;
      };
      r124 = dyn paste0("^", p37, "/");
      return r124;
    };
    p39 = prom<V +>{
      names_built = ld names_built;
      names_built1 = force? names_built;
      checkMissing(names_built1);
      return names_built1;
    };
    r127 = dyn grepl(p38, p39);
    check L212() else D76();
  L236():
    dr16 = tryDispatchBuiltin.0("[<-", l5, NULL);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L238() else L237(NULL, dr16);
  L237(r145, l7):
    _notin_2 = ldf `%notin%`;
    check L239() else D88();
  L276():
    c46 = `as.logical`(r180);
    c47 = `&&`(c43, c46);
    goto L63(c47);
  L279():
    p48 = prom<V +>{
      later_file5 = ld later_file;
      later_file6 = force? later_file5;
      checkMissing(later_file6);
      return later_file6;
    };
    r182 = dyn readRDS2(p48);
    check L280() else D107();
  L317():
    stages6 = force? stages5;
    checkMissing(stages6);
    c55 = `is.object`(stages6);
    if c55 then L318() else L319(stages6);
  L329():
    st db1 = r224;
    sym27 = ldf names;
    base27 = ldf names in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L330() else L331();
  D76():
    deopt 241 [r127];
  D88():
    deopt 284 [r145, l7, NULL];
  D107():
    deopt 353 [r182];
  L33(r98):
    c20 = `as.logical`(r98);
    if c20 then L171() else L34();
  L51(r153):
    c37 = `as.logical`(r153);
    if c37 then L245() else L52();
  L77(dx35):
    st stages = dx35;
    goto L78();
  L81(r226):
    l17 = ld db1;
    names__2 = ldf `names<-`;
    check L334() else D131();
  L167():
    ind = ld ind;
    check L169() else D52();
  L168():
    r97 = dyn base8(<sym ind>);
    goto L33(r97);
  L212():
    st this_os = r127;
    basename1 = ldf basename;
    check L213() else D77();
  L238():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L50(dx22);
  L239():
    p42 = prom<V +>{
      names_built6 = ld names_built;
      names_built7 = force? names_built6;
      checkMissing(names_built7);
      return names_built7;
    };
    p43 = prom<V +>{
      basenames = ld basenames;
      basenames1 = force? basenames;
      checkMissing(basenames1);
      return basenames1;
    };
    r150 = dyn _notin_2(p42, p43);
    check L240() else D89();
  L241():
    built14 = ld built;
    check L243() else D90();
  L242():
    r152 = dyn base14(<sym built>);
    goto L51(r152);
  L280():
    st later = r182;
    sym20 = ldf names;
    base20 = ldf names in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L281() else L282();
  L318():
    dr28 = tryDispatchBuiltin.1("[", stages6);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L320() else L319(dr28);
  L319(stages8):
    stages9 = ld stages;
    check L321() else D124();
  L330():
    files35 = ld files;
    check L332() else D129();
  L331():
    r225 = dyn base27(<sym files>);
    goto L81(r225);
  D52():
    deopt 168 [ind];
  D77():
    deopt 244 [];
  D89():
    deopt 287 [r145, l7, NULL, r150];
  D90():
    deopt 292 [built14];
  D124():
    deopt 418 [stages8, stages9];
  D129():
    deopt 441 [files35];
  D131():
    deopt 446 [r226, l17, r226];
  L34():
    goto L36();
  L36():
    files17 = ld files;
    check L178() else D56();
  L52():
    goto L59(NULL);
  L59(built25):
    goto L60();
  L65(r184):
    st names_later = r184;
    l11 = ld later;
    c50 = `is.object`(l11);
    if c50 then L285() else L286(NULL, l11);
  L169():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r99 = dyn any(ind1);
    check L170() else D53();
  L171():
    db = ld db;
    check L172() else D54();
  L213():
    p40 = prom<V +>{
      names_built2 = ld names_built;
      names_built3 = force? names_built2;
      checkMissing(names_built3);
      c32 = `is.object`(names_built3);
      if c32 then L1() else L2(names_built3);
    L0(dx11):
      return dx11;
    L1():
      dr8 = tryDispatchBuiltin.1("[", names_built3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(names_built5):
      this_os = ld this_os;
      this_os1 = force? this_os;
      __4 = ldf `[` in base;
      r128 = dyn __4(names_built5, this_os1);
      goto L0(r128);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    r130 = dyn basename1(p40);
    check L214() else D78();
  L240():
    ___1 = ldf `[<-` in base;
    r151 = dyn ___1(l7, NULL, r150);
    goto L50(r151);
  L243():
    built15 = force? built14;
    checkMissing(built15);
    length1 = ldf length in base;
    r154 = dyn length1(built15);
    check L244() else D91();
  L245():
    sym15 = ldf match;
    base15 = ldf match in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L246() else L247();
  L281():
    later = ld later;
    check L283() else D108();
  L282():
    r183 = dyn base20(<sym later>);
    goto L65(r183);
  L320():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L77(dx34);
  L321():
    stages10 = force? stages9;
    checkMissing(stages10);
    r216 = `!=`(stages10, "later");
    __9 = ldf `[` in base;
    r217 = dyn __9(stages8, r216);
    goto L77(r217);
  L332():
    files36 = force? files35;
    checkMissing(files36);
    names8 = ldf names in base;
    r227 = dyn names8(files36);
    check L333() else D130();
  L334():
    r228 = dyn names__2(l17, NULL, r226);
    check L335() else D132();
  D53():
    deopt 171 [r99];
  D54():
    deopt 172 [db];
  D56():
    deopt 181 [files17];
  D78():
    deopt 246 [r130];
  D91():
    deopt 295 [r154];
  D108():
    deopt 357 [later];
  D130():
    deopt 444 [r227];
  D132():
    deopt 448 [r226, r228];
  L53(r156):
    st which = r156;
    sym17 = ldf all;
    base17 = ldf all in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L254() else L255();
  L66(dx29):
    st later = dx29;
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L290() else L291();
  L170():
    goto L33(r99);
  L172():
    db1 = force? db;
    checkMissing(db1);
    c21 = `is.object`(db1);
    if c21 then L173() else L174(db1);
  L178():
    files18 = force? files17;
    checkMissing(files18);
    c22 = `is.object`(files18);
    if c22 then L179() else L180(files18);
  L214():
    st name_only = r130;
    built2 = ld built;
    check L215() else D79();
  L244():
    goto L51(r154);
  L246():
    sym16 = ldf names;
    base16 = ldf names in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L248() else L249();
  L247():
    r155 = dyn base15(<lang names(built)>, <sym basenames>);
    goto L53(r155);
  L283():
    later1 = force? later;
    checkMissing(later1);
    names5 = ldf names in base;
    r185 = dyn names5(later1);
    check L284() else D109();
  L285():
    dr22 = tryDispatchBuiltin.0("[<-", l11, NULL);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L287() else L286(NULL, dr22);
  L286(r187, l13):
    _notin_3 = ldf `%notin%`;
    check L288() else D110();
  L333():
    goto L81(r227);
  L335():
    st db1 = r228;
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L336() else L337();
  D79():
    deopt 248 [built2];
  D109():
    deopt 360 [r185];
  D110():
    deopt 366 [r187, l13, NULL];
  L35(dx5):
    st db = dx5;
    goto L36();
  L37(dx8):
    st files = dx8;
    goto L38();
  L54(r158):
    basenames2 = ld basenames;
    check L252() else D94();
  L55(r162):
    c39 = `as.logical`(r162);
    if c39 then L259() else L56();
  L67(r195):
    c51 = `as.logical`(r195);
    if c51 then L294() else L68();
  L82(r230):
    st db = r230;
    goto L83();
  L173():
    dr4 = tryDispatchBuiltin.1("[", db1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L175() else L174(dr4);
  L174(db3):
    ind2 = ld ind;
    check L176() else D55();
  L179():
    dr6 = tryDispatchBuiltin.1("[", files18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L181() else L180(dr6);
  L180(files20):
    indf4 = ld indf;
    check L182() else D57();
  L215():
    built3 = force? built2;
    checkMissing(built3);
    c33 = `is.object`(built3);
    if c33 then L216() else L217(built3);
  L248():
    built16 = ld built;
    check L250() else D92();
  L249():
    r157 = dyn base16(<sym built>);
    goto L54(r157);
  L254():
    file_test3 = ldf file_test;
    check L256() else D96();
  L255():
    r161 = dyn base17(<lang file_test("-nt", built_file, `[`(names(files), which))>);
    goto L55(r161);
  L284():
    goto L65(r185);
  L287():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L66(dx28);
  L288():
    p49 = prom<V +>{
      names_later = ld names_later;
      names_later1 = force? names_later;
      checkMissing(names_later1);
      return names_later1;
    };
    p50 = prom<V +>{
      basenames4 = ld basenames;
      basenames5 = force? basenames4;
      checkMissing(basenames5);
      return basenames5;
    };
    r192 = dyn _notin_3(p49, p50);
    check L289() else D111();
  L290():
    later2 = ld later;
    check L292() else D112();
  L291():
    r194 = dyn base21(<sym later>);
    goto L67(r194);
  L336():
    db4 = ld db;
    check L338() else D133();
  L337():
    r229 = dyn base28(<sym db>, <sym db1>);
    goto L82(r229);
  D55():
    deopt 174 [db3, ind2];
  D57():
    deopt 183 [files20, indf4];
  D92():
    deopt 300 [built16];
  D94():
    deopt 304 [basenames2];
  D96():
    deopt 314 [];
  D111():
    deopt 369 [r187, l13, NULL, r192];
  D112():
    deopt 374 [later2];
  D133():
    deopt 452 [db4];
  L45(dx13):
    l2 = ld built;
    c34 = `is.object`(l2);
    if c34 then L220() else L221(dx13, l2);
  L56():
    goto L58(NULL);
  L58(built24):
    goto L59(built24);
  L68():
    goto L75(NULL);
  L75(later13):
    goto L76();
  L175():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L35(dx4);
  L176():
    ind3 = force? ind2;
    checkMissing(ind3);
    r100 = `!`(ind3);
    __2 = ldf `[` in base;
    r101 = dyn __2(db3, r100);
    goto L35(r101);
  L181():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L37(dx7);
  L182():
    indf5 = force? indf4;
    __3 = ldf `[` in base;
    r102 = dyn __3(files20, indf5);
    goto L37(r102);
  L216():
    dr10 = tryDispatchBuiltin.1("[", built3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L218() else L217(dr10);
  L217(built5):
    this_os2 = ld this_os;
    check L219() else D80();
  L250():
    built17 = force? built16;
    checkMissing(built17);
    names3 = ldf names in base;
    r159 = dyn names3(built17);
    check L251() else D93();
  L252():
    basenames3 = force? basenames2;
    checkMissing(basenames3);
    match = ldf match in base;
    r160 = dyn match(r158, basenames3, NA_INT, NULL);
    check L253() else D95();
  L256():
    p44 = prom<V +>{
      built_file7 = ld built_file;
      built_file8 = force? built_file7;
      checkMissing(built_file8);
      return built_file8;
    };
    p45 = prom<V +>{
      sym18 = ldf names;
      base18 = ldf names in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L2() else L3();
    L0(r165):
      c38 = `is.object`(r165);
      if c38 then L4() else L5(r165);
    L2():
      files27 = ld files;
      files28 = force? files27;
      checkMissing(files28);
      names4 = ldf names in base;
      r166 = dyn names4(files28);
      goto L0(r166);
    L3():
      r164 = dyn base18(<sym files>);
      goto L0(r164);
    L1(dx25):
      return dx25;
    L4():
      dr18 = tryDispatchBuiltin.1("[", r165);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(r168):
      which = ld which;
      which1 = force? which;
      __7 = ldf `[` in base;
      r169 = dyn __7(r168, which1);
      goto L1(r169);
    L6():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx24);
    };
    r171 = dyn file_test3("-nt", p44, p45);
    check L257() else D97();
  L259():
    built18 = ld built;
    check L260() else D99();
  L289():
    ___3 = ldf `[<-` in base;
    r193 = dyn ___3(l13, NULL, r192);
    goto L66(r193);
  L292():
    later3 = force? later2;
    checkMissing(later3);
    length2 = ldf length in base;
    r196 = dyn length2(later3);
    check L293() else D113();
  L294():
    sym22 = ldf match;
    base22 = ldf match in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L295() else L296();
  L338():
    db5 = force? db4;
    checkMissing(db5);
    db6 = ld db1;
    check L339() else D134();
  D80():
    deopt 250 [built5, this_os2];
  D93():
    deopt 303 [r159];
  D95():
    deopt 309 [r160];
  D97():
    deopt 318 [r171];
  D99():
    deopt 321 [built18];
  D113():
    deopt 377 [r196];
  D134():
    deopt 454 [db6];
  L46(dx19):
    st built = dx19;
    grepl1 = ldf grepl;
    check L224() else D82();
  L69(r198):
    st which = r198;
    sym24 = ldf all;
    base24 = ldf all in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L303() else L304();
  L218():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L45(dx12);
  L219():
    this_os3 = force? this_os2;
    __5 = ldf `[` in base;
    r131 = dyn __5(built5, this_os3);
    goto L45(r131);
  L220():
    dr12 = tryDispatchBuiltin.0("[<-", l2, dx13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L222() else L221(dx13, dr12);
  L221(dx15, l4):
    name_only = ld name_only;
    check L223() else D81();
  L251():
    goto L54(r159);
  L253():
    goto L53(r160);
  L257():
    all = ldf all in base;
    r172 = dyn all(r171);
    check L258() else D98();
  L260():
    built19 = force? built18;
    checkMissing(built19);
    l8 = ld files;
    c40 = `is.object`(l8);
    if c40 then L261() else L262(built19, l8);
  L293():
    goto L67(r196);
  L295():
    sym23 = ldf names;
    base23 = ldf names in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L297() else L298();
  L296():
    r197 = dyn base22(<lang names(later)>, <sym basenames>);
    goto L69(r197);
  L339():
    db7 = force? db6;
    checkMissing(db7);
    c57 = ldf c in base;
    r231 = dyn c57(db5, db7);
    check L340() else D135();
  D81():
    deopt 254 [dx15, l4, dx13, name_only];
  D82():
    deopt 259 [];
  D98():
    deopt 320 [r172];
  D135():
    deopt 457 [r231];
  L57(built23, dx27):
    st files = dx27;
    goto L58(built23);
  L70(r200):
    basenames6 = ld basenames;
    check L301() else D116();
  L71(r204):
    c53 = `as.logical`(r204);
    if c53 then L308() else L72();
  L222():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L46(dx17);
  L223():
    name_only1 = force? name_only;
    ___ = ldf `[<-` in base;
    r132 = dyn ___(l4, dx13, name_only1);
    goto L46(r132);
  L224():
    p41 = prom<V +>{
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r134):
      return r134;
    L1():
      built6 = ld built;
      built7 = force? built6;
      checkMissing(built7);
      names1 = ldf names in base;
      r135 = dyn names1(built7);
      goto L0(r135);
    L2():
      r133 = dyn base12(<sym built>);
      goto L0(r133);
    };
    r137 = dyn grepl1("/", p41);
    check L225() else D83();
  L258():
    goto L55(r172);
  L261():
    dr20 = tryDispatchBuiltin.0("[<-", l8, built19);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L263() else L262(built19, dr20);
  L262(built21, l10):
    which2 = ld which;
    check L264() else D100();
  L297():
    later4 = ld later;
    check L299() else D114();
  L298():
    r199 = dyn base23(<sym later>);
    goto L70(r199);
  L303():
    file_test5 = ldf file_test;
    check L305() else D118();
  L304():
    r203 = dyn base24(<lang file_test("-nt", later_file, `[`(names(files), which))>);
    goto L71(r203);
  L340():
    goto L82(r231);
  D83():
    deopt 262 [r137];
  D100():
    deopt 324 [built21, l10, built19, which2];
  D114():
    deopt 382 [later4];
  D116():
    deopt 386 [basenames6];
  D118():
    deopt 396 [];
  L72():
    goto L74(NULL);
  L74(later12):
    goto L75(later12);
  L225():
    st some_os = r137;
    built8 = ld built;
    check L226() else D84();
  L263():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L57(built19, dx26);
  L264():
    which3 = force? which2;
    ___2 = ldf `[<-` in base;
    r173 = dyn ___2(l10, built19, which3);
    goto L57(built21, r173);
  L299():
    later5 = force? later4;
    checkMissing(later5);
    names6 = ldf names in base;
    r201 = dyn names6(later5);
    check L300() else D115();
  L301():
    basenames7 = force? basenames6;
    checkMissing(basenames7);
    match1 = ldf match in base;
    r202 = dyn match1(r200, basenames7, NA_INT, NULL);
    check L302() else D117();
  L305():
    p51 = prom<V +>{
      later_file7 = ld later_file;
      later_file8 = force? later_file7;
      checkMissing(later_file8);
      return later_file8;
    };
    p52 = prom<V +>{
      sym25 = ldf names;
      base25 = ldf names in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L2() else L3();
    L0(r207):
      c52 = `is.object`(r207);
      if c52 then L4() else L5(r207);
    L2():
      files29 = ld files;
      files30 = force? files29;
      checkMissing(files30);
      names7 = ldf names in base;
      r208 = dyn names7(files30);
      goto L0(r208);
    L3():
      r206 = dyn base25(<sym files>);
      goto L0(r206);
    L1(dx31):
      return dx31;
    L4():
      dr24 = tryDispatchBuiltin.1("[", r207);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L6() else L5(dr24);
    L5(r210):
      which4 = ld which;
      which5 = force? which4;
      __8 = ldf `[` in base;
      r211 = dyn __8(r210, which5);
      goto L1(r211);
    L6():
      dx30 = getTryDispatchBuiltinValue(dr24);
      goto L1(dx30);
    };
    r213 = dyn file_test5("-nt", p51, p52);
    check L306() else D119();
  L308():
    later6 = ld later;
    check L309() else D121();
  D84():
    deopt 264 [built8];
  D115():
    deopt 385 [r201];
  D117():
    deopt 391 [r202];
  D119():
    deopt 400 [r213];
  D121():
    deopt 403 [later6];
  L226():
    built9 = force? built8;
    checkMissing(built9);
    c35 = `is.object`(built9);
    if c35 then L227() else L228(built9);
  L300():
    goto L70(r201);
  L302():
    goto L69(r202);
  L306():
    all1 = ldf all in base;
    r214 = dyn all1(r213);
    check L307() else D120();
  L309():
    later7 = force? later6;
    checkMissing(later7);
    l14 = ld files;
    c54 = `is.object`(l14);
    if c54 then L310() else L311(later7, l14);
  D120():
    deopt 402 [r214];
  L47(dx21):
    st built = dx21;
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L231() else L232();
  L73(later11, dx33):
    st files = dx33;
    goto L74(later11);
  L227():
    dr14 = tryDispatchBuiltin.1("[", built9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L229() else L228(dr14);
  L228(built11):
    some_os = ld some_os;
    check L230() else D85();
  L307():
    goto L71(r214);
  L310():
    dr26 = tryDispatchBuiltin.0("[<-", l14, later7);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L312() else L311(later7, dr26);
  L311(later9, l16):
    which6 = ld which;
    check L313() else D122();
  D85():
    deopt 266 [built11, some_os];
  D122():
    deopt 406 [later9, l16, later7, which6];
  L48(r141):
    st names_built = r141;
    goto L49();
  L229():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L47(dx20);
  L230():
    some_os1 = force? some_os;
    checkMissing(some_os1);
    r138 = `!`(some_os1);
    __6 = ldf `[` in base;
    r139 = dyn __6(built11, r138);
    goto L47(r139);
  L231():
    built12 = ld built;
    check L233() else D86();
  L232():
    r140 = dyn base13(<sym built>);
    goto L48(r140);
  L312():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L73(later7, dx32);
  L313():
    which7 = force? which6;
    ___4 = ldf `[<-` in base;
    r215 = dyn ___4(l16, later7, which7);
    goto L73(later9, r215);
  D86():
    deopt 273 [built12];
  L233():
    built13 = force? built12;
    checkMissing(built13);
    names2 = ldf names in base;
    r142 = dyn names2(built13);
    check L234() else D87();
  D87():
    deopt 276 [r142];
  L234():
    goto L48(r142);
  }
}
fun inner1144301131(f, stages) {
  (reg f:*, reg stages:*) -+> V { var f:*, var stages:*, reg prepare_Rd:cls, reg f1:*, reg f2:V, reg p:p(V +), reg encoding:*, reg encoding1:V, reg p1:p(V +), reg os:*, reg os1:V, reg p2:p(V +), reg stages1:*, reg stages2:V, reg p3:p(V +), reg step:*, reg step1:V, reg r4:V, reg p4:p(V +), reg step2:*, reg step3:V, reg r6:V, reg p5:p(V +), reg macros:*, reg macros1:V, reg p6:p(V +), reg r9:V, reg structure:cls, reg Rd:*, reg Rd1:V, reg p7:p(V +), reg step4:*, reg step5:V, reg p8:p(V +), reg r12:V |
    mkenv;
    st f = f;
    st stages = stages;
    prepare_Rd = ldf prepare_Rd;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p1 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    p2 = prom<V +>{
      os = ld os;
      os1 = force? os;
      checkMissing(os1);
      return os1;
    };
    p3 = prom<V +>{
      stages1 = ld stages;
      stages2 = force? stages1;
      checkMissing(stages2);
      return stages2;
    };
    p4 = prom<V +>{
      step = ld step;
      step1 = force? step;
      checkMissing(step1);
      r4 = `>`(step1, 1);
      return r4;
    };
    p5 = prom<V +>{
      step2 = ld step;
      step3 = force? step2;
      checkMissing(step3);
      r6 = `>`(step3, 2);
      return r6;
    };
    p6 = prom<V +>{
      macros = ld macros;
      macros1 = force? macros;
      checkMissing(macros1);
      return macros1;
    };
    r9 = dyn prepare_Rd[, encoding, defines, stages, warningCalls, stage2, stage3, macros](p, p1, p2, p3, FALSE, p4, p5, p6);
    check L1() else D1();
  D1():
    deopt 17 [r9];
  L1():
    st Rd = r9;
    structure = ldf structure;
    check L2() else D2();
  D2():
    deopt 20 [];
  L2():
    p7 = prom<V +>{
      Rd = ld Rd;
      Rd1 = force? Rd;
      checkMissing(Rd1);
      return Rd1;
    };
    p8 = prom<V +>{
      step4 = ld step;
      step5 = force? step4;
      checkMissing(step5);
      return step5;
    };
    r12 = dyn structure[, prepared](p7, p8);
    check L3() else D3();
  D3():
    deopt 24 [r12];
  L3():
    popenv;
    return r12;
  }
}