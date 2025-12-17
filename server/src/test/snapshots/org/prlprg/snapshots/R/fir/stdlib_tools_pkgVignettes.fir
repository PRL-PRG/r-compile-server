fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner63785248;
    st pkgVignettes = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner63785248(package, dir, subdirs, `lib.loc`, output, source, check) {
  (reg package:*, reg dir:*, reg subdirs:*, reg lib_loc:*, reg output:*, reg source:*, reg check:*) -+> V { var package:*, var dir:*, var subdirs:*, reg subdirs_isMissing:L, reg subdirs_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var output:*, reg output_isMissing:L, reg output_orDefault:*, var source:*, reg source_isMissing:L, reg source_orDefault:*, var check:*, reg check_isMissing:L, reg check_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg package1:*, reg package2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg missing1:cls, reg r16:V, reg c2:L, reg stop1:cls, reg r17:V, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r20:V, reg r21:V, reg c3:L, reg stop2:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg r25:V, reg file_path_as_absolute:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg subdirs1:*, reg subdirs2:V, reg c4:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg missing2:cls, reg r33:V, reg c6:L, reg r34:S, reg subdirs3:*, reg subdirs4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x:V, reg file_path:cls, reg dir7:*, reg dir8:V, reg p6:p(V +), reg subdir:*, reg subdir1:V, reg p7:p(V +), reg r38:V, reg dir_exists1:cls, reg docdir:*, reg docdir1:V, reg p8:p(V +), reg r40:V, reg c8:L, reg i7:I, reg dir_exists2:cls, reg docdir2:*, reg docdir3:V, reg p9:p(V +), reg r43:V, reg r44:V, reg c9:L, reg loadVignetteBuilder:cls, reg dir9:*, reg dir10:V, reg p10:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p11:p(V +), reg r49:V, reg vignetteEngine:cls, reg buildPkgs:*, reg buildPkgs1:V, reg p12:p(V +), reg r51:V, reg character:cls, reg r52:V, reg list_files:cls, reg docdir4:*, reg docdir5:V, reg p13:p(V +), reg r54:V, reg inRbuildignore:cls, reg sub:cls, reg paste0:cls, reg dir11:*, reg dir12:V, reg p14:p(V +), reg r56:V, reg p15:p(V +), reg allFiles:*, reg allFiles1:V, reg p16:p(V +), reg r59:V, reg p17:p(V +), reg dir13:*, reg dir14:V, reg p18:p(V +), reg r62:V, reg allFiles2:*, reg allFiles3:V, reg c10:L, reg allFiles5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg exclude:*, reg exclude1:V, reg r63:V, reg __:cls, reg r64:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r65:V, reg r66:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:V, reg allFiles6:*, reg allFiles7:V, reg length1:cls, reg r69:V, reg rep_int:cls, reg r70:V, reg character1:cls, reg r71:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r72:V, reg r73:V, reg allFiles8:*, reg allFiles9:V, reg length2:cls, reg r74:V, reg r75:V, reg c11:L, reg names:cls, reg engineList:*, reg engineList1:V, reg p19:p(V +), reg r77:V, reg s1:V, reg l1:I, reg i10:I, reg i11:I, reg i12:I, reg c12:L, reg x1:V, reg engineList2:*, reg engineList3:V, reg c13:L, reg i16:I, reg engineList5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i18:I, reg dx3:V, reg name:*, reg name1:V, reg __1:cls, reg r78:V, reg engine:*, reg engine1:V, reg c14:L, reg i20:I, reg engine3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i22:I, reg dx5:V, reg r79:V, reg s2:V, reg l2:I, reg i23:I, reg i24:I, reg i25:I, reg i26:I, reg c15:L, reg x2:V, reg grep:cls, reg pattern:*, reg pattern1:V, reg p20:p(V +), reg allFiles10:*, reg allFiles11:V, reg p21:p(V +), reg r82:V, reg l3:*, reg c16:L, reg i33:I, reg i34:I, reg r84:L, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i37:I, reg i38:I, reg dx7:V, reg idxs:*, reg idxs1:V, reg ___:cls, reg r87:V, reg vapply:cls, reg allFiles12:*, reg allFiles13:V, reg c17:L, reg allFiles15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg idxs2:*, reg idxs3:V, reg __2:cls, reg r88:V, reg p22:p(V +), reg r90:cls, reg p23:p(V +), reg r92:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r93:V, reg i43:I, reg i44:I, reg r94:V, reg keep:*, reg keep1:V, reg any:cls, reg r95:V, reg c18:L, reg idxs4:*, reg idxs5:V, reg c19:L, reg i51:I, reg i52:I, reg idxs7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i55:I, reg i56:I, reg dx11:V, reg keep2:*, reg keep3:V, reg __3:cls, reg r96:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r97:V, reg i61:I, reg i62:I, reg r98:V, reg engine4:*, reg engine5:V, reg c20:L, reg i65:I, reg i66:I, reg engine7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i69:I, reg i70:I, reg dx13:V, reg r99:V, reg is_function:cls, reg r100:V, reg c21:L, reg allFiles16:*, reg allFiles17:V, reg c22:L, reg i77:I, reg i78:I, reg allFiles19:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i81:I, reg i82:I, reg dx15:V, reg idxs8:*, reg idxs9:V, reg __4:cls, reg r101:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r102:V, reg i87:I, reg i88:I, reg r103:V, reg docs:*, reg docs1:V, reg docsT:*, reg docsT1:V, reg c23:cls, reg r104:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r105:V, reg i93:I, reg i94:I, reg r106:V, reg names1:*, reg names2:V, reg gsub:cls, reg pattern2:*, reg pattern3:V, reg p24:p(V +), reg basename:cls, reg docsT2:*, reg docsT3:V, reg p25:p(V +), reg r109:V, reg p26:p(V +), reg r111:V, reg c24:cls, reg r112:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r113:V, reg i99:I, reg i100:I, reg r114:V, reg engines:*, reg engines1:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r115:V, reg i105:I, reg i106:I, reg r116:V, reg name2:*, reg name3:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r117:V, reg i111:I, reg i112:I, reg r118:V, reg idxs10:*, reg idxs11:V, reg length3:cls, reg r119:V, reg rep_int1:cls, reg r120:V, reg c25:cls, reg r121:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r122:V, reg i117:I, reg i118:I, reg r123:V, reg patterns:*, reg patterns1:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r124:V, reg i123:I, reg i124:I, reg r125:V, reg pattern4:*, reg pattern5:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r126:V, reg i129:I, reg i130:I, reg r127:V, reg idxs12:*, reg idxs13:V, reg length4:cls, reg r128:V, reg rep_int2:cls, reg r129:V, reg c26:cls, reg r130:V, reg i131:I, reg i132:I, reg matchedPattern:*, reg matchedPattern1:V, reg c27:L, reg i135:I, reg i136:I, reg matchedPattern3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i139:I, reg i140:I, reg dx17:V, reg idxs14:*, reg idxs15:V, reg r132:V, reg __5:cls, reg r133:V, reg allFiles20:*, reg allFiles21:V, reg c28:L, reg i143:I, reg i144:I, reg allFiles23:V, reg dr18:V, reg dc9:L, reg dx18:V, reg i147:I, reg i148:I, reg dx19:V, reg idxs16:*, reg idxs17:V, reg r134:V, reg __6:cls, reg r135:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r136:V, reg i153:I, reg i154:I, reg r137:V, reg allFiles24:*, reg allFiles25:V, reg length5:cls, reg r138:V, reg r139:V, reg c29:L, reg i159:I, reg i165:I, reg i166:I, reg check1:*, reg check2:V, reg c30:L, reg c32:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r142:V, reg c35:L, reg r143:V, reg matchedPattern4:*, reg matchedPattern5:V, reg any1:cls, reg r144:V, reg c36:L, reg c37:V, reg c39:L, reg substring:cls, reg allFiles26:*, reg allFiles27:V, reg c40:L, reg allFiles29:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg matchedPattern6:*, reg matchedPattern7:V, reg __7:cls, reg r145:V, reg p27:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r147:V, reg r148:V, reg dir15:*, reg dir16:V, reg nchar:cls, reg r149:V, reg r150:V, reg p28:p(V +), reg r152:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r153:V, reg r154:V, reg paste1:cls, reg sQuote:cls, reg files:*, reg files1:V, reg p29:p(V +), reg r156:V, reg p30:p(V +), reg r158:V, reg c41:cls, reg r159:V, reg r160:V, reg stopifnot:cls, reg sym22:cls, reg base22:cls, reg guard22:L, reg r162:V, reg r163:V, reg names3:*, reg names4:V, reg length6:cls, reg r164:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r167:V, reg r168:V, reg r169:V, reg docs2:*, reg docs3:V, reg length7:cls, reg r170:V, reg r171:V, reg p31:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r173:V, reg r174:V, reg engines2:*, reg engines3:V, reg length8:cls, reg r175:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r178:V, reg r179:V, reg r180:V, reg docs4:*, reg docs5:V, reg length9:cls, reg r181:V, reg r182:V, reg p32:p(V +), reg sym26:cls, reg base26:cls, reg guard26:L, reg r184:V, reg r185:V, reg patterns2:*, reg patterns3:V, reg length10:cls, reg r186:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r189:V, reg r190:V, reg r191:V, reg docs6:*, reg docs7:V, reg length11:cls, reg r192:V, reg r193:V, reg p33:p(V +), reg anyDuplicated:cls, reg docs8:*, reg docs9:V, reg p34:p(V +), reg r196:V, reg r197:V, reg p35:p(V +), reg r199:V, reg _get_package_metadata:cls, reg dir17:*, reg dir18:V, reg p36:p(V +), reg r201:V, reg c42:L, reg r203:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __8:cls, reg r204:V, reg vapply1:cls, reg docs10:*, reg docs11:V, reg p37:p(V +), reg getVignetteEncoding:*, reg getVignetteEncoding1:V, reg p38:p(V +), reg defaultEncoding:*, reg defaultEncoding1:V, reg p39:p(V +), reg r208:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r209:V, reg r210:V, reg docs12:*, reg docs13:V, reg names5:*, reg names6:V, reg engines4:*, reg engines5:V, reg patterns4:*, reg patterns5:V, reg encodings:*, reg encodings1:V, reg docdir6:*, reg docdir7:V, reg dir19:*, reg dir20:V, reg msg:*, reg msg1:V, reg list:cls, reg r211:V, reg output1:*, reg output2:V, reg c43:L, reg character2:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r212:V, reg r213:V, reg docs14:*, reg docs15:V, reg length12:cls, reg r214:V, reg p40:p(V +), reg r216:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r217:V, reg r218:V, reg docs16:*, reg docs17:V, reg r219:I, reg s3:V, reg l6:I, reg i167:I, reg i168:I, reg i169:I, reg c44:L, reg x3:V, reg docs18:*, reg docs19:V, reg c45:L, reg i173:I, reg docs21:V, reg dr24:V, reg dc12:L, reg dx24:V, reg i175:I, reg dx25:V, reg i176:*, reg i177:V, reg __9:cls, reg r220:V, reg names7:*, reg names8:V, reg c46:L, reg i179:I, reg names10:V, reg dr26:V, reg dc13:L, reg dx26:V, reg i181:I, reg dx27:V, reg i182:*, reg i183:V, reg __10:cls, reg r221:V, reg vignetteEngine1:cls, reg engines6:*, reg engines7:V, reg c47:L, reg engines9:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg i184:*, reg i185:V, reg __11:cls, reg r222:V, reg p41:p(V +), reg r224:V, reg find_vignette_product:cls, reg name4:*, reg name5:V, reg p42:p(V +), reg docdir8:*, reg docdir9:V, reg p43:p(V +), reg engine8:*, reg engine9:V, reg p44:p(V +), reg r228:V, reg outputI:*, reg outputI1:V, reg l7:*, reg c48:L, reg i187:I, reg outputI3:V, reg l9:*, reg dr30:V, reg dc15:L, reg dx30:V, reg i189:I, reg dx31:V, reg i190:*, reg i191:V, reg ___1:cls, reg r229:V, reg outputs:*, reg outputs1:V, reg l10:*, reg c49:L, reg outputs3:V, reg l12:*, reg dr32:V, reg dc16:L, reg dx32:V, reg outputs5:V, reg dx33:V, reg r230:V, reg source1:*, reg source2:V, reg c50:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r231:V, reg r232:V, reg list1:cls, reg r233:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r234:V, reg r235:V, reg docs22:*, reg docs23:V, reg r236:I, reg s4:V, reg l13:I, reg i192:I, reg i193:I, reg i194:I, reg c51:L, reg x4:V, reg docs24:*, reg docs25:V, reg c52:L, reg i198:I, reg docs27:V, reg dr34:V, reg dc17:L, reg dx34:V, reg i200:I, reg dx35:V, reg i201:*, reg i202:V, reg __12:cls, reg r237:V, reg names11:*, reg names12:V, reg c53:L, reg i204:I, reg names14:V, reg dr36:V, reg dc18:L, reg dx36:V, reg i206:I, reg dx37:V, reg i207:*, reg i208:V, reg __13:cls, reg r238:V, reg vignetteEngine2:cls, reg engines10:*, reg engines11:V, reg c54:L, reg engines13:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg i209:*, reg i210:V, reg __14:cls, reg r239:V, reg p45:p(V +), reg r241:V, reg find_vignette_product1:cls, reg name6:*, reg name7:V, reg p46:p(V +), reg docdir10:*, reg docdir11:V, reg p47:p(V +), reg engine10:*, reg engine11:V, reg p48:p(V +), reg r245:V, reg sourcesI:*, reg sourcesI1:V, reg l14:*, reg c55:L, reg i212:I, reg sourcesI3:V, reg l16:*, reg dr40:V, reg dc20:L, reg dx40:V, reg i214:I, reg dx41:V, reg file:*, reg file1:V, reg ____:cls, reg r246:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r247:V, reg r248:V, reg lengths:cls, reg sources:*, reg sources1:V, reg p49:p(V +), reg r250:V, reg r251:V, reg any2:cls, reg r252:V, reg c56:L, reg r253:cls, reg rootify:cls, reg names15:cls, reg sources2:*, reg sources3:V, reg p50:p(V +), reg r255:V, reg p51:p(V +), reg r257:V, reg lapply:cls, reg sources4:*, reg sources5:V, reg p52:p(V +), reg rootify1:*, reg rootify2:V, reg p53:p(V +), reg r260:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r261:V, reg r262:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r263:V, reg r264:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r265:V, reg r266:V, reg dnm:*, reg dnm1:V, reg unlist:cls, reg snm:*, reg snm1:V, reg p54:p(V +), reg r268:V, reg match:cls, reg r269:V, reg is_na:cls, reg r270:V, reg any3:cls, reg r271:V, reg r272:V, reg c57:L, reg which:cls, reg ind:*, reg ind1:V, reg p55:p(V +), reg r274:V, reg s5:V, reg l17:I, reg i215:I, reg i216:I, reg i217:I, reg c58:L, reg x5:V, reg sources6:*, reg sources7:V, reg c59:L, reg i221:I, reg sources9:V, reg dr42:V, reg dc21:L, reg dx42:V, reg i223:I, reg dx43:V, reg i224:*, reg i225:V, reg __15:cls, reg r275:V, reg c60:L, reg i227:I, reg dx45:V, reg dr44:V, reg dc22:L, reg dx46:V, reg i229:I, reg dx47:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r276:V, reg i232:I, reg dx50:V, reg r277:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r278:V, reg i235:I, reg dx53:V, reg r279:V, reg snm2:*, reg snm3:V, reg c61:L, reg i237:I, reg dx55:V, reg snm5:V, reg dr46:V, reg dc23:L, reg dx57:V, reg i239:I, reg dx58:V, reg dx59:V, reg i240:*, reg i241:V, reg __16:cls, reg r280:V, reg dnm2:*, reg dnm3:V, reg c62:L, reg i243:I, reg dx61:V, reg dnm5:V, reg dr48:V, reg dc24:L, reg dx63:V, reg i245:I, reg dx64:V, reg dx65:V, reg i246:*, reg i247:V, reg r281:V, reg __17:cls, reg r282:V, reg match1:cls, reg r283:V, reg is_na1:cls, reg r284:V, reg __18:cls, reg r285:V, reg l18:*, reg c63:L, reg i249:I, reg dx67:V, reg l20:*, reg dr50:V, reg dc25:L, reg dx69:V, reg i251:I, reg dx71:V, reg i252:*, reg i253:V, reg ____1:cls, reg r286:V, reg i254:V, reg sources10:*, reg sources11:V, reg l21:*, reg c64:L, reg sources13:V, reg l23:*, reg dr52:V, reg dc26:L, reg dx72:V, reg sources15:V, reg dx73:V, reg r287:V, reg l24:*, reg class__:cls, reg r288:V, reg z:*, reg z1:V |
    mkenv;
    st package = package;
    st dir = dir;
    subdirs_isMissing = missing.0(subdirs);
    if subdirs_isMissing then L0(NULL) else L0(subdirs);
  L0(subdirs_orDefault):
    st subdirs = subdirs_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    output_isMissing = missing.0(output);
    if output_isMissing then L2(FALSE) else L2(output);
  L2(output_orDefault):
    st output = output_orDefault;
    source_isMissing = missing.0(source);
    if source_isMissing then L3(FALSE) else L3(source);
  L3(source_orDefault):
    st source = source_orDefault;
    check_isMissing = missing.0(check);
    if check_isMissing then L4(FALSE) else L4(check);
  L4(check_orDefault):
    st check = check_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L104() else L105();
  L5(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L106() else L6();
  L104():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L5(r2);
  L105():
    r = dyn base(<sym package>);
    goto L5(r);
  L6():
    goto L10();
  L10():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L118() else L119();
  L106():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L107() else L108();
  L7(r5):
    r7 = `!=`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L111() else L8();
  L11(r15):
    c2 = `as.logical`(r15);
    if c2 then L120() else L12();
  L107():
    package1 = ld package;
    check L109() else D0();
  L108():
    r4 = dyn base1(<sym package>);
    goto L7(r4);
  L118():
    missing1 = ldf missing in base;
    r16 = dyn missing1(<sym dir>);
    goto L11(r16);
  L119():
    r14 = dyn base2(<sym dir>);
    goto L11(r14);
  D0():
    deopt 6 [package1];
  L8():
    goto L9();
  L9():
    find_package = ldf `find.package`;
    check L115() else D4();
  L12():
    goto L13();
  L13():
    dir_exists = ldf `dir.exists`;
    check L124() else D8();
  L109():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r6 = dyn length(package2);
    check L110() else D1();
  L111():
    stop = ldf stop;
    check L112() else D2();
  L120():
    stop1 = ldf stop;
    check L121() else D6();
  D1():
    deopt 9 [r6];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  D6():
    deopt 30 [];
  D8():
    deopt 36 [];
  L110():
    goto L7(r6);
  L112():
    r8 = dyn stop("argument 'package' must be of length 1");
    check L113() else D3();
  L115():
    p = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r12 = dyn find_package(p, p1);
    check L116() else D5();
  L121():
    r17 = dyn stop1("you must specify 'package' or 'dir'");
    check L122() else D7();
  L124():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r20 = dyn dir_exists(p2);
    check L125() else D9();
  D3():
    deopt 15 [r8];
  D5():
    deopt 22 [r12];
  D7():
    deopt 32 [r17];
  D9():
    deopt 38 [r20];
  L113():
    goto L9();
  L116():
    st dir = r12;
    goto L10();
  L122():
    goto L13();
  L125():
    r21 = `!`(r20);
    c3 = `as.logical`(r21);
    if c3 then L126() else L14();
  L14():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L130() else D12();
  L15():
    dir_exists2 = ldf `dir.exists`;
    check L150() else D20();
  L126():
    stop2 = ldf stop;
    check L127() else D10();
  D10():
    deopt 41 [];
  D12():
    deopt 47 [];
  D20():
    deopt 85 [];
  L127():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r23 = dyn gettextf("directory '%s' does not exist", p3);
      return r23;
    };
    r25 = dyn stop2[, domain](p4, NA_LGL);
    check L128() else D11();
  L130():
    p5 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r28 = dyn file_path_as_absolute(p5);
    check L131() else D13();
  L150():
    p9 = prom<V +>{
      docdir2 = ld docdir;
      docdir3 = force? docdir2;
      checkMissing(docdir3);
      return docdir3;
    };
    r43 = dyn dir_exists2(p9);
    check L151() else D21();
  D11():
    deopt 45 [r25];
  D13():
    deopt 49 [r28];
  D21():
    deopt 87 [r43];
  L128():
    goto L15();
  L131():
    st dir = r28;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L132() else L133();
  L151():
    r44 = `!`(r43);
    c9 = `as.logical`(r44);
    if c9 then L152() else L27();
  L16(r30):
    c5 = `as.logical`(r30);
    if c5 then L135() else L17();
  L27():
    loadVignetteBuilder = ldf loadVignetteBuilder;
    check L155() else D22();
  L132():
    subdirs1 = ld subdirs;
    check L134() else D14();
  L133():
    r29 = dyn base3(<sym subdirs>);
    goto L16(r29);
  L152():
    popenv;
    return NULL;
  D14():
    deopt 52 [subdirs1];
  D22():
    deopt 95 [];
  L17():
    goto L21();
  L21():
    subdirs3 = ld subdirs;
    check L141() else D15();
  L134():
    subdirs2 = force? subdirs1;
    checkMissing(subdirs2);
    c4 = `==`(subdirs2, NULL);
    goto L16(c4);
  L135():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L136() else L137();
  L155():
    p10 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    p11 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    r49 = dyn loadVignetteBuilder[, mustwork, `lib.loc`](p10, FALSE, p11);
    check L156() else D23();
  D15():
    deopt 65 [subdirs3];
  D23():
    deopt 101 [r49];
  L18(r32):
    c6 = `as.logical`(r32);
    if c6 then L138() else L19();
  L136():
    missing2 = ldf missing in base;
    r33 = dyn missing2(<sym package>);
    goto L18(r33);
  L137():
    r31 = dyn base4(<sym package>);
    goto L18(r31);
  L141():
    subdirs4 = force? subdirs3;
    checkMissing(subdirs4);
    s = toForSeq(subdirs4);
    l = length(s);
    i = 0;
    goto L22(i);
  L156():
    st buildPkgs = r49;
    vignetteEngine = ldf vignetteEngine;
    check L157() else D24();
  D24():
    deopt 104 [];
  L19():
    goto L20("doc");
  L20(r34):
    st subdirs = r34;
    goto L21();
  L22(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l, i2);
    if c7 then L142() else L26();
  L138():
    goto L20("vignettes");
  L157():
    p12 = prom<V +>{
      buildPkgs = ld buildPkgs;
      buildPkgs1 = force? buildPkgs;
      checkMissing(buildPkgs1);
      return buildPkgs1;
    };
    r51 = dyn vignetteEngine[package](p12);
    check L158() else D25();
  D25():
    deopt 107 [r51];
  L24(i7):
    goto L15();
  L26():
    x = `[[`(s, i2, NULL, TRUE);
    st subdir = x;
    file_path = ldf `file.path`;
    check L143() else D16();
  L142():
    goto L24(i2);
  L158():
    st engineList = r51;
    character = ldf character;
    check L159() else D26();
  D16():
    deopt 68 [i2];
  D26():
    deopt 110 [];
  L143():
    p6 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p7 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r38 = dyn file_path(p6, p7);
    check L144() else D17();
  L159():
    r52 = dyn character();
    check L160() else D27();
  D17():
    deopt 71 [i2, r38];
  D27():
    deopt 111 [r52];
  L144():
    st docdir = r38;
    dir_exists1 = ldf `dir.exists`;
    check L145() else D18();
  L160():
    st patterns = r52;
    st engines = r52;
    st names = r52;
    st docs = r52;
    list_files = ldf `list.files`;
    check L161() else D28();
  D18():
    deopt 74 [i2];
  D28():
    deopt 117 [];
  L145():
    p8 = prom<V +>{
      docdir = ld docdir;
      docdir1 = force? docdir;
      checkMissing(docdir1);
      return docdir1;
    };
    r40 = dyn dir_exists1(p8);
    check L146() else D19();
  L161():
    p13 = prom<V +>{
      docdir4 = ld docdir;
      docdir5 = force? docdir4;
      checkMissing(docdir5);
      return docdir5;
    };
    r54 = dyn list_files[, `all.files`, `full.names`](p13, FALSE, TRUE);
    check L162() else D29();
  D19():
    deopt 76 [i2, r40];
  D29():
    deopt 123 [r54];
  L146():
    c8 = `as.logical`(r40);
    if c8 then L147() else L23();
  L162():
    st allFiles = r54;
    inRbuildignore = ldf inRbuildignore;
    check L163() else D30();
  D30():
    deopt 126 [];
  L23():
    goto L22(i2);
  L147():
    goto L24(i2);
  L163():
    p17 = prom<V +>{
      sub = ldf sub;
      p15 = prom<V +>{
        paste0 = ldf paste0;
        p14 = prom<V +>{
          dir11 = ld dir;
          dir12 = force? dir11;
          checkMissing(dir12);
          return dir12;
        };
        r56 = dyn paste0(p14, "/");
        return r56;
      };
      p16 = prom<V +>{
        allFiles = ld allFiles;
        allFiles1 = force? allFiles;
        checkMissing(allFiles1);
        return allFiles1;
      };
      r59 = dyn sub[, , , fixed](p15, "", p16, TRUE);
      return r59;
    };
    p18 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r62 = dyn inRbuildignore(p17, p18);
    check L164() else D31();
  D31():
    deopt 129 [r62];
  L164():
    st exclude = r62;
    allFiles2 = ld allFiles;
    check L165() else D32();
  D32():
    deopt 131 [allFiles2];
  L165():
    allFiles3 = force? allFiles2;
    checkMissing(allFiles3);
    c10 = `is.object`(allFiles3);
    if c10 then L166() else L167(allFiles3);
  L29(dx1):
    st allFiles = dx1;
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L170() else L171();
  L166():
    dr = tryDispatchBuiltin.1("[", allFiles3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L168() else L167(dr);
  L167(allFiles5):
    exclude = ld exclude;
    check L169() else D33();
  D33():
    deopt 133 [allFiles5, exclude];
  L30(r66):
    st matchedPattern = r66;
    character1 = ldf character;
    check L177() else D37();
  L168():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(dx);
  L169():
    exclude1 = force? exclude;
    checkMissing(exclude1);
    r63 = `!`(exclude1);
    __ = ldf `[` in base;
    r64 = dyn __(allFiles5, r63);
    goto L29(r64);
  L170():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L172() else L173();
  L171():
    r65 = dyn base5(FALSE, <lang length(allFiles)>);
    goto L30(r65);
  D37():
    deopt 151 [];
  L31(r68):
    rep_int = ldf `rep.int` in base;
    r70 = dyn rep_int(FALSE, r68);
    check L176() else D36();
  L172():
    allFiles6 = ld allFiles;
    check L174() else D34();
  L173():
    r67 = dyn base6(<sym allFiles>);
    goto L31(r67);
  L177():
    r71 = dyn character1();
    check L178() else D38();
  D34():
    deopt 143 [allFiles6];
  D36():
    deopt 148 [r70];
  D38():
    deopt 152 [r71];
  L174():
    allFiles7 = force? allFiles6;
    checkMissing(allFiles7);
    length1 = ldf length in base;
    r69 = dyn length1(allFiles7);
    check L175() else D35();
  L176():
    goto L30(r70);
  L178():
    st msg = r71;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L179() else L180();
  D35():
    deopt 146 [r69];
  L32(r73):
    r75 = `>`(r73, 0);
    c11 = `as.logical`(r75);
    if c11 then L183() else L33();
  L175():
    goto L31(r69);
  L179():
    allFiles8 = ld allFiles;
    check L181() else D39();
  L180():
    r72 = dyn base7(<sym allFiles>);
    goto L32(r72);
  D39():
    deopt 156 [allFiles8];
  L33():
    goto L67();
  L67():
    stopifnot = ldf stopifnot;
    check L301() else D92();
  L181():
    allFiles9 = force? allFiles8;
    checkMissing(allFiles9);
    length2 = ldf length in base;
    r74 = dyn length2(allFiles9);
    check L182() else D40();
  L183():
    names = ldf names;
    check L184() else D41();
  D40():
    deopt 159 [r74];
  D41():
    deopt 163 [];
  D92():
    deopt 348 [];
  L182():
    goto L32(r74);
  L184():
    p19 = prom<V +>{
      engineList = ld engineList;
      engineList1 = force? engineList;
      checkMissing(engineList1);
      return engineList1;
    };
    r77 = dyn names(p19);
    check L185() else D42();
  L301():
    p31 = prom<V +>{
      sym22 = ldf length;
      base22 = ldf length in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L2() else L3();
    L0(r163):
      sym23 = ldf length;
      base23 = ldf length in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L4() else L5();
    L2():
      names3 = ld names;
      names4 = force? names3;
      checkMissing(names4);
      length6 = ldf length in base;
      r164 = dyn length6(names4);
      goto L0(r164);
    L3():
      r162 = dyn base22(<sym names>);
      goto L0(r162);
    L1(r168, r169):
      r171 = `==`(r168, r169);
      return r171;
    L4():
      docs2 = ld docs;
      docs3 = force? docs2;
      checkMissing(docs3);
      length7 = ldf length in base;
      r170 = dyn length7(docs3);
      goto L1(r163, r170);
    L5():
      r167 = dyn base23(<sym docs>);
      goto L1(r163, r167);
    };
    p32 = prom<V +>{
      sym24 = ldf length;
      base24 = ldf length in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L2() else L3();
    L0(r174):
      sym25 = ldf length;
      base25 = ldf length in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L4() else L5();
    L2():
      engines2 = ld engines;
      engines3 = force? engines2;
      checkMissing(engines3);
      length8 = ldf length in base;
      r175 = dyn length8(engines3);
      goto L0(r175);
    L3():
      r173 = dyn base24(<sym engines>);
      goto L0(r173);
    L1(r179, r180):
      r182 = `==`(r179, r180);
      return r182;
    L4():
      docs4 = ld docs;
      docs5 = force? docs4;
      checkMissing(docs5);
      length9 = ldf length in base;
      r181 = dyn length9(docs5);
      goto L1(r174, r181);
    L5():
      r178 = dyn base25(<sym docs>);
      goto L1(r174, r178);
    };
    p33 = prom<V +>{
      sym26 = ldf length;
      base26 = ldf length in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L2() else L3();
    L0(r185):
      sym27 = ldf length;
      base27 = ldf length in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L4() else L5();
    L2():
      patterns2 = ld patterns;
      patterns3 = force? patterns2;
      checkMissing(patterns3);
      length10 = ldf length in base;
      r186 = dyn length10(patterns3);
      goto L0(r186);
    L3():
      r184 = dyn base26(<sym patterns>);
      goto L0(r184);
    L1(r190, r191):
      r193 = `==`(r190, r191);
      return r193;
    L4():
      docs6 = ld docs;
      docs7 = force? docs6;
      checkMissing(docs7);
      length11 = ldf length in base;
      r192 = dyn length11(docs7);
      goto L1(r185, r192);
    L5():
      r189 = dyn base27(<sym docs>);
      goto L1(r185, r189);
    };
    p35 = prom<V +>{
      anyDuplicated = ldf anyDuplicated;
      p34 = prom<V +>{
        docs8 = ld docs;
        docs9 = force? docs8;
        checkMissing(docs9);
        return docs9;
      };
      r196 = dyn anyDuplicated(p34);
      r197 = `!`(r196);
      return r197;
    };
    r199 = dyn stopifnot(p31, p32, p33, p35);
    check L302() else D93();
  D42():
    deopt 165 [r77];
  D93():
    deopt 353 [r199];
  L185():
    s1 = toForSeq(r77);
    l1 = length(s1);
    i10 = 0;
    goto L34(i10);
  L302():
    _get_package_metadata = ldf `.get_package_metadata`;
    check L303() else D94();
  D94():
    deopt 355 [];
  L34(i11):
    i12 = `+`.1(i11, 1);
    c12 = `<`.1(l1, i12);
    if c12 then L186() else L61();
  L303():
    p36 = prom<V +>{
      dir17 = ld dir;
      dir18 = force? dir17;
      checkMissing(dir18);
      return dir18;
    };
    r201 = dyn _get_package_metadata(p36);
    check L304() else D95();
  D95():
    deopt 357 [r201];
  L61():
    x1 = `[[`(s1, i12, NULL, TRUE);
    st name = x1;
    engineList2 = ld engineList;
    check L187() else D43();
  L186():
    check1 = ld check;
    check L284() else D84();
  L304():
    c42 = `is.object`(r201);
    if c42 then L305() else L306(r201);
  D43():
    deopt 166 [i12, engineList2];
  D84():
    deopt 316 [check1];
  L68(dx23):
    st defaultEncoding = dx23;
    vapply1 = ldf vapply;
    check L308() else D96();
  L187():
    engineList3 = force? engineList2;
    checkMissing(engineList3);
    c13 = `is.object`(engineList3);
    if c13 then L188() else L189(i12, engineList3);
  L284():
    check2 = force? check1;
    checkMissing(check2);
    c30 = `as.logical`(check2);
    if c30 then L285() else L62(c30);
  L305():
    dr22 = tryDispatchBuiltin.1("[", r201);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L307() else L306(dr22);
  L306(r203):
    __8 = ldf `[` in base;
    r204 = dyn __8(r203, "Encoding");
    goto L68(r204);
  D96():
    deopt 363 [];
  L35(i18, dx3):
    st engine = dx3;
    engine = ld engine;
    check L192() else D45();
  L62(c32):
    c39 = `as.logical`(c32);
    if c39 then L291() else L64();
  L188():
    dr2 = tryDispatchBuiltin.1("[[", engineList3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L190() else L189(i12, dr2);
  L189(i16, engineList5):
    name = ld name;
    check L191() else D44();
  L285():
    sym19 = ldf any;
    base19 = ldf any in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L286() else L287();
  L307():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L68(dx22);
  L308():
    p37 = prom<V +>{
      docs10 = ld docs;
      docs11 = force? docs10;
      checkMissing(docs11);
      return docs11;
    };
    p38 = prom<V +>{
      getVignetteEncoding = ld getVignetteEncoding;
      getVignetteEncoding1 = force? getVignetteEncoding;
      checkMissing(getVignetteEncoding1);
      return getVignetteEncoding1;
    };
    p39 = prom<V +>{
      defaultEncoding = ld defaultEncoding;
      defaultEncoding1 = force? defaultEncoding;
      checkMissing(defaultEncoding1);
      return defaultEncoding1;
    };
    r208 = dyn vapply1[, , , default](p37, p38, "", p39);
    check L309() else D97();
  D44():
    deopt 168 [i16, engineList5, name];
  D45():
    deopt 172 [i18, engine];
  D97():
    deopt 369 [r208];
  L63(c35, r143):
    c36 = `as.logical`(r143);
    c37 = `&&`(c35, c36);
    goto L62(c37);
  L64():
    goto L66(NULL);
  L66(r160):
    goto L67();
  L190():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(i12, dx2);
  L191():
    name1 = force? name;
    __1 = ldf `[[` in base;
    r78 = dyn __1(engineList5, name1);
    goto L35(i16, r78);
  L192():
    engine1 = force? engine;
    checkMissing(engine1);
    c14 = `is.object`(engine1);
    if c14 then L194() else L195(i18, engine1);
  L286():
    matchedPattern4 = ld matchedPattern;
    check L288() else D85();
  L287():
    r142 = dyn base19(<sym matchedPattern>);
    goto L63(c30, r142);
  L291():
    substring = ldf substring;
    check L292() else D87();
  L309():
    st encodings = r208;
    sym28 = ldf list;
    base28 = ldf list in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L310() else L311();
  D85():
    deopt 320 [c30, matchedPattern4];
  D87():
    deopt 326 [];
  L69(r210):
    st z = r210;
    output1 = ld output;
    check L321() else D107();
  L193(i22, dx5):
    s2 = toForSeq(dx5);
    l2 = length(s2);
    i23 = 0;
    goto L36(i22, i23);
  L194():
    dr4 = tryDispatchBuiltin.1("$", engine1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L196() else L195(i18, dr4);
  L195(i20, engine3):
    r79 = `$`(engine3, <sym pattern>);
    goto L193(i20, r79);
  L288():
    matchedPattern5 = force? matchedPattern4;
    checkMissing(matchedPattern5);
    any1 = ldf any in base;
    r144 = dyn any1(matchedPattern5);
    check L289() else D86();
  L292():
    p27 = prom<V +>{
      allFiles26 = ld allFiles;
      allFiles27 = force? allFiles26;
      checkMissing(allFiles27);
      c40 = `is.object`(allFiles27);
      if c40 then L1() else L2(allFiles27);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", allFiles27);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(allFiles29):
      matchedPattern6 = ld matchedPattern;
      matchedPattern7 = force? matchedPattern6;
      __7 = ldf `[` in base;
      r145 = dyn __7(allFiles29, matchedPattern7);
      goto L0(r145);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p28 = prom<V +>{
      sym20 = ldf nchar;
      base20 = ldf nchar in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r148):
      r150 = `+`(r148, 2.0);
      return r150;
    L1():
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      nchar = ldf nchar in base;
      r149 = dyn nchar(dir16, "chars", FALSE, NA_LGL);
      goto L0(r149);
    L2():
      r147 = dyn base20(<sym dir>);
      goto L0(r147);
    };
    r152 = dyn substring(p27, p28);
    check L293() else D88();
  L310():
    docs12 = ld docs;
    check L312() else D98();
  L311():
    r209 = dyn base28[docs, names, engines, patterns, encodings, dir, pkgdir, msg](<sym docs>, <sym names>, <sym engines>, <sym patterns>, <sym encodings>, <sym docdir>, <sym dir>, <sym msg>);
    goto L69(r209);
  D86():
    deopt 323 [c30, r144];
  D88():
    deopt 329 [r152];
  D98():
    deopt 373 [docs12];
  D107():
    deopt 400 [output1];
  L36(i24, i25):
    i26 = `+`.1(i25, 1);
    c15 = `<`.1(l2, i26);
    if c15 then L197() else L60();
  L196():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L193(i18, dx4);
  L289():
    goto L63(c30, r144);
  L293():
    st files = r152;
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L294() else L295();
  L312():
    docs13 = force? docs12;
    checkMissing(docs13);
    names5 = ld names;
    check L313() else D99();
  L321():
    output2 = force? output1;
    checkMissing(output2);
    c43 = `as.logical`(output2);
    if c43 then L322() else L70();
  D99():
    deopt 376 [names5];
  L57(i159):
    goto L34(i159);
  L60():
    x2 = `[[`(s2, i26, NULL, TRUE);
    st pattern = x2;
    grep = ldf grep;
    check L198() else D46();
  L65(r154):
    st msg = r154;
    goto L66(r154);
  L70():
    goto L77();
  L77():
    source1 = ld source;
    check L354() else D122();
  L197():
    goto L57(i24);
  L294():
    paste1 = ldf paste;
    check L296() else D89();
  L295():
    r153 = dyn base21("Files named as vignettes but with no recognized vignette engine:", <lang paste("  ", sQuote(files))>, "(Is a VignetteBuilder field missing?)");
    goto L65(r153);
  L313():
    names6 = force? names5;
    checkMissing(names6);
    engines4 = ld engines;
    check L314() else D100();
  L322():
    character2 = ldf character;
    check L323() else D108();
  D46():
    deopt 176 [i24, i26];
  D89():
    deopt 335 [];
  D100():
    deopt 379 [engines4];
  D108():
    deopt 403 [];
  D122():
    deopt 456 [source1];
  L198():
    p20 = prom<V +>{
      pattern = ld pattern;
      pattern1 = force? pattern;
      checkMissing(pattern1);
      return pattern1;
    };
    p21 = prom<V +>{
      allFiles10 = ld allFiles;
      allFiles11 = force? allFiles10;
      checkMissing(allFiles11);
      return allFiles11;
    };
    r82 = dyn grep(p20, p21);
    check L199() else D47();
  L296():
    p30 = prom<V +>{
      sQuote = ldf sQuote;
      p29 = prom<V +>{
        files = ld files;
        files1 = force? files;
        checkMissing(files1);
        return files1;
      };
      r156 = dyn sQuote(p29);
      return r156;
    };
    r158 = dyn paste1("  ", p30);
    check L297() else D90();
  L314():
    engines5 = force? engines4;
    checkMissing(engines5);
    patterns4 = ld patterns;
    check L315() else D101();
  L323():
    p40 = prom<V +>{
      sym29 = ldf length;
      base29 = ldf length in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r213):
      return r213;
    L1():
      docs14 = ld docs;
      docs15 = force? docs14;
      checkMissing(docs15);
      length12 = ldf length in base;
      r214 = dyn length12(docs15);
      goto L0(r214);
    L2():
      r212 = dyn base29(<sym docs>);
      goto L0(r212);
    };
    r216 = dyn character2(p40);
    check L324() else D109();
  L354():
    source2 = force? source1;
    checkMissing(source2);
    c50 = `as.logical`(source2);
    if c50 then L355() else L78();
  D47():
    deopt 179 [i24, i26, r82];
  D90():
    deopt 338 [r158];
  D101():
    deopt 382 [patterns4];
  D109():
    deopt 405 [r216];
  L78():
    goto L103();
  L103():
    l24 = ld z;
    class__ = ldf `class<-`;
    check L444() else D160();
  L199():
    st idxs = r82;
    l3 = ld matchedPattern;
    c16 = `is.object`(l3);
    if c16 then L200() else L201(i24, i26, TRUE, l3);
  L297():
    c41 = ldf c in base;
    r159 = dyn c41("Files named as vignettes but with no recognized vignette engine:", r158, "(Is a VignetteBuilder field missing?)");
    check L298() else D91();
  L315():
    patterns5 = force? patterns4;
    checkMissing(patterns5);
    encodings = ld encodings;
    check L316() else D102();
  L324():
    st outputs = r216;
    sym30 = ldf seq_along;
    base30 = ldf seq_along in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L325() else L326();
  L355():
    sym31 = ldf list;
    base31 = ldf list in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L356() else L357();
  D91():
    deopt 341 [r159];
  D102():
    deopt 385 [encodings];
  D160():
    deopt 606 ["pkgVignettes", l24, "pkgVignettes"];
  L37(i37, i38, dx7):
    st matchedPattern = dx7;
    vapply = ldf vapply;
    check L204() else D49();
  L71(r218):
    s3 = toForSeq(r218);
    l6 = length(s3);
    i167 = 0;
    goto L72(i167);
  L79(r232):
    st sources = r232;
    sym32 = ldf seq_along;
    base32 = ldf seq_along in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L359() else L360();
  L200():
    dr6 = tryDispatchBuiltin.0("[<-", l3, TRUE);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L202() else L201(i24, i26, TRUE, dr6);
  L201(i33, i34, r84, l5):
    idxs = ld idxs;
    check L203() else D48();
  L298():
    goto L65(r159);
  L316():
    encodings1 = force? encodings;
    checkMissing(encodings1);
    docdir6 = ld docdir;
    check L317() else D103();
  L325():
    docs16 = ld docs;
    check L327() else D110();
  L326():
    r217 = dyn base30(<sym docs>);
    goto L71(r217);
  L356():
    list1 = ldf list in base;
    r233 = dyn list1();
    check L358() else D123();
  L357():
    r231 = dyn base31();
    goto L79(r231);
  L444():
    r288 = dyn class__(l24, NULL, "pkgVignettes");
    check L445() else D161();
  D48():
    deopt 184 [i33, i34, r84, l5, TRUE, idxs];
  D49():
    deopt 189 [i37, i38];
  D103():
    deopt 388 [docdir6];
  D110():
    deopt 408 [docs16];
  D123():
    deopt 461 [r233];
  D161():
    deopt 608 ["pkgVignettes", r288];
  L72(i168):
    i169 = `+`.1(i168, 1);
    c44 = `<`.1(l6, i169);
    if c44 then L328() else L76();
  L80(r235):
    s4 = toForSeq(r235);
    l13 = length(s4);
    i192 = 0;
    goto L81(i192);
  L202():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L37(i24, i26, dx6);
  L203():
    idxs1 = force? idxs;
    ___ = ldf `[<-` in base;
    r87 = dyn ___(l5, TRUE, idxs1);
    goto L37(i33, i34, r87);
  L204():
    p22 = prom<V +>{
      allFiles12 = ld allFiles;
      allFiles13 = force? allFiles12;
      checkMissing(allFiles13);
      c17 = `is.object`(allFiles13);
      if c17 then L1() else L2(allFiles13);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", allFiles13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(allFiles15):
      idxs2 = ld idxs;
      idxs3 = force? idxs2;
      __2 = ldf `[` in base;
      r88 = dyn __2(allFiles15, idxs3);
      goto L0(r88);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p23 = prom<V +>{
      r90 = clos inner2063887348;
      return r90;
    };
    r92 = dyn vapply(p22, p23, NA_LGL);
    check L205() else D50();
  L317():
    docdir7 = force? docdir6;
    checkMissing(docdir7);
    dir19 = ld dir;
    check L318() else D104();
  L327():
    docs17 = force? docs16;
    checkMissing(docs17);
    r219 = seq_along(docs17);
    goto L71(r219);
  L358():
    goto L79(r233);
  L359():
    docs22 = ld docs;
    check L361() else D124();
  L360():
    r234 = dyn base32(<sym docs>);
    goto L80(r234);
  L445():
    st z = r288;
    z = ld z;
    check L446() else D162();
  D50():
    deopt 193 [i37, i38, r92];
  D104():
    deopt 391 [dir19];
  D124():
    deopt 464 [docs22];
  D162():
    deopt 610 [z];
  L76():
    x3 = `[[`(s3, i169, NULL, TRUE);
    st i = x3;
    docs18 = ld docs;
    check L329() else D111();
  L81(i193):
    i194 = `+`.1(i193, 1);
    c51 = `<`.1(l13, i194);
    if c51 then L362() else L85();
  L205():
    st keep = r92;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L206() else L207();
  L318():
    dir20 = force? dir19;
    checkMissing(dir20);
    msg = ld msg;
    check L319() else D105();
  L328():
    outputs = ld outputs;
    check L348() else D121();
  L361():
    docs23 = force? docs22;
    checkMissing(docs23);
    r236 = seq_along(docs23);
    goto L80(r236);
  L446():
    z1 = force? z;
    checkMissing(z1);
    popenv;
    return z1;
  D105():
    deopt 394 [msg];
  D111():
    deopt 411 [i169, docs18];
  D121():
    deopt 449 [outputs];
  L38(i43, i44, r94):
    c18 = `as.logical`(r94);
    if c18 then L210() else L39();
  L85():
    x4 = `[[`(s4, i194, NULL, TRUE);
    st i = x4;
    docs24 = ld docs;
    check L363() else D125();
  L206():
    keep = ld keep;
    check L208() else D51();
  L207():
    r93 = dyn base8(<sym keep>);
    goto L38(i37, i38, r93);
  L319():
    msg1 = force? msg;
    checkMissing(msg1);
    list = ldf list in base;
    r211 = dyn list(docs13, names6, engines5, patterns5, encodings1, docdir7, dir20, msg1);
    check L320() else D106();
  L329():
    docs19 = force? docs18;
    checkMissing(docs19);
    c45 = `is.object`(docs19);
    if c45 then L330() else L331(i169, docs19);
  L348():
    outputs1 = force? outputs;
    checkMissing(outputs1);
    l10 = ld z;
    c49 = `is.object`(l10);
    if c49 then L350() else L351(outputs1, l10);
  L362():
    sym33 = ldf any;
    base33 = ldf any in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L382() else L383();
  D51():
    deopt 197 [i37, i38, keep];
  D106():
    deopt 398 [r211];
  D125():
    deopt 467 [i194, docs24];
  L39():
    goto L59(i43, i44);
  L59(i165, i166):
    goto L36(i165, i166);
  L73(i175, dx25):
    st file = dx25;
    names7 = ld names;
    check L334() else D113();
  L86(r248):
    c56 = `as.logical`(r248);
    if c56 then L387() else L87();
  L208():
    keep1 = force? keep;
    checkMissing(keep1);
    any = ldf any in base;
    r95 = dyn any(keep1);
    check L209() else D52();
  L210():
    idxs4 = ld idxs;
    check L211() else D53();
  L320():
    goto L69(r211);
  L330():
    dr24 = tryDispatchBuiltin.1("[", docs19);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L332() else L331(i169, dr24);
  L331(i173, docs21):
    i176 = ld i;
    check L333() else D112();
  L349(outputs5, dx33):
    st z = dx33;
    goto L77();
  L350():
    dr32 = tryDispatchBuiltin.0("$<-", l10, outputs1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L352() else L351(outputs1, dr32);
  L351(outputs3, l12):
    r230 = `$<-`(l12, <sym outputs>, outputs1);
    goto L349(outputs3, r230);
  L363():
    docs25 = force? docs24;
    checkMissing(docs25);
    c52 = `is.object`(docs25);
    if c52 then L364() else L365(i194, docs25);
  L382():
    lengths = ldf lengths;
    check L384() else D135();
  L383():
    r247 = dyn base33(<lang `<-`(ind, `(`(`>`(lengths(sources), 1)))>);
    goto L86(r247);
  D52():
    deopt 200 [i37, i38, r95];
  D53():
    deopt 201 [i43, i44, idxs4];
  D112():
    deopt 413 [i173, docs21, i176];
  D113():
    deopt 417 [i175, names7];
  D135():
    deopt 510 [];
  L82(i200, dx35):
    st file = dx35;
    names11 = ld names;
    check L368() else D127();
  L87():
    goto L102();
  L102():
    sources10 = ld sources;
    check L438() else D159();
  L209():
    goto L38(i37, i38, r95);
  L211():
    idxs5 = force? idxs4;
    checkMissing(idxs5);
    c19 = `is.object`(idxs5);
    if c19 then L212() else L213(i43, i44, idxs5);
  L332():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L73(i169, dx24);
  L333():
    i177 = force? i176;
    __9 = ldf `[` in base;
    r220 = dyn __9(docs21, i177);
    goto L73(i173, r220);
  L334():
    names8 = force? names7;
    checkMissing(names8);
    c46 = `is.object`(names8);
    if c46 then L335() else L336(i175, names8);
  L352():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L349(outputs1, dx32);
  L364():
    dr34 = tryDispatchBuiltin.1("[", docs25);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L366() else L365(i194, dr34);
  L365(i198, docs27):
    i201 = ld i;
    check L367() else D126();
  L384():
    p49 = prom<V +>{
      sources = ld sources;
      sources1 = force? sources;
      checkMissing(sources1);
      return sources1;
    };
    r250 = dyn lengths(p49);
    check L385() else D136();
  L387():
    r253 = clos inner1236783023;
    st rootify = r253;
    rootify = ldf rootify;
    check L388() else D138();
  D126():
    deopt 469 [i198, docs27, i201];
  D127():
    deopt 473 [i200, names11];
  D136():
    deopt 512 [r250];
  D138():
    deopt 522 [];
  D159():
    deopt 596 [sources10];
  L40(i55, i56, dx11):
    st idxs = dx11;
    sym9 = ldf `is.function`;
    base9 = ldf `is.function` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L216() else L217();
  L74(i181, dx27):
    st name = dx27;
    vignetteEngine1 = ldf vignetteEngine;
    check L339() else D115();
  L212():
    dr10 = tryDispatchBuiltin.1("[", idxs5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L214() else L213(i43, i44, dr10);
  L213(i51, i52, idxs7):
    keep2 = ld keep;
    check L215() else D54();
  L335():
    dr26 = tryDispatchBuiltin.1("[", names8);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L337() else L336(i175, dr26);
  L336(i179, names10):
    i182 = ld i;
    check L338() else D114();
  L366():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L82(i194, dx34);
  L367():
    i202 = force? i201;
    __12 = ldf `[` in base;
    r237 = dyn __12(docs27, i202);
    goto L82(i198, r237);
  L368():
    names12 = force? names11;
    checkMissing(names12);
    c53 = `is.object`(names12);
    if c53 then L369() else L370(i200, names12);
  L385():
    r251 = `>`(r250, 1);
    st ind = r251;
    any2 = ldf any in base;
    r252 = dyn any2(r251);
    check L386() else D137();
  L388():
    p51 = prom<V +>{
      names15 = ldf names;
      p50 = prom<V +>{
        sources2 = ld sources;
        sources3 = force? sources2;
        checkMissing(sources3);
        return sources3;
      };
      r255 = dyn names15(p50);
      return r255;
    };
    r257 = dyn rootify(p51);
    check L389() else D139();
  L438():
    sources11 = force? sources10;
    checkMissing(sources11);
    l21 = ld z;
    c64 = `is.object`(l21);
    if c64 then L440() else L441(sources11, l21);
  D54():
    deopt 203 [i51, i52, idxs7, keep2];
  D114():
    deopt 419 [i179, names10, i182];
  D115():
    deopt 424 [i181];
  D137():
    deopt 517 [r252];
  D139():
    deopt 524 [r257];
  L41(i61, i62, r98):
    c21 = `as.logical`(r98);
    if c21 then L224() else L42();
  L83(i206, dx37):
    st name = dx37;
    vignetteEngine2 = ldf vignetteEngine;
    check L373() else D129();
  L214():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L40(i43, i44, dx10);
  L215():
    keep3 = force? keep2;
    __3 = ldf `[` in base;
    r96 = dyn __3(idxs7, keep3);
    goto L40(i51, i52, r96);
  L216():
    engine4 = ld engine;
    check L218() else D55();
  L217():
    r97 = dyn base9(<lang `$`(engine, weave)>);
    goto L41(i55, i56, r97);
  L337():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L74(i175, dx26);
  L338():
    i183 = force? i182;
    __10 = ldf `[` in base;
    r221 = dyn __10(names10, i183);
    goto L74(i179, r221);
  L339():
    p41 = prom<V +>{
      engines6 = ld engines;
      engines7 = force? engines6;
      checkMissing(engines7);
      c47 = `is.object`(engines7);
      if c47 then L1() else L2(engines7);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("[", engines7);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(engines9):
      i184 = ld i;
      i185 = force? i184;
      __11 = ldf `[` in base;
      r222 = dyn __11(engines9, i185);
      goto L0(r222);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r224 = dyn vignetteEngine1(p41);
    check L340() else D116();
  L369():
    dr36 = tryDispatchBuiltin.1("[", names12);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L371() else L370(i200, dr36);
  L370(i204, names14):
    i207 = ld i;
    check L372() else D128();
  L386():
    goto L86(r252);
  L389():
    st dnm = r257;
    lapply = ldf lapply;
    check L390() else D140();
  L439(sources15, dx73):
    st z = dx73;
    goto L103();
  L440():
    dr52 = tryDispatchBuiltin.0("$<-", l21, sources11);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L442() else L441(sources11, dr52);
  L441(sources13, l23):
    r287 = `$<-`(l23, <sym sources>, sources11);
    goto L439(sources13, r287);
  D55():
    deopt 209 [i55, i56, engine4];
  D116():
    deopt 426 [i181, r224];
  D128():
    deopt 475 [i204, names14, i207];
  D129():
    deopt 480 [i206];
  D140():
    deopt 527 [];
  L42():
    goto L52(i61, i62);
  L52(i131, i132):
    matchedPattern = ld matchedPattern;
    check L266() else D78();
  L218():
    engine5 = force? engine4;
    checkMissing(engine5);
    c20 = `is.object`(engine5);
    if c20 then L220() else L221(i55, i56, engine5);
  L224():
    allFiles16 = ld allFiles;
    check L225() else D57();
  L340():
    st engine = r224;
    find_vignette_product = ldf find_vignette_product;
    check L341() else D117();
  L371():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L83(i200, dx36);
  L372():
    i208 = force? i207;
    __13 = ldf `[` in base;
    r238 = dyn __13(names14, i208);
    goto L83(i204, r238);
  L373():
    p45 = prom<V +>{
      engines10 = ld engines;
      engines11 = force? engines10;
      checkMissing(engines11);
      c54 = `is.object`(engines11);
      if c54 then L1() else L2(engines11);
    L0(dx39):
      return dx39;
    L1():
      dr38 = tryDispatchBuiltin.1("[", engines11);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(engines13):
      i209 = ld i;
      i210 = force? i209;
      __14 = ldf `[` in base;
      r239 = dyn __14(engines13, i210);
      goto L0(r239);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx38);
    };
    r241 = dyn vignetteEngine2(p45);
    check L374() else D130();
  L390():
    p52 = prom<V +>{
      sources4 = ld sources;
      sources5 = force? sources4;
      checkMissing(sources5);
      return sources5;
    };
    p53 = prom<V +>{
      rootify1 = ld rootify;
      rootify2 = force? rootify1;
      checkMissing(rootify2);
      return rootify2;
    };
    r260 = dyn lapply(p52, p53);
    check L391() else D141();
  L442():
    dx72 = getTryDispatchBuiltinValue(dr52);
    goto L439(sources11, dx72);
  D57():
    deopt 214 [i61, i62, allFiles16];
  D78():
    deopt 282 [i131, i132, matchedPattern];
  D117():
    deopt 429 [i181];
  D130():
    deopt 482 [i206, r241];
  D141():
    deopt 530 [r260];
  L219(i69, i70, dx13):
    is_function = ldf `is.function` in base;
    r100 = dyn is_function(dx13);
    check L223() else D56();
  L220():
    dr12 = tryDispatchBuiltin.1("$", engine5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L222() else L221(i55, i56, dr12);
  L221(i65, i66, engine7):
    r99 = `$`(engine7, <sym weave>);
    goto L219(i65, i66, r99);
  L225():
    allFiles17 = force? allFiles16;
    checkMissing(allFiles17);
    c22 = `is.object`(allFiles17);
    if c22 then L226() else L227(i61, i62, allFiles17);
  L266():
    matchedPattern1 = force? matchedPattern;
    checkMissing(matchedPattern1);
    c27 = `is.object`(matchedPattern1);
    if c27 then L267() else L268(i131, i132, matchedPattern1);
  L341():
    p42 = prom<V +>{
      name4 = ld name;
      name5 = force? name4;
      checkMissing(name5);
      return name5;
    };
    p43 = prom<V +>{
      docdir8 = ld docdir;
      docdir9 = force? docdir8;
      checkMissing(docdir9);
      return docdir9;
    };
    p44 = prom<V +>{
      engine8 = ld engine;
      engine9 = force? engine8;
      checkMissing(engine9);
      return engine9;
    };
    r228 = dyn find_vignette_product[, by, dir, engine](p42, "weave", p43, p44);
    check L342() else D118();
  L374():
    st engine = r241;
    find_vignette_product1 = ldf find_vignette_product;
    check L375() else D131();
  L391():
    st snm = r260;
    sym34 = ldf any;
    base34 = ldf any in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L392() else L393();
  D56():
    deopt 213 [i69, i70, r100];
  D118():
    deopt 437 [i181, r228];
  D131():
    deopt 485 [i206];
  L43(i81, i82, dx15):
    st docsT = dx15;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L230() else L231();
  L53(i139, i140, dx17):
    st matchedPattern = dx17;
    allFiles20 = ld allFiles;
    check L271() else D80();
  L88(r262):
    r272 = `!`(r262);
    c57 = `as.logical`(r272);
    if c57 then L404() else L91();
  L222():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L219(i55, i56, dx12);
  L223():
    goto L41(i69, i70, r100);
  L226():
    dr14 = tryDispatchBuiltin.1("[", allFiles17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L228() else L227(i61, i62, dr14);
  L227(i77, i78, allFiles19):
    idxs8 = ld idxs;
    check L229() else D58();
  L267():
    dr16 = tryDispatchBuiltin.1("[", matchedPattern1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L269() else L268(i131, i132, dr16);
  L268(i135, i136, matchedPattern3):
    idxs14 = ld idxs;
    check L270() else D79();
  L342():
    st outputI = r228;
    outputI = ld outputI;
    check L343() else D119();
  L375():
    p46 = prom<V +>{
      name6 = ld name;
      name7 = force? name6;
      checkMissing(name7);
      return name7;
    };
    p47 = prom<V +>{
      docdir10 = ld docdir;
      docdir11 = force? docdir10;
      checkMissing(docdir11);
      return docdir11;
    };
    p48 = prom<V +>{
      engine10 = ld engine;
      engine11 = force? engine10;
      checkMissing(engine11);
      return engine11;
    };
    r245 = dyn find_vignette_product1[, by, main, dir, engine](p46, "tangle", FALSE, p47, p48);
    check L376() else D132();
  L392():
    sym35 = ldf `is.na`;
    base35 = ldf `is.na` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L394() else L395();
  L393():
    r261 = dyn base34(<lang is.na(match(dnm, unlist(snm)))>);
    goto L88(r261);
  D58():
    deopt 216 [i77, i78, allFiles19, idxs8];
  D79():
    deopt 284 [i135, i136, matchedPattern3, idxs14];
  D80():
    deopt 289 [i139, i140, allFiles20];
  D119():
    deopt 439 [i181, outputI];
  D132():
    deopt 495 [i206, r245];
  L44(i87, i88, r103):
    st docs = r103;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L235() else L236();
  L89(r264):
    any3 = ldf any in base;
    r271 = dyn any3(r264);
    check L403() else D147();
  L91():
    goto L101(NULL);
  L101(i254):
    goto L102();
  L228():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L43(i61, i62, dx14);
  L229():
    idxs9 = force? idxs8;
    __4 = ldf `[` in base;
    r101 = dyn __4(allFiles19, idxs9);
    goto L43(i77, i78, r101);
  L230():
    docs = ld docs;
    check L232() else D59();
  L231():
    r102 = dyn base10(<sym docs>, <sym docsT>);
    goto L44(i81, i82, r102);
  L269():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L53(i131, i132, dx16);
  L270():
    idxs15 = force? idxs14;
    checkMissing(idxs15);
    r132 = `-`(<missing>, idxs15);
    __5 = ldf `[` in base;
    r133 = dyn __5(matchedPattern3, r132);
    goto L53(i135, i136, r133);
  L271():
    allFiles21 = force? allFiles20;
    checkMissing(allFiles21);
    c28 = `is.object`(allFiles21);
    if c28 then L272() else L273(i139, i140, allFiles21);
  L343():
    outputI1 = force? outputI;
    checkMissing(outputI1);
    l7 = ld outputs;
    c48 = `is.object`(l7);
    if c48 then L344() else L345(i181, outputI1, l7);
  L376():
    st sourcesI = r245;
    sourcesI = ld sourcesI;
    check L377() else D133();
  L394():
    sym36 = ldf match;
    base36 = ldf match in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L396() else L397();
  L395():
    r263 = dyn base35(<lang match(dnm, unlist(snm))>);
    goto L89(r263);
  L404():
    which = ldf which;
    check L405() else D148();
  D59():
    deopt 222 [i81, i82, docs];
  D133():
    deopt 497 [i206, sourcesI];
  D147():
    deopt 551 [r271];
  D148():
    deopt 554 [];
  L45(i93, i94, r106):
    st names = r106;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L241() else L242();
  L54(i147, i148, dx19):
    st allFiles = dx19;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L276() else L277();
  L75(i189, dx31):
    st outputs = dx31;
    goto L72(i189);
  L90(r266):
    is_na = ldf `is.na` in base;
    r270 = dyn is_na(r266);
    check L402() else D146();
  L232():
    docs1 = force? docs;
    checkMissing(docs1);
    docsT = ld docsT;
    check L233() else D60();
  L235():
    names1 = ld names;
    check L237() else D62();
  L236():
    r105 = dyn base11(<sym names>, <lang gsub(pattern, "", basename(docsT))>);
    goto L45(i87, i88, r105);
  L272():
    dr18 = tryDispatchBuiltin.1("[", allFiles21);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L274() else L273(i139, i140, dr18);
  L273(i143, i144, allFiles23):
    idxs16 = ld idxs;
    check L275() else D81();
  L344():
    dr30 = tryDispatchBuiltin.0("[<-", l7, outputI1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L346() else L345(i181, outputI1, dr30);
  L345(i187, outputI3, l9):
    i190 = ld i;
    check L347() else D120();
  L377():
    sourcesI1 = force? sourcesI;
    checkMissing(sourcesI1);
    l14 = ld sources;
    c55 = `is.object`(l14);
    if c55 then L378() else L379(i206, sourcesI1, l14);
  L396():
    dnm = ld dnm;
    check L398() else D142();
  L397():
    r265 = dyn base36(<sym dnm>, <lang unlist(snm)>);
    goto L90(r265);
  L403():
    goto L88(r271);
  L405():
    p55 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      return ind1;
    };
    r274 = dyn which(p55);
    check L406() else D149();
  D60():
    deopt 224 [i81, i82, docsT];
  D62():
    deopt 231 [i87, i88, names1];
  D81():
    deopt 291 [i143, i144, allFiles23, idxs16];
  D120():
    deopt 442 [i187, outputI3, l9, outputI1, i190];
  D142():
    deopt 538 [dnm];
  D146():
    deopt 549 [r270];
  D149():
    deopt 556 [r274];
  L46(i99, i100, r114):
    st engines = r114;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L253() else L254();
  L55(i153, i154, r137):
    r139 = `==`(r137, 0);
    c29 = `as.logical`(r139);
    if c29 then L280() else L56();
  L84(i214, dx41):
    st sources = dx41;
    goto L81(i214);
  L233():
    docsT1 = force? docsT;
    checkMissing(docsT1);
    c23 = ldf c in base;
    r104 = dyn c23(docs1, docsT1);
    check L234() else D61();
  L237():
    names2 = force? names1;
    checkMissing(names2);
    gsub = ldf gsub;
    check L238() else D63();
  L241():
    engines = ld engines;
    check L243() else D66();
  L242():
    r113 = dyn base12(<sym engines>, <lang rep.int(name, length(idxs))>);
    goto L46(i93, i94, r113);
  L274():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L54(i139, i140, dx18);
  L275():
    idxs17 = force? idxs16;
    checkMissing(idxs17);
    r134 = `-`(<missing>, idxs17);
    __6 = ldf `[` in base;
    r135 = dyn __6(allFiles23, r134);
    goto L54(i143, i144, r135);
  L276():
    allFiles24 = ld allFiles;
    check L278() else D82();
  L277():
    r136 = dyn base18(<sym allFiles>);
    goto L55(i147, i148, r136);
  L346():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L75(i181, dx30);
  L347():
    i191 = force? i190;
    ___1 = ldf `[<-` in base;
    r229 = dyn ___1(l9, outputI1, i191);
    goto L75(i187, r229);
  L378():
    dr40 = tryDispatchBuiltin.0("[[<-", l14, sourcesI1);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L380() else L379(i206, sourcesI1, dr40);
  L379(i212, sourcesI3, l16):
    file = ld file;
    check L381() else D134();
  L398():
    dnm1 = force? dnm;
    checkMissing(dnm1);
    unlist = ldf unlist;
    check L399() else D143();
  L402():
    goto L89(r270);
  L406():
    s5 = toForSeq(r274);
    l17 = length(s5);
    i215 = 0;
    goto L92(i215);
  D61():
    deopt 227 [i81, i82, r104];
  D63():
    deopt 234 [i87, i88];
  D66():
    deopt 244 [i93, i94, engines];
  D82():
    deopt 298 [i147, i148, allFiles24];
  D134():
    deopt 500 [i212, sourcesI3, l16, sourcesI1, file];
  D143():
    deopt 541 [];
  L49(i117, i118, r123):
    st patterns = r123;
    goto L52(i117, i118);
  L56():
    goto L59(i153, i154);
  L92(i216):
    i217 = `+`.1(i216, 1);
    c58 = `<`.1(l17, i217);
    if c58 then L407() else L100();
  L234():
    goto L44(i81, i82, r104);
  L238():
    p24 = prom<V +>{
      pattern2 = ld pattern;
      pattern3 = force? pattern2;
      checkMissing(pattern3);
      return pattern3;
    };
    p26 = prom<V +>{
      basename = ldf basename;
      p25 = prom<V +>{
        docsT2 = ld docsT;
        docsT3 = force? docsT2;
        checkMissing(docsT3);
        return docsT3;
      };
      r109 = dyn basename(p25);
      return r109;
    };
    r111 = dyn gsub(p24, "", p26);
    check L239() else D64();
  L243():
    engines1 = force? engines;
    checkMissing(engines1);
    sym13 = ldf `rep.int`;
    base13 = ldf `rep.int` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L244() else L245();
  L253():
    patterns = ld patterns;
    check L255() else D72();
  L254():
    r122 = dyn base15(<sym patterns>, <lang rep.int(pattern, length(idxs))>);
    goto L49(i99, i100, r122);
  L278():
    allFiles25 = force? allFiles24;
    checkMissing(allFiles25);
    length5 = ldf length in base;
    r138 = dyn length5(allFiles25);
    check L279() else D83();
  L280():
    goto L57(i153);
  L380():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L84(i206, dx40);
  L381():
    file1 = force? file;
    ____ = ldf `[[<-` in base;
    r246 = dyn ____(l16, sourcesI1, file1);
    goto L84(i212, r246);
  L399():
    p54 = prom<V +>{
      snm = ld snm;
      snm1 = force? snm;
      checkMissing(snm1);
      return snm1;
    };
    r268 = dyn unlist(p54);
    check L400() else D144();
  D64():
    deopt 238 [i87, i88, r111];
  D72():
    deopt 263 [i99, i100, patterns];
  D83():
    deopt 301 [i147, i148, r138];
  D144():
    deopt 543 [r268];
  L47(i105, i106, r116):
    c25 = ldf c in base;
    r121 = dyn c25(engines1, r116);
    check L252() else D71();
  L100():
    x5 = `[[`(s5, i217, NULL, TRUE);
    st i = x5;
    sources6 = ld sources;
    check L408() else D150();
  L239():
    c24 = ldf c in base;
    r112 = dyn c24(names2, r111);
    check L240() else D65();
  L244():
    name2 = ld name;
    check L246() else D67();
  L245():
    r115 = dyn base13(<sym name>, <lang length(idxs)>);
    goto L47(i93, i94, r115);
  L255():
    patterns1 = force? patterns;
    checkMissing(patterns1);
    sym16 = ldf `rep.int`;
    base16 = ldf `rep.int` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L256() else L257();
  L279():
    goto L55(i147, i148, r138);
  L400():
    match = ldf match in base;
    r269 = dyn match(dnm1, r268, NA_INT, NULL);
    check L401() else D145();
  L407():
    goto L101(i217);
  D65():
    deopt 240 [i87, i88, r112];
  D67():
    deopt 248 [i93, i94, name2];
  D71():
    deopt 259 [i105, i106, r121];
  D145():
    deopt 547 [r269];
  D150():
    deopt 557 [i217, sources6];
  L50(i123, i124, r125):
    c26 = ldf c in base;
    r130 = dyn c26(patterns1, r125);
    check L264() else D77();
  L240():
    goto L45(i87, i88, r112);
  L246():
    name3 = force? name2;
    checkMissing(name3);
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L247() else L248();
  L252():
    goto L46(i105, i106, r121);
  L256():
    pattern4 = ld pattern;
    check L258() else D73();
  L257():
    r124 = dyn base16(<sym pattern>, <lang length(idxs)>);
    goto L50(i99, i100, r124);
  L401():
    goto L90(r269);
  L408():
    sources7 = force? sources6;
    checkMissing(sources7);
    c59 = `is.object`(sources7);
    if c59 then L409() else L410(i217, sources7);
  D73():
    deopt 267 [i99, i100, pattern4];
  D77():
    deopt 278 [i123, i124, r130];
  L48(i111, i112, r118):
    rep_int1 = ldf `rep.int` in base;
    r120 = dyn rep_int1(name3, r118);
    check L251() else D70();
  L93(i223, dx43):
    c60 = `is.object`(dx43);
    if c60 then L413() else L414(i223, dx43);
  L247():
    idxs10 = ld idxs;
    check L249() else D68();
  L248():
    r117 = dyn base14(<sym idxs>);
    goto L48(i93, i94, r117);
  L258():
    pattern5 = force? pattern4;
    checkMissing(pattern5);
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L259() else L260();
  L264():
    goto L49(i123, i124, r130);
  L409():
    dr42 = tryDispatchBuiltin.1("[[", sources7);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L411() else L410(i217, dr42);
  L410(i221, sources9):
    i224 = ld i;
    check L412() else D151();
  D68():
    deopt 252 [i93, i94, idxs10];
  D70():
    deopt 257 [i111, i112, r120];
  D151():
    deopt 559 [i221, sources9, i224];
  L51(i129, i130, r127):
    rep_int2 = ldf `rep.int` in base;
    r129 = dyn rep_int2(pattern5, r127);
    check L263() else D76();
  L94(i229, dx47):
    l18 = ld sources;
    c63 = `is.object`(l18);
    if c63 then L432() else L433(i229, dx47, l18);
  L249():
    idxs11 = force? idxs10;
    checkMissing(idxs11);
    length3 = ldf length in base;
    r119 = dyn length3(idxs11);
    check L250() else D69();
  L251():
    goto L47(i111, i112, r120);
  L259():
    idxs12 = ld idxs;
    check L261() else D74();
  L260():
    r126 = dyn base17(<sym idxs>);
    goto L51(i99, i100, r126);
  L411():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L93(i217, dx42);
  L412():
    i225 = force? i224;
    __15 = ldf `[[` in base;
    r275 = dyn __15(sources9, i225);
    goto L93(i221, r275);
  L413():
    dr44 = tryDispatchBuiltin.1("[", dx43);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L415() else L414(i223, dr44);
  L414(i227, dx45):
    sym37 = ldf `is.na`;
    base37 = ldf `is.na` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L416() else L417();
  D69():
    deopt 255 [i93, i94, r119];
  D74():
    deopt 271 [i99, i100, idxs12];
  D76():
    deopt 276 [i129, i130, r129];
  L95(i232, dx50, r277):
    __18 = ldf `[` in base;
    r285 = dyn __18(dx50, r277);
    goto L94(i232, r285);
  L99(i251, dx71):
    st sources = dx71;
    goto L92(i251);
  L250():
    goto L48(i93, i94, r119);
  L261():
    idxs13 = force? idxs12;
    checkMissing(idxs13);
    length4 = ldf length in base;
    r128 = dyn length4(idxs13);
    check L262() else D75();
  L263():
    goto L50(i129, i130, r129);
  L415():
    dx46 = getTryDispatchBuiltinValue(dr44);
    goto L94(i223, dx46);
  L416():
    sym38 = ldf match;
    base38 = ldf match in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L418() else L419();
  L417():
    r276 = dyn base37(<lang match(`[[`(snm, i), `[`(dnm, `-`(i)))>);
    goto L95(i227, dx45, r276);
  L432():
    dr50 = tryDispatchBuiltin.0("[[<-", l18, dx47);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L434() else L433(i229, dx47, dr50);
  L433(i249, dx67, l20):
    i252 = ld i;
    check L435() else D158();
  D75():
    deopt 274 [i99, i100, r128];
  D158():
    deopt 585 [i249, dx67, l20, dx47, i252];
  L96(i235, dx53, r279):
    is_na1 = ldf `is.na` in base;
    r284 = dyn is_na1(r279);
    check L431() else D157();
  L262():
    goto L51(i99, i100, r128);
  L418():
    snm2 = ld snm;
    check L420() else D152();
  L419():
    r278 = dyn base38(<lang `[[`(snm, i)>, <lang `[`(dnm, `-`(i))>);
    goto L96(i227, dx45, r278);
  L434():
    dx69 = getTryDispatchBuiltinValue(dr50);
    goto L99(i229, dx69);
  L435():
    i253 = force? i252;
    ____1 = ldf `[[<-` in base;
    r286 = dyn ____1(l20, dx47, i253);
    goto L99(i249, r286);
  D152():
    deopt 566 [i227, dx45, snm2];
  D157():
    deopt 582 [i235, dx53, r284];
  L420():
    snm3 = force? snm2;
    checkMissing(snm3);
    c61 = `is.object`(snm3);
    if c61 then L421() else L422(i227, dx45, snm3);
  L431():
    goto L95(i235, dx53, r284);
  L97(i239, dx58, dx59):
    dnm2 = ld dnm;
    check L425() else D154();
  L421():
    dr46 = tryDispatchBuiltin.1("[[", snm3);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L423() else L422(i227, dx45, dr46);
  L422(i237, dx55, snm5):
    i240 = ld i;
    check L424() else D153();
  D153():
    deopt 568 [i237, dx55, snm5, i240];
  D154():
    deopt 571 [i239, dx58, dnm2];
  L423():
    dx57 = getTryDispatchBuiltinValue(dr46);
    goto L97(i227, dx45, dx57);
  L424():
    i241 = force? i240;
    __16 = ldf `[[` in base;
    r280 = dyn __16(snm5, i241);
    goto L97(i237, dx55, r280);
  L425():
    dnm3 = force? dnm2;
    checkMissing(dnm3);
    c62 = `is.object`(dnm3);
    if c62 then L426() else L427(i239, dx58, dnm3);
  L98(i245, dx64, dx65):
    match1 = ldf match in base;
    r283 = dyn match1(dx59, dx65, NA_INT, NULL);
    check L430() else D156();
  L426():
    dr48 = tryDispatchBuiltin.1("[", dnm3);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L428() else L427(i239, dx58, dr48);
  L427(i243, dx61, dnm5):
    i246 = ld i;
    check L429() else D155();
  D155():
    deopt 573 [i243, dx61, dnm5, i246];
  D156():
    deopt 580 [i245, dx64, r283];
  L428():
    dx63 = getTryDispatchBuiltinValue(dr48);
    goto L98(i239, dx58, dx63);
  L429():
    i247 = force? i246;
    checkMissing(i247);
    r281 = `-`(<missing>, i247);
    __17 = ldf `[` in base;
    r282 = dyn __17(dnm5, r281);
    goto L98(i243, dx61, r282);
  L430():
    goto L96(i245, dx64, r283);
  }
}
fun inner2063887348(`.d.`) {
  (reg _d_:*) -+> V { var `.d.`:*, reg engineMatches:cls, reg name:*, reg name1:V, reg p:p(V +), reg getVignetteEngine:cls, reg _d_1:*, reg _d_2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st `.d.` = _d_;
    engineMatches = ldf engineMatches;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    p2 = prom<V +>{
      getVignetteEngine = ldf getVignetteEngine;
      p1 = prom<V +>{
        _d_1 = ld `.d.`;
        _d_2 = force? _d_1;
        checkMissing(_d_2);
        return _d_2;
      };
      r2 = dyn getVignetteEngine(p1);
      return r2;
    };
    r4 = dyn engineMatches(p, p2);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    popenv;
    return r4;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sub:cls, reg basename:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st s = s;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      basename = ldf basename;
      p = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r1 = dyn basename(p);
      return r1;
    };
    r3 = dyn sub("[.][^.]+$", "", p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}