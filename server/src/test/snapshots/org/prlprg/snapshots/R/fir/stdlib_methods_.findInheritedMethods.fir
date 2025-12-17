fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1793379209;
    st `.findInheritedMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1793379209(classes, fdef, mtable, table, excluded, useInherited, simpleOnly, verbose, doCache, where) {
  (reg classes:*, reg fdef:*, reg mtable:*, reg table:*, reg excluded:*, reg useInherited:*, reg simpleOnly:*, reg verbose:*, reg doCache:*, reg where:*) -+> V { var classes:*, var fdef:*, var mtable:*, reg mtable_isMissing:L, reg mtable_orDefault:*, var table:*, reg table_isMissing:L, reg table_orDefault:*, reg get:cls, reg environment:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var excluded:*, reg excluded_isMissing:L, reg excluded_orDefault:*, var useInherited:*, var simpleOnly:*, reg simpleOnly_isMissing:L, reg simpleOnly_orDefault:*, reg _simpleInheritanceGeneric:cls, reg fdef3:*, reg fdef4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var doCache:*, reg doCache_isMissing:L, reg doCache_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg mtable1:*, reg mtable2:V, reg is_environment:cls, reg r10:V, reg p5:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg environment1:cls, reg fdef5:*, reg fdef6:V, reg p6:p(V +), reg r13:V, reg p7:p(V +), reg _allowPrimitiveMethods:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg on_exit:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg table1:*, reg table2:V, reg is_environment1:cls, reg r21:V, reg r22:V, reg c:L, reg is:cls, reg fdef7:*, reg fdef8:V, reg p8:p(V +), reg r24:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg __:cls, reg r25:V, reg p9:p(V +), reg r27:V, reg p10:p(V +), reg r29:V, reg p11:p(V +), reg r31:V, reg r32:V, reg stop1:cls, reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg __1:cls, reg r37:V, reg length:cls, reg r38:V, reg r39:V, reg hasGroup:*, reg hasGroup1:V, reg c2:L, reg _getAllGroups:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg fdef9:*, reg fdef10:V, reg list:cls, reg r42:V, reg p12:p(V +), reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg excluded1:*, reg excluded2:V, reg length1:cls, reg r48:V, reg r49:V, reg verbose1:*, reg verbose2:V, reg c3:L, reg r50:cls, reg cat:cls, reg plist:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg c4:cls, reg r53:V, reg c5:L, reg r55:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg r62:R, reg r63:V, reg hasGroup2:*, reg hasGroup3:V, reg doCache1:*, reg doCache2:V, reg doExcluded:*, reg doExcluded1:V, reg c6:cls, reg r64:V, reg r65:V, reg __2:cls, reg r66:V, reg p13:p(V +), reg r68:V, reg p14:p(V +), reg hasGroup4:*, reg hasGroup5:V, reg c7:L, reg paste0:cls, reg plist1:cls, reg vapply:cls, reg groupGenerics:*, reg groupGenerics1:V, reg p15:p(V +), reg slot:*, reg slot1:V, reg p16:p(V +), reg character:cls, reg r72:V, reg p17:p(V +), reg r74:V, reg p18:p(V +), reg r76:V, reg p19:p(V +), reg r78:V, reg p20:p(V +), reg r80:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg r83:V, reg classes1:*, reg classes2:V, reg length2:cls, reg r84:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r85:V, reg r86:V, reg missing:cls, reg r87:V, reg r88:V, reg c8:L, reg c10:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r89:V, reg c13:L, reg r90:V, reg useInherited1:*, reg useInherited2:V, reg length3:cls, reg r91:V, reg nargs:*, reg nargs1:V, reg r92:V, reg c14:L, reg c15:V, reg c17:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r93:V, reg r94:V, reg rep:cls, reg r95:V, reg hasGroup6:*, reg hasGroup7:V, reg c18:L, reg c20:V, reg doExcluded2:*, reg doExcluded3:V, reg r97:V, reg c21:L, reg c22:V, reg c24:L, reg _sigLabel:cls, reg classes3:*, reg classes4:V, reg p21:p(V +), reg r99:V, reg _getGroupMethods:cls, reg label:*, reg label1:V, reg p22:p(V +), reg groupGenerics2:*, reg groupGenerics3:V, reg p23:p(V +), reg r102:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r103:V, reg r104:V, reg direct:*, reg direct1:V, reg length4:cls, reg r105:V, reg c25:L, reg doCache3:*, reg doCache4:V, reg c26:L, reg assign:cls, reg label2:*, reg label3:V, reg p24:p(V +), reg direct2:*, reg direct3:V, reg c27:L, reg direct5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __3:cls, reg r107:V, reg p25:p(V +), reg mtable3:*, reg mtable4:V, reg p26:p(V +), reg r110:V, reg direct6:*, reg direct7:V, reg classes5:*, reg classes6:V, reg c28:L, reg classes8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __4:cls, reg r115:V, reg getClass:cls, reg cl1:*, reg cl2:V, reg p27:p(V +), reg where1:*, reg where2:V, reg p28:p(V +), reg r118:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r119:V, reg r120:V, reg missing1:cls, reg r121:V, reg c29:L, reg c30:V, reg useInherited3:*, reg useInherited4:V, reg c32:L, reg c34:L, reg useInherited6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c36:L, reg dx7:V, reg __5:cls, reg r122:V, reg c37:L, reg c38:V, reg c40:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r123:V, reg r124:V, reg cl3:*, reg cl4:V, reg _eligibleSuperClasses:cls, reg __6:cls, reg r125:V, reg p29:p(V +), reg simpleOnly1:*, reg simpleOnly2:V, reg p30:p(V +), reg r128:V, reg c41:cls, reg r129:V, reg r130:V, reg cl5:*, reg cl6:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r131:V, reg r132:V, reg labels:*, reg labels1:V, reg list1:cls, reg r133:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r134:V, reg r135:V, reg nargs2:*, reg nargs3:V, reg vector:cls, reg r136:V, reg def:*, reg def1:V, reg l:*, reg c42:L, reg def3:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____:cls, reg r137:V, reg nargs4:*, reg nargs5:V, reg r138:V, reg c43:L, reg nargs6:*, reg nargs7:V, reg r139:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c44:L, reg x:V, reg getClass1:cls, reg classes9:*, reg classes10:V, reg c45:L, reg classes12:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i5:*, reg i6:V, reg __7:cls, reg r140:V, reg p31:p(V +), reg where3:*, reg where4:V, reg p32:p(V +), reg r143:V, reg l4:*, reg c46:L, reg i8:I, reg r145:V, reg l6:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i10:I, reg r147:V, reg dx13:V, reg i11:*, reg i12:V, reg ____1:cls, reg r148:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r149:V, reg i15:I, reg r150:V, reg missing2:cls, reg r151:V, reg c47:L, reg i16:I, reg c48:V, reg useInherited7:*, reg useInherited8:V, reg c50:L, reg i19:I, reg c52:L, reg useInherited10:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i21:I, reg c54:L, reg dx15:V, reg i22:*, reg i23:V, reg __8:cls, reg r152:V, reg c55:L, reg c56:V, reg c58:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r153:V, reg i29:I, reg r154:V, reg __9:cls, reg r155:V, reg _eligibleSuperClasses1:cls, reg __10:cls, reg r156:V, reg p33:p(V +), reg simpleOnly3:*, reg simpleOnly4:V, reg p34:p(V +), reg r159:V, reg c59:cls, reg r160:V, reg i30:I, reg r161:V, reg __11:cls, reg r162:V, reg outerLabels:cls, reg labels2:*, reg labels3:V, reg p35:p(V +), reg allLabels:*, reg allLabels1:V, reg p36:p(V +), reg r165:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r166:V, reg i33:I, reg r167:V, reg supersList:*, reg supersList1:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r168:V, reg i36:I, reg r169:V, reg allLabels2:*, reg allLabels3:V, reg list2:cls, reg r170:V, reg c60:cls, reg r171:V, reg labels4:*, reg labels5:V, reg c61:L, reg labels7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __12:cls, reg r172:V, reg unique:cls, reg labels8:*, reg labels9:V, reg p37:p(V +), reg r174:V, reg verbose3:*, reg verbose4:V, reg c62:L, reg cat1:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r175:V, reg r176:V, reg labels10:*, reg labels11:V, reg length5:cls, reg r177:V, reg p38:p(V +), reg r179:V, reg verbose5:*, reg verbose6:V, reg r180:V, reg c63:L, reg cat2:cls, reg r181:V, reg print:cls, reg labels12:*, reg labels13:V, reg p39:p(V +), reg r183:V, reg r184:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r186:V, reg r187:V, reg table3:*, reg table4:V, reg names:cls, reg r188:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r189:V, reg r190:V, reg labels14:*, reg labels15:V, reg _fillSignatures:cls, reg allMethods:*, reg allMethods1:V, reg p40:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r192:V, reg r193:V, reg classes13:*, reg classes14:V, reg length6:cls, reg r194:V, reg p41:p(V +), reg r196:V, reg match:cls, reg r197:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r198:V, reg r199:V, reg m:*, reg m1:V, reg is_na:cls, reg r200:V, reg r201:V, reg mget:cls, reg allMethods2:*, reg allMethods3:V, reg c64:L, reg allMethods5:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg m2:*, reg m3:V, reg c65:L, reg allMethods7:V, reg m5:V, reg dr20:V, reg dc10:L, reg dx20:V, reg allMethods9:V, reg dx21:V, reg found:*, reg found1:V, reg __13:cls, reg r202:V, reg __14:cls, reg r203:V, reg p42:p(V +), reg table5:*, reg table6:V, reg p43:p(V +), reg r206:V, reg verbose7:*, reg verbose8:V, reg c66:L, reg cat3:cls, reg sym26:cls, reg base26:cls, reg guard26:L, reg r207:V, reg r208:V, reg methods:*, reg methods1:V, reg length7:cls, reg r209:V, reg p44:p(V +), reg r211:V, reg hasGroup8:*, reg hasGroup9:V, reg c67:L, reg _getGroupMethods1:cls, reg labels16:*, reg labels17:V, reg p45:p(V +), reg groupGenerics4:*, reg groupGenerics5:V, reg p46:p(V +), reg found2:*, reg found3:V, reg p47:p(V +), reg r216:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r217:V, reg r218:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r219:V, reg r220:V, reg rep1:cls, reg r221:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r222:V, reg r223:V, reg rep2:cls, reg r224:V, reg c68:cls, reg r225:V, reg verbose9:*, reg verbose10:V, reg c69:L, reg cat4:cls, reg sym30:cls, reg base30:cls, reg guard30:L, reg r226:V, reg r227:V, reg groupmethods:*, reg groupmethods1:V, reg length8:cls, reg r228:V, reg p48:p(V +), reg r230:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r232:V, reg r233:V, reg methods2:*, reg methods3:V, reg groupmethods2:*, reg groupmethods3:V, reg c70:cls, reg r234:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r236:V, reg r237:V, reg rep3:cls, reg r238:V, reg _duplicateClassesExist:cls, reg r239:V, reg c71:L, reg integer:cls, reg r240:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r241:V, reg r242:V, reg methods4:*, reg methods5:V, reg names1:cls, reg r243:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r244:V, reg r245:V, reg methods6:*, reg methods7:V, reg r246:I, reg s1:V, reg l7:I, reg i38:I, reg i39:I, reg i40:I, reg c72:L, reg x1:V, reg methods8:*, reg methods9:V, reg c73:L, reg i44:I, reg methods11:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i46:I, reg dx23:V, reg i47:*, reg i48:V, reg __15:cls, reg r247:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r248:V, reg i51:I, reg r249:V, reg m6:*, reg m7:V, reg is_environment2:cls, reg r250:V, reg c74:L, reg _checkDuplicateMethodClasses:cls, reg classDefs:*, reg classDefs1:V, reg p49:p(V +), reg m8:*, reg m9:V, reg p50:p(V +), reg nm:*, reg nm1:V, reg c75:L, reg nm3:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg i54:*, reg i55:V, reg __16:cls, reg r253:V, reg p51:p(V +), reg r255:V, reg l8:*, reg c76:L, reg i57:I, reg r257:V, reg l10:*, reg dr26:V, reg dc13:L, reg dx26:V, reg i59:I, reg dx27:V, reg i60:*, reg i61:V, reg ____2:cls, reg r260:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r261:V, reg i64:I, reg r262:V, reg found4:*, reg found5:V, reg i65:*, reg i66:V, reg c77:cls, reg r263:V, reg i67:I, reg sym37:cls, reg base37:cls, reg guard37:L, reg r265:V, reg r266:V, reg found6:*, reg found7:V, reg length9:cls, reg r267:V, reg c78:L, reg unlist:cls, reg methods12:*, reg methods13:V, reg p52:p(V +), reg r269:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r271:V, reg r272:V, reg methods14:*, reg methods15:V, reg is_list:cls, reg r273:V, reg r274:V, reg c79:L, reg sym39:cls, reg base39:cls, reg guard39:L, reg r275:V, reg r276:V, reg methods16:*, reg methods17:V, reg list3:cls, reg r277:V, reg r278:V, reg doExcluded4:*, reg doExcluded5:V, reg c80:L, reg methods18:*, reg methods19:V, reg c81:L, reg methods21:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r280:V, reg methods24:V, reg r281:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r282:V, reg methods27:V, reg r283:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r284:V, reg methods30:V, reg r285:V, reg methods31:*, reg methods32:V, reg names2:cls, reg r286:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r287:V, reg methods35:V, reg r288:V, reg excluded3:*, reg excluded4:V, reg as_character:cls, reg r289:V, reg match1:cls, reg r290:V, reg is_na1:cls, reg r291:V, reg __17:cls, reg r292:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r293:V, reg r294:V, reg methods36:*, reg methods37:V, reg length10:cls, reg r295:V, reg r296:V, reg c82:L, reg paste1:cls, reg sym45:cls, reg base45:cls, reg guard45:L, reg r297:V, reg r298:V, reg nargs8:*, reg nargs9:V, reg rep_int:cls, reg r299:V, reg p53:p(V +), reg r301:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r302:V, reg r303:V, reg defaultLabel:*, reg defaultLabel1:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r304:V, reg r305:V, reg methods38:*, reg methods39:V, reg names3:cls, reg r306:V, reg match2:cls, reg r307:V, reg i68:*, reg i69:V, reg r308:V, reg c83:L, reg methods40:*, reg methods41:V, reg c84:L, reg methods43:V, reg dr30:V, reg dc15:L, reg dx31:V, reg dx32:V, reg i70:*, reg i71:V, reg r309:V, reg __18:cls, reg r310:V, reg fromGroup:*, reg fromGroup1:V, reg c85:L, reg fromGroup3:V, reg dr32:V, reg dc16:L, reg dx33:V, reg dx34:V, reg i72:*, reg i73:V, reg r311:V, reg __19:cls, reg r312:V, reg dx35:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r313:V, reg r314:V, reg methods44:*, reg methods45:V, reg length11:cls, reg r315:V, reg r316:V, reg c86:L, reg verbose11:*, reg verbose12:V, reg c87:L, reg cat5:cls, reg sym49:cls, reg base49:cls, reg guard49:L, reg r317:V, reg r318:V, reg methods46:*, reg methods47:V, reg length12:cls, reg r319:V, reg p54:p(V +), reg r321:V, reg _getBestMethods:cls, reg methods48:*, reg methods49:V, reg p55:p(V +), reg supersList2:*, reg supersList3:V, reg p56:p(V +), reg fromGroup4:*, reg fromGroup5:V, reg p57:p(V +), reg verbose13:*, reg verbose14:V, reg p58:p(V +), reg r327:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r328:V, reg r329:V, reg select:*, reg select1:V, reg length13:cls, reg r330:V, reg r331:V, reg c88:L, reg verbose15:*, reg verbose16:V, reg c89:L, reg cat6:cls, reg sym51:cls, reg base51:cls, reg guard51:L, reg r332:V, reg r333:V, reg select2:*, reg select3:V, reg length14:cls, reg r334:V, reg p59:p(V +), reg r336:V, reg getOption:cls, reg r338:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r339:V, reg r340:V, reg condAction:*, reg condAction1:V, reg c90:V, reg c91:L, reg _ambiguousMethodMessage:*, reg _ambiguousMethodMessage1:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r341:V, reg r342:V, reg condAction2:*, reg condAction3:V, reg is_function:cls, reg r343:V, reg r344:V, reg c92:L, reg stop2:cls, reg gettextf1:cls, reg dQuote:cls, reg sym54:cls, reg base54:cls, reg guard54:L, reg r345:V, reg r346:V, reg condAction4:*, reg condAction5:V, reg class:cls, reg r347:V, reg p60:p(V +), reg r349:V, reg p61:p(V +), reg r351:V, reg p62:p(V +), reg r353:V, reg withCallingHandlers:cls, reg _disambiguateMethods:cls, reg classes15:*, reg classes16:V, reg p63:p(V +), reg select4:*, reg select5:V, reg p64:p(V +), reg __20:cls, reg r356:V, reg p65:p(V +), reg methods50:*, reg methods51:V, reg p66:p(V +), reg supersList4:*, reg supersList5:V, reg p67:p(V +), reg fromGroup6:*, reg fromGroup7:V, reg p68:p(V +), reg classDefs2:*, reg classDefs3:V, reg p69:p(V +), reg verbose17:*, reg verbose18:V, reg p70:p(V +), reg r363:V, reg p71:p(V +), reg condAction6:*, reg condAction7:V, reg p72:p(V +), reg r366:V, reg methods52:*, reg methods53:V, reg c93:L, reg methods55:V, reg dr34:V, reg dc17:L, reg dx37:V, reg dx38:V, reg select6:*, reg select7:V, reg __21:cls, reg r368:V, reg simpleOnly5:*, reg simpleOnly6:V, reg c94:L, reg c96:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r369:V, reg c99:L, reg r370:V, reg methods56:*, reg methods57:V, reg length15:cls, reg r371:V, reg r372:V, reg c100:L, reg c101:V, reg c103:L, reg Recall:cls, reg classes17:*, reg classes18:V, reg p73:p(V +), reg fdef11:*, reg fdef12:V, reg p74:p(V +), reg mtable5:*, reg mtable6:V, reg p75:p(V +), reg table7:*, reg table8:V, reg p76:p(V +), reg excluded5:*, reg excluded6:V, reg p77:p(V +), reg useInherited11:*, reg useInherited12:V, reg p78:p(V +), reg simpleOnly7:*, reg simpleOnly8:V, reg p79:p(V +), reg verbose19:*, reg verbose20:V, reg p80:p(V +), reg r381:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r382:V, reg r383:V, reg methods58:*, reg methods59:V, reg length16:cls, reg r384:V, reg r385:V, reg c104:L, reg message:cls, reg gettextf2:cls, reg sQuote1:cls, reg __22:cls, reg r386:V, reg p81:p(V +), reg r388:V, reg p82:p(V +), reg r390:V, reg p83:p(V +), reg r392:V, reg r393:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r395:V, reg r396:V, reg methods60:*, reg methods61:V, reg length17:cls, reg r397:V, reg c105:L, reg _sigLabel1:cls, reg classes19:*, reg classes20:V, reg p84:p(V +), reg r399:V, reg methods62:*, reg methods63:V, reg c106:L, reg methods65:V, reg dr36:V, reg dc18:L, reg dx40:V, reg dx41:V, reg __23:cls, reg r400:V, reg is1:cls, reg m10:*, reg m11:V, reg p85:p(V +), reg r402:V, reg c107:L, reg _newSignature:cls, reg classes21:*, reg classes22:V, reg p86:p(V +), reg __24:cls, reg r404:V, reg p87:p(V +), reg r406:V, reg l11:*, reg ___:cls, reg r407:V, reg _inheritedArgsExpression:cls, reg __25:cls, reg r408:V, reg p88:p(V +), reg __26:cls, reg r410:V, reg p89:p(V +), reg body:cls, reg m12:*, reg m13:V, reg p90:p(V +), reg r413:V, reg p91:p(V +), reg r415:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r416:V, reg r417:V, reg coerce:*, reg coerce1:V, reg c108:V, reg r418:V, reg c109:L, reg coerce2:*, reg coerce3:V, reg l12:*, reg body__:cls, reg r419:V, reg m14:*, reg m15:V, reg l13:*, reg c110:L, reg m17:V, reg l15:*, reg dr38:V, reg dc19:L, reg dx42:V, reg m19:V, reg dx43:V, reg ____3:cls, reg r420:V, reg doCache5:*, reg doCache6:V, reg c111:L, reg verbose21:*, reg verbose22:V, reg c112:L, reg cat7:cls, reg r421:V, reg assign1:cls, reg tlabel:*, reg tlabel1:V, reg p92:p(V +), reg m21:*, reg m22:V, reg p93:p(V +), reg mtable7:*, reg mtable8:V, reg p94:p(V +), reg r426:V, reg r427:V, reg methods66:*, reg methods67:V |
    mkenv;
    st classes = classes;
    st fdef = fdef;
    mtable_isMissing = missing.0(mtable);
    if mtable_isMissing then L0(NULL) else L0(mtable);
  L0(mtable_orDefault):
    st mtable = mtable_orDefault;
    table_isMissing = missing.0(table);
    if table_isMissing then L1() else L2(table);
  L1():
    p2 = prom<V +>{
      get = ldf get;
      p1 = prom<V +>{
        environment = ldf environment;
        p = prom<V +>{
          fdef1 = ld fdef;
          fdef2 = force? fdef1;
          checkMissing(fdef2);
          return fdef2;
        };
        r1 = dyn environment(p);
        return r1;
      };
      r3 = dyn get[, envir](".MTable", p1);
      return r3;
    };
    goto L2(p2);
  L2(table_orDefault):
    st table = table_orDefault;
    excluded_isMissing = missing.0(excluded);
    if excluded_isMissing then L3(NULL) else L3(excluded);
  L3(excluded_orDefault):
    st excluded = excluded_orDefault;
    st useInherited = useInherited;
    simpleOnly_isMissing = missing.0(simpleOnly);
    if simpleOnly_isMissing then L4() else L5(simpleOnly);
  L4():
    p4 = prom<V +>{
      _simpleInheritanceGeneric = ldf `.simpleInheritanceGeneric`;
      p3 = prom<V +>{
        fdef3 = ld fdef;
        fdef4 = force? fdef3;
        checkMissing(fdef4);
        return fdef4;
      };
      r6 = dyn _simpleInheritanceGeneric(p3);
      return r6;
    };
    goto L5(p4);
  L5(simpleOnly_orDefault):
    st simpleOnly = simpleOnly_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L6(FALSE) else L6(verbose);
  L6(verbose_orDefault):
    st verbose = verbose_orDefault;
    doCache_isMissing = missing.0(doCache);
    if doCache_isMissing then L7() else L8(doCache);
  L7():
    p5 = prom<V +>{
      sym = ldf `is.environment`;
      base = ldf `is.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r9):
      return r9;
    L1():
      mtable1 = ld mtable;
      mtable2 = force? mtable1;
      checkMissing(mtable2);
      is_environment = ldf `is.environment` in base;
      r10 = dyn is_environment(mtable2);
      goto L0(r10);
    L2():
      r8 = dyn base(<sym mtable>);
      goto L0(r8);
    };
    goto L8(p5);
  L8(doCache_orDefault):
    st doCache = doCache_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L9() else L10(where);
  L9():
    p7 = prom<V +>{
      environment1 = ldf environment;
      p6 = prom<V +>{
        fdef5 = ld fdef;
        fdef6 = force? fdef5;
        checkMissing(fdef6);
        return fdef6;
      };
      r13 = dyn environment1(p6);
      return r13;
    };
    goto L10(p7);
  L10(where_orDefault):
    st where = where_orDefault;
    _allowPrimitiveMethods = ldf `.allowPrimitiveMethods`;
    check L152() else D0();
  D0():
    deopt 1 [];
  L152():
    r15 = dyn _allowPrimitiveMethods(FALSE);
    check L153() else D1();
  D1():
    deopt 3 [r15];
  L153():
    st primMethods = r15;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L154() else L155();
  L11():
    sym2 = ldf `is.environment`;
    base2 = ldf `is.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L156() else L157();
  L154():
    on_exit = ldf `on.exit` in base;
    r18 = dyn on_exit(<lang .allowPrimitiveMethods(primMethods)>);
    goto L11();
  L155():
    r16 = dyn base1(<lang .allowPrimitiveMethods(primMethods)>);
    goto L11();
  L12(r20):
    r22 = `!`(r20);
    c = `as.logical`(r22);
    if c then L160() else L13();
  L156():
    table1 = ld table;
    check L158() else D2();
  L157():
    r19 = dyn base2(<sym table>);
    goto L12(r19);
  D2():
    deopt 10 [table1];
  L13():
    goto L16();
  L16():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L170() else L171();
  L158():
    table2 = force? table1;
    checkMissing(table2);
    is_environment1 = ldf `is.environment` in base;
    r21 = dyn is_environment1(table2);
    check L159() else D3();
  L160():
    is = ldf is;
    check L161() else D4();
  D3():
    deopt 13 [r21];
  D4():
    deopt 16 [];
  L17(r36):
    r39 = `>`(r36, 0);
    st hasGroup = r39;
    hasGroup = ld hasGroup;
    check L173() else D11();
  L159():
    goto L12(r21);
  L161():
    p8 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    r24 = dyn is(p8, "standardGeneric");
    check L162() else D5();
  L170():
    __1 = ldf `@` in base;
    r37 = dyn __1(<sym fdef>, <sym group>);
    length = ldf length in base;
    r38 = dyn length(r37);
    check L172() else D10();
  L171():
    r35 = dyn base3(<lang `@`(fdef, group)>);
    goto L17(r35);
  D5():
    deopt 19 [r24];
  D10():
    deopt 37 [r38];
  D11():
    deopt 41 [hasGroup];
  L162():
    c1 = `as.logical`(r24);
    if c1 then L163() else L14();
  L172():
    goto L17(r38);
  L173():
    hasGroup1 = force? hasGroup;
    checkMissing(hasGroup1);
    c2 = `as.logical`(hasGroup1);
    if c2 then L174() else L18();
  L14():
    stop1 = ldf stop;
    check L167() else D8();
  L15(r32):
    goto L16();
  L18():
    goto L19();
  L19():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L178() else L179();
  L163():
    stop = ldf stop;
    check L164() else D6();
  L174():
    _getAllGroups = ldf `.getAllGroups`;
    check L175() else D12();
  D6():
    deopt 21 [];
  D8():
    deopt 27 [];
  D12():
    deopt 44 [];
  L20(r47):
    r49 = `>`(r47, 0);
    st doExcluded = r49;
    verbose1 = ld verbose;
    check L182() else D16();
  L164():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        p9 = prom<V +>{
          __ = ldf `@` in base;
          r25 = dyn __(<sym fdef>, <sym generic>);
          return r25;
        };
        r27 = dyn sQuote(p9);
        return r27;
      };
      r29 = dyn gettextf("invalid or unset methods table in generic function %s", p10);
      return r29;
    };
    r31 = dyn stop[, domain](p11, NA_LGL);
    check L165() else D7();
  L167():
    r33 = dyn stop1("trying to find a methods table in a non-generic function");
    check L168() else D9();
  L175():
    p12 = prom<V +>{
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      fdef9 = ld fdef;
      fdef10 = force? fdef9;
      checkMissing(fdef10);
      list = ldf list in base;
      r42 = dyn list(fdef10);
      goto L0(r42);
    L2():
      r40 = dyn base4(<sym fdef>);
      goto L0(r40);
    };
    r44 = dyn _getAllGroups(p12);
    check L176() else D13();
  L178():
    excluded1 = ld excluded;
    check L180() else D14();
  L179():
    r46 = dyn base5(<sym excluded>);
    goto L20(r46);
  D7():
    deopt 25 [r31];
  D9():
    deopt 29 [r33];
  D13():
    deopt 46 [r44];
  D14():
    deopt 52 [excluded1];
  D16():
    deopt 59 [verbose1];
  L165():
    goto L15(r31);
  L168():
    goto L15(r33);
  L176():
    st groupGenerics = r44;
    goto L19();
  L180():
    excluded2 = force? excluded1;
    checkMissing(excluded2);
    length1 = ldf length in base;
    r48 = dyn length1(excluded2);
    check L181() else D15();
  L182():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c3 = `as.logical`(verbose2);
    if c3 then L183() else L21();
  D15():
    deopt 55 [r48];
  L21():
    goto L22();
  L22():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L187() else L188();
  L181():
    goto L20(r48);
  L183():
    r50 = clos inner2501545716;
    st plist = r50;
    cat = ldf cat;
    check L184() else D17();
  D17():
    deopt 65 [];
  L23(r83):
    st nargs = r83;
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L191() else L192();
  L184():
    p14 = prom<V +>{
      plist = ldf plist;
      p13 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L3() else L4();
      L0(r52):
        c5 = `is.object`(r52);
        if c5 then L5() else L6(r52);
      L3():
        c4 = ldf c in base;
        r53 = dyn c4("f", "T");
        goto L0(r53);
      L4():
        r51 = dyn base6("f", "T");
        goto L0(r51);
      L1(dx1):
        return dx1;
      L5():
        dr = tryDispatchBuiltin.1("[", r52);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L7() else L6(dr);
      L6(r55):
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L8() else L9();
      L2(r61, r62, r63):
        r65 = `+`(r62, r63);
        __2 = ldf `[` in base;
        r66 = dyn __2(r61, r65);
        goto L1(r66);
      L7():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      L8():
        hasGroup2 = ld hasGroup;
        hasGroup3 = force? hasGroup2;
        checkMissing(hasGroup3);
        doCache1 = ld doCache;
        doCache2 = force? doCache1;
        checkMissing(doCache2);
        doExcluded = ld doExcluded;
        doExcluded1 = force? doExcluded;
        checkMissing(doExcluded1);
        c6 = ldf c in base;
        r64 = dyn c6(hasGroup3, doCache2, doExcluded1);
        goto L2(r55, 1.0, r64);
      L9():
        r60 = dyn base7(<sym hasGroup>, <sym doCache>, <sym doExcluded>);
        goto L2(r55, 1.0, r60);
      };
      r68 = dyn plist(p13);
      return r68;
    };
    p20 = prom<V +>{
      hasGroup4 = ld hasGroup;
      hasGroup5 = force? hasGroup4;
      checkMissing(hasGroup5);
      c7 = `as.logical`(hasGroup5);
      if c7 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      paste0 = ldf paste0;
      p19 = prom<V +>{
        plist1 = ldf plist;
        p18 = prom<V +>{
          vapply = ldf vapply;
          p15 = prom<V +>{
            groupGenerics = ld groupGenerics;
            groupGenerics1 = force? groupGenerics;
            checkMissing(groupGenerics1);
            return groupGenerics1;
          };
          p16 = prom<V +>{
            slot = ld slot;
            slot1 = force? slot;
            checkMissing(slot1);
            return slot1;
          };
          p17 = prom<V +>{
            character = ldf character;
            r72 = dyn character(1.0);
            return r72;
          };
          r74 = dyn vapply(p15, p16, p17, "generic");
          return r74;
        };
        r76 = dyn plist1(p18);
        return r76;
      };
      r78 = dyn paste0(" Group generics: ", p19, "\n");
      return r78;
    };
    r80 = dyn cat[, , , , sep](" .findInheritedMethods(): (hasGroup, doCache, doExcluded)= (", p14, ")\n", p20, "");
    check L185() else D18();
  L187():
    classes1 = ld classes;
    check L189() else D19();
  L188():
    r82 = dyn base8(<sym classes>);
    goto L23(r82);
  D18():
    deopt 72 [r80];
  D19():
    deopt 77 [classes1];
  L24(r86):
    r88 = `!`(r86);
    c8 = `as.logical`(r88);
    if c8 then L193() else L25(c8);
  L185():
    goto L22();
  L189():
    classes2 = force? classes1;
    checkMissing(classes2);
    length2 = ldf length in base;
    r84 = dyn length2(classes2);
    check L190() else D20();
  L191():
    missing = ldf missing in base;
    r87 = dyn missing(<sym useInherited>);
    goto L24(r87);
  L192():
    r85 = dyn base9(<sym useInherited>);
    goto L24(r85);
  D20():
    deopt 80 [r84];
  L25(c10):
    c17 = `as.logical`(c10);
    if c17 then L200() else L27();
  L190():
    goto L23(r84);
  L193():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L194() else L195();
  L26(c13, r90):
    nargs = ld nargs;
    check L198() else D23();
  L27():
    goto L29();
  L29():
    hasGroup6 = ld hasGroup;
    check L204() else D24();
  L194():
    useInherited1 = ld useInherited;
    check L196() else D21();
  L195():
    r89 = dyn base10(<sym useInherited>);
    goto L26(c8, r89);
  L200():
    sym11 = ldf rep;
    base11 = ldf rep in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L201() else L202();
  D21():
    deopt 88 [c8, useInherited1];
  D23():
    deopt 91 [c13, r90, nargs];
  D24():
    deopt 101 [hasGroup6];
  L28(r94):
    st useInherited = r94;
    goto L29();
  L196():
    useInherited2 = force? useInherited1;
    checkMissing(useInherited2);
    length3 = ldf length in base;
    r91 = dyn length3(useInherited2);
    check L197() else D22();
  L198():
    nargs1 = force? nargs;
    checkMissing(nargs1);
    r92 = `<`(r90, nargs1);
    c14 = `as.logical`(r92);
    c15 = `&&`(c13, c14);
    goto L25(c15);
  L201():
    rep = ldf rep in base;
    r95 = dyn rep(<sym useInherited>, <sym nargs>);
    goto L28(r95);
  L202():
    r93 = dyn base11[, `length.out`](<sym useInherited>, <sym nargs>);
    goto L28(r93);
  L204():
    hasGroup7 = force? hasGroup6;
    checkMissing(hasGroup7);
    c18 = `as.logical`(hasGroup7);
    if c18 then L205() else L30(c18);
  D22():
    deopt 91 [c8, r91];
  L30(c20):
    c24 = `as.logical`(c20);
    if c24 then L208() else L31();
  L197():
    goto L26(c8, r91);
  L205():
    doExcluded2 = ld doExcluded;
    check L206() else D25();
  D25():
    deopt 103 [c18, doExcluded2];
  L31():
    goto L37();
  L37():
    classes5 = ld classes;
    check L227() else D36();
  L206():
    doExcluded3 = force? doExcluded2;
    checkMissing(doExcluded3);
    r97 = `!`(doExcluded3);
    c21 = `as.logical`(r97);
    c22 = `&&`(c18, c21);
    goto L30(c22);
  L208():
    _sigLabel = ldf `.sigLabel`;
    check L209() else D26();
  D26():
    deopt 108 [];
  D36():
    deopt 143 [classes5];
  L209():
    p21 = prom<V +>{
      classes3 = ld classes;
      classes4 = force? classes3;
      checkMissing(classes4);
      return classes4;
    };
    r99 = dyn _sigLabel(p21);
    check L210() else D27();
  L227():
    classes6 = force? classes5;
    checkMissing(classes6);
    c28 = `is.object`(classes6);
    if c28 then L228() else L229(classes6);
  D27():
    deopt 110 [r99];
  L38(dx5):
    st cl1 = dx5;
    getClass = ldf getClass;
    check L231() else D37();
  L210():
    st label = r99;
    _getGroupMethods = ldf `.getGroupMethods`;
    check L211() else D28();
  L228():
    dr4 = tryDispatchBuiltin.1("[[", classes6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L230() else L229(dr4);
  L229(classes8):
    __4 = ldf `[[` in base;
    r115 = dyn __4(classes8, 1);
    goto L38(r115);
  D28():
    deopt 113 [];
  D37():
    deopt 150 [];
  L211():
    p22 = prom<V +>{
      label = ld label;
      label1 = force? label;
      checkMissing(label1);
      return label1;
    };
    p23 = prom<V +>{
      groupGenerics2 = ld groupGenerics;
      groupGenerics3 = force? groupGenerics2;
      checkMissing(groupGenerics3);
      return groupGenerics3;
    };
    r102 = dyn _getGroupMethods(p22, p23, FALSE);
    check L212() else D29();
  L230():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L38(dx4);
  L231():
    p27 = prom<V +>{
      cl1 = ld cl1;
      cl2 = force? cl1;
      checkMissing(cl2);
      return cl2;
    };
    p28 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r118 = dyn getClass[, where, `.Force`](p27, p28, TRUE);
    check L232() else D38();
  D29():
    deopt 117 [r102];
  D38():
    deopt 156 [r118];
  L212():
    st direct = r102;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L213() else L214();
  L232():
    st def = r118;
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L233() else L234();
  L32(r104):
    c25 = `as.logical`(r104);
    if c25 then L217() else L33();
  L39(r120):
    c29 = `as.logical`(r120);
    if c29 then L40(c29) else L235();
  L213():
    direct = ld direct;
    check L215() else D30();
  L214():
    r103 = dyn base12(<sym direct>);
    goto L32(r103);
  L233():
    missing1 = ldf missing in base;
    r121 = dyn missing1(<sym useInherited>);
    goto L39(r121);
  L234():
    r119 = dyn base13(<sym useInherited>);
    goto L39(r119);
  D30():
    deopt 121 [direct];
  L33():
    goto L37();
  L40(c30):
    c40 = `as.logical`(c30);
    if c40 then L241() else L42();
  L215():
    direct1 = force? direct;
    checkMissing(direct1);
    length4 = ldf length in base;
    r105 = dyn length4(direct1);
    check L216() else D31();
  L217():
    doCache3 = ld doCache;
    check L218() else D32();
  L235():
    useInherited3 = ld useInherited;
    check L236() else D39();
  D31():
    deopt 124 [r105];
  D32():
    deopt 125 [doCache3];
  D39():
    deopt 161 [c29, useInherited3];
  L42():
    cl5 = ld cl1;
    check L249() else D44();
  L44(r130):
    st labels = r130;
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L250() else L251();
  L216():
    goto L32(r105);
  L218():
    doCache4 = force? doCache3;
    checkMissing(doCache4);
    c26 = `as.logical`(doCache4);
    if c26 then L219() else L34();
  L236():
    useInherited4 = force? useInherited3;
    checkMissing(useInherited4);
    c32 = `is.object`(useInherited4);
    if c32 then L237() else L238(c29, useInherited4);
  L241():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L242() else L243();
  D44():
    deopt 179 [cl5];
  L34():
    goto L35();
  L35():
    direct6 = ld direct;
    check L223() else D35();
  L41(c36, dx7):
    c37 = `as.logical`(dx7);
    c38 = `||`(c36, c37);
    goto L40(c38);
  L43(r124):
    goto L44(r124);
  L45(r132):
    st supersList = r132;
    sym16 = ldf vector;
    base16 = ldf vector in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L254() else L255();
  L219():
    assign = ldf assign;
    check L220() else D33();
  L237():
    dr6 = tryDispatchBuiltin.1("[[", useInherited4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L239() else L238(c29, dr6);
  L238(c34, useInherited6):
    __5 = ldf `[[` in base;
    r122 = dyn __5(useInherited6, 1);
    goto L41(c34, r122);
  L242():
    cl3 = ld cl1;
    check L244() else D40();
  L243():
    r123 = dyn base14(<sym cl1>, <lang .eligibleSuperClasses(`@`(def, contains), simpleOnly)>, "ANY");
    goto L43(r123);
  L249():
    cl6 = force? cl5;
    checkMissing(cl6);
    goto L44(cl6);
  L250():
    labels = ld labels;
    check L252() else D45();
  L251():
    r131 = dyn base15(<sym labels>);
    goto L45(r131);
  D33():
    deopt 128 [];
  D35():
    deopt 136 [direct6];
  D40():
    deopt 169 [cl3];
  D45():
    deopt 184 [labels];
  L46(r135):
    st classDefs = r135;
    def = ld def;
    check L258() else D49();
  L220():
    p24 = prom<V +>{
      label2 = ld label;
      label3 = force? label2;
      checkMissing(label3);
      return label3;
    };
    p25 = prom<V +>{
      direct2 = ld direct;
      direct3 = force? direct2;
      checkMissing(direct3);
      c27 = `is.object`(direct3);
      if c27 then L1() else L2(direct3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", direct3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(direct5):
      __3 = ldf `[[` in base;
      r107 = dyn __3(direct5, 1);
      goto L0(r107);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p26 = prom<V +>{
      mtable3 = ld mtable;
      mtable4 = force? mtable3;
      checkMissing(mtable4);
      return mtable4;
    };
    r110 = dyn assign[, , envir](p24, p25, p26);
    check L221() else D34();
  L223():
    direct7 = force? direct6;
    checkMissing(direct7);
    popenv;
    return direct7;
  L239():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L41(c29, dx6);
  L244():
    cl4 = force? cl3;
    checkMissing(cl4);
    _eligibleSuperClasses = ldf `.eligibleSuperClasses`;
    check L245() else D41();
  L252():
    labels1 = force? labels;
    checkMissing(labels1);
    list1 = ldf list in base;
    r133 = dyn list1(labels1);
    check L253() else D46();
  L254():
    nargs2 = ld nargs;
    check L256() else D47();
  L255():
    r134 = dyn base16("list", <sym nargs>);
    goto L46(r134);
  D34():
    deopt 133 [r110];
  D41():
    deopt 172 [];
  D46():
    deopt 187 [r133];
  D47():
    deopt 192 [nargs2];
  D49():
    deopt 197 [def];
  L221():
    goto L35();
  L245():
    p29 = prom<V +>{
      __6 = ldf `@` in base;
      r125 = dyn __6(<sym def>, <sym contains>);
      return r125;
    };
    p30 = prom<V +>{
      simpleOnly1 = ld simpleOnly;
      simpleOnly2 = force? simpleOnly1;
      checkMissing(simpleOnly2);
      return simpleOnly2;
    };
    r128 = dyn _eligibleSuperClasses(p29, p30);
    check L246() else D42();
  L253():
    goto L45(r133);
  L256():
    nargs3 = force? nargs2;
    checkMissing(nargs3);
    vector = ldf vector in base;
    r136 = dyn vector("list", nargs3);
    check L257() else D48();
  L258():
    def1 = force? def;
    checkMissing(def1);
    l = ld classDefs;
    c42 = `is.object`(l);
    if c42 then L259() else L260(def1, l);
  D42():
    deopt 175 [r128];
  D48():
    deopt 195 [r136];
  L47(dx9):
    st classDefs = dx9;
    nargs4 = ld nargs;
    check L262() else D50();
  L246():
    c41 = ldf c in base;
    r129 = dyn c41(cl4, r128, "ANY");
    check L247() else D43();
  L257():
    goto L46(r136);
  L259():
    dr8 = tryDispatchBuiltin.0("[[<-", l, def1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L261() else L260(def1, dr8);
  L260(def3, l2):
    ____ = ldf `[[<-` in base;
    r137 = dyn ____(l2, def1, 1);
    goto L47(r137);
  D43():
    deopt 178 [r129];
  D50():
    deopt 204 [nargs4];
  L247():
    goto L43(r129);
  L261():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L47(dx8);
  L262():
    nargs5 = force? nargs4;
    checkMissing(nargs5);
    r138 = `>`(nargs5, 1.0);
    c43 = `as.logical`(r138);
    if c43 then L263() else L48();
  L48():
    goto L60();
  L60():
    labels4 = ld labels;
    check L299() else D66();
  L263():
    nargs6 = ld nargs;
    check L264() else D51();
  D51():
    deopt 209 [2.0, nargs6];
  D66():
    deopt 274 [labels4];
  L264():
    nargs7 = force? nargs6;
    checkMissing(nargs7);
    r139 = `:`(2.0, nargs7);
    s = toForSeq(r139);
    l3 = length(s);
    i = 0;
    goto L49(i);
  L299():
    labels5 = force? labels4;
    checkMissing(labels5);
    c61 = `is.object`(labels5);
    if c61 then L300() else L301(labels5);
  L49(i1):
    i2 = `+`.1(i1, 1);
    c44 = `<`.1(l3, i2);
    if c44 then L265() else L59();
  L61(dx17):
    st labels = dx17;
    unique = ldf unique;
    check L303() else D67();
  L300():
    dr16 = tryDispatchBuiltin.1("[", labels5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L302() else L301(dr16);
  L301(labels7):
    __12 = ldf `[` in base;
    r172 = dyn __12(labels7, -1);
    goto L61(r172);
  D67():
    deopt 281 [];
  L59():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    getClass1 = ldf getClass;
    check L266() else D52();
  L265():
    goto L60();
  L302():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L61(dx16);
  L303():
    p37 = prom<V +>{
      labels8 = ld labels;
      labels9 = force? labels8;
      checkMissing(labels9);
      return labels9;
    };
    r174 = dyn unique(p37);
    check L304() else D68();
  D52():
    deopt 213 [i2];
  D68():
    deopt 283 [r174];
  L266():
    p31 = prom<V +>{
      classes9 = ld classes;
      classes10 = force? classes9;
      checkMissing(classes10);
      c45 = `is.object`(classes10);
      if c45 then L1() else L2(classes10);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", classes10);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(classes12):
      i5 = ld i;
      i6 = force? i5;
      __7 = ldf `[[` in base;
      r140 = dyn __7(classes12, i6);
      goto L0(r140);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p32 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r143 = dyn getClass1[, where, `.Force`](p31, p32, TRUE);
    check L267() else D53();
  L304():
    st labels = r174;
    verbose3 = ld verbose;
    check L305() else D69();
  D53():
    deopt 219 [i2, r143];
  D69():
    deopt 285 [verbose3];
  L267():
    l4 = ld classDefs;
    c46 = `is.object`(l4);
    if c46 then L268() else L269(i2, r143, l4);
  L305():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c62 = `as.logical`(verbose4);
    if c62 then L306() else L62();
  L50(i10, r147, dx13):
    st classDefs = dx13;
    st cc = r147;
    sym17 = ldf missing;
    base17 = ldf missing in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L272() else L273();
  L62():
    goto L65();
  L65():
    sym22 = ldf names;
    base22 = ldf names in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L317() else L318();
  L268():
    dr12 = tryDispatchBuiltin.0("[[<-", l4, r143);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L270() else L269(i2, r143, dr12);
  L269(i8, r145, l6):
    i11 = ld i;
    check L271() else D54();
  L306():
    cat1 = ldf cat;
    check L307() else D70();
  D54():
    deopt 221 [i8, r145, l6, r143, i11];
  D70():
    deopt 288 [];
  L51(i15, r150):
    c47 = `as.logical`(r150);
    if c47 then L52(i15, c47) else L274();
  L66(r187):
    st allMethods = r187;
    sym23 = ldf match;
    base23 = ldf match in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L321() else L322();
  L270():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L50(i2, r143, dx12);
  L271():
    i12 = force? i11;
    ____1 = ldf `[[<-` in base;
    r148 = dyn ____1(l6, r143, i12);
    goto L50(i8, r145, r148);
  L272():
    missing2 = ldf missing in base;
    r151 = dyn missing2(<sym useInherited>);
    goto L51(i10, r151);
  L273():
    r149 = dyn base17(<sym useInherited>);
    goto L51(i10, r149);
  L307():
    p38 = prom<V +>{
      sym21 = ldf length;
      base21 = ldf length in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r176):
      return r176;
    L1():
      labels10 = ld labels;
      labels11 = force? labels10;
      checkMissing(labels11);
      length5 = ldf length in base;
      r177 = dyn length5(labels11);
      goto L0(r177);
    L2():
      r175 = dyn base21(<sym labels>);
      goto L0(r175);
    };
    r179 = dyn cat1(" .fI> length(unique(method labels)) = ", p38);
    check L308() else D71();
  L317():
    table3 = ld table;
    check L319() else D77();
  L318():
    r186 = dyn base22(<sym table>);
    goto L66(r186);
  D71():
    deopt 291 [r179];
  D77():
    deopt 310 [table3];
  L52(i16, c48):
    c58 = `as.logical`(c48);
    if c58 then L281() else L54();
  L67(r190):
    st m = r190;
    sym25 = ldf `is.na`;
    base25 = ldf `is.na` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L327() else L328();
  L274():
    useInherited7 = ld useInherited;
    check L275() else D55();
  L308():
    verbose5 = ld verbose;
    check L309() else D72();
  L319():
    table4 = force? table3;
    checkMissing(table4);
    names = ldf names in base;
    r188 = dyn names(table4);
    check L320() else D78();
  L321():
    labels14 = ld labels;
    check L323() else D79();
  L322():
    r189 = dyn base23(<sym labels>, <lang .fillSignatures(allMethods, length(classes))>);
    goto L67(r189);
  D55():
    deopt 229 [i15, c47, useInherited7];
  D72():
    deopt 292 [verbose5];
  D78():
    deopt 313 [r188];
  D79():
    deopt 317 [labels14];
  L54():
    __11 = ldf `@` in base;
    r162 = dyn __11(<sym cc>, <sym className>);
    goto L56(i16, r162);
  L56(i30, r161):
    st allLabels = r161;
    outerLabels = ldf outerLabels;
    check L288() else D60();
  L68(r199):
    r201 = `!`(r199);
    st found = r201;
    mget = ldf mget;
    check L331() else D85();
  L275():
    useInherited8 = force? useInherited7;
    checkMissing(useInherited8);
    c50 = `is.object`(useInherited8);
    if c50 then L276() else L277(i15, c47, useInherited8);
  L281():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L282() else L283();
  L309():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    r180 = `>=`(verbose6, 2.0);
    c63 = `as.logical`(r180);
    if c63 then L310() else L63();
  L320():
    goto L66(r188);
  L323():
    labels15 = force? labels14;
    checkMissing(labels15);
    _fillSignatures = ldf `.fillSignatures`;
    check L324() else D80();
  L327():
    m = ld m;
    check L329() else D83();
  L328():
    r198 = dyn base25(<sym m>);
    goto L68(r198);
  D60():
    deopt 251 [i30];
  D80():
    deopt 320 [];
  D83():
    deopt 331 [m];
  D85():
    deopt 338 [];
  L53(i21, c54, dx15):
    c55 = `as.logical`(dx15);
    c56 = `||`(c54, c55);
    goto L52(i21, c56);
  L55(i29, r154):
    goto L56(i29, r154);
  L63():
    goto L64(NULL);
  L64(r184):
    goto L65();
  L276():
    dr14 = tryDispatchBuiltin.1("[[", useInherited8);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L278() else L277(i15, c47, dr14);
  L277(i19, c52, useInherited10):
    i22 = ld i;
    check L279() else D56();
  L282():
    __9 = ldf `@` in base;
    r155 = dyn __9(<sym cc>, <sym className>);
    _eligibleSuperClasses1 = ldf `.eligibleSuperClasses`;
    check L284() else D57();
  L283():
    r153 = dyn base18(<lang `@`(cc, className)>, <lang .eligibleSuperClasses(`@`(cc, contains), simpleOnly)>, "ANY");
    goto L55(i16, r153);
  L288():
    p35 = prom<V +>{
      labels2 = ld labels;
      labels3 = force? labels2;
      checkMissing(labels3);
      return labels3;
    };
    p36 = prom<V +>{
      allLabels = ld allLabels;
      allLabels1 = force? allLabels;
      checkMissing(allLabels1);
      return allLabels1;
    };
    r165 = dyn outerLabels(p35, p36);
    check L289() else D61();
  L310():
    cat2 = ldf cat;
    check L311() else D73();
  L324():
    p40 = prom<V +>{
      allMethods = ld allMethods;
      allMethods1 = force? allMethods;
      checkMissing(allMethods1);
      return allMethods1;
    };
    p41 = prom<V +>{
      sym24 = ldf length;
      base24 = ldf length in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(r193):
      return r193;
    L1():
      classes13 = ld classes;
      classes14 = force? classes13;
      checkMissing(classes14);
      length6 = ldf length in base;
      r194 = dyn length6(classes14);
      goto L0(r194);
    L2():
      r192 = dyn base24(<sym classes>);
      goto L0(r192);
    };
    r196 = dyn _fillSignatures(p40, p41);
    check L325() else D81();
  L329():
    m1 = force? m;
    checkMissing(m1);
    is_na = ldf `is.na` in base;
    r200 = dyn is_na(m1);
    check L330() else D84();
  L331():
    p42 = prom<V +>{
      allMethods2 = ld allMethods;
      allMethods3 = force? allMethods2;
      checkMissing(allMethods3);
      c64 = `is.object`(allMethods3);
      if c64 then L2() else L3(allMethods3);
    L0(dx19):
      return dx19;
    L2():
      dr18 = tryDispatchBuiltin.1("[", allMethods3);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L4() else L3(dr18);
    L3(allMethods5):
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      c65 = `is.object`(m3);
      if c65 then L5() else L6(allMethods5, m3);
    L1(allMethods9, dx21):
      __14 = ldf `[` in base;
      r203 = dyn __14(allMethods9, dx21);
      goto L0(r203);
    L4():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    L5():
      dr20 = tryDispatchBuiltin.1("[", m3);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L7() else L6(allMethods5, dr20);
    L6(allMethods7, m5):
      found = ld found;
      found1 = force? found;
      __13 = ldf `[` in base;
      r202 = dyn __13(m5, found1);
      goto L1(allMethods7, r202);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L1(allMethods5, dx20);
    };
    p43 = prom<V +>{
      table5 = ld table;
      table6 = force? table5;
      checkMissing(table6);
      return table6;
    };
    r206 = dyn mget(p42, p43);
    check L332() else D86();
  D56():
    deopt 231 [i19, c52, useInherited10, i22];
  D57():
    deopt 240 [i16];
  D61():
    deopt 254 [i30, r165];
  D73():
    deopt 297 [];
  D81():
    deopt 323 [r196];
  D84():
    deopt 334 [r200];
  D86():
    deopt 341 [r206];
  L278():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L53(i15, c47, dx14);
  L279():
    i23 = force? i22;
    __8 = ldf `[[` in base;
    r152 = dyn __8(useInherited10, i23);
    goto L53(i19, c52, r152);
  L284():
    p33 = prom<V +>{
      __10 = ldf `@` in base;
      r156 = dyn __10(<sym cc>, <sym contains>);
      return r156;
    };
    p34 = prom<V +>{
      simpleOnly3 = ld simpleOnly;
      simpleOnly4 = force? simpleOnly3;
      checkMissing(simpleOnly4);
      return simpleOnly4;
    };
    r159 = dyn _eligibleSuperClasses1(p33, p34);
    check L285() else D58();
  L289():
    st labels = r165;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L290() else L291();
  L311():
    r181 = dyn cat2(";  labels = \n");
    check L312() else D74();
  L325():
    match = ldf match in base;
    r197 = dyn match(labels15, r196, NA_INT, NULL);
    check L326() else D82();
  L330():
    goto L68(r200);
  L332():
    st methods = r206;
    verbose7 = ld verbose;
    check L333() else D87();
  D58():
    deopt 243 [i16, r159];
  D74():
    deopt 299 [r181];
  D82():
    deopt 327 [r197];
  D87():
    deopt 343 [verbose7];
  L57(i33, r167):
    st supersList = r167;
    goto L49(i33);
  L285():
    c59 = ldf c in base;
    r160 = dyn c59(r155, r159, "ANY");
    check L286() else D59();
  L290():
    supersList = ld supersList;
    check L292() else D62();
  L291():
    r166 = dyn base19(<sym supersList>, <lang list(allLabels)>);
    goto L57(i30, r166);
  L312():
    print = ldf print;
    check L313() else D75();
  L326():
    goto L67(r197);
  L333():
    verbose8 = force? verbose7;
    checkMissing(verbose8);
    c66 = `as.logical`(verbose8);
    if c66 then L334() else L69();
  D59():
    deopt 246 [i16, r160];
  D62():
    deopt 258 [i30, supersList];
  D75():
    deopt 301 [];
  L69():
    goto L70();
  L70():
    hasGroup8 = ld hasGroup;
    check L338() else D90();
  L286():
    goto L55(i16, r160);
  L292():
    supersList1 = force? supersList;
    checkMissing(supersList1);
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L293() else L294();
  L313():
    p39 = prom<V +>{
      labels12 = ld labels;
      labels13 = force? labels12;
      checkMissing(labels13);
      return labels13;
    };
    r183 = dyn print(p39);
    check L314() else D76();
  L334():
    cat3 = ldf cat;
    check L335() else D88();
  D76():
    deopt 303 [r183];
  D88():
    deopt 346 [];
  D90():
    deopt 353 [hasGroup8];
  L58(i36, r169):
    c60 = ldf c in base;
    r171 = dyn c60(supersList1, r169);
    check L297() else D65();
  L293():
    allLabels2 = ld allLabels;
    check L295() else D63();
  L294():
    r168 = dyn base20(<sym allLabels>);
    goto L58(i30, r168);
  L314():
    goto L64(r183);
  L335():
    p44 = prom<V +>{
      sym26 = ldf length;
      base26 = ldf length in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L1() else L2();
    L0(r208):
      return r208;
    L1():
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      length7 = ldf length in base;
      r209 = dyn length7(methods1);
      goto L0(r209);
    L2():
      r207 = dyn base26(<sym methods>);
      goto L0(r207);
    };
    r211 = dyn cat3(" >> found: ", p44, "\n");
    check L336() else D89();
  L338():
    hasGroup9 = force? hasGroup8;
    checkMissing(hasGroup9);
    c67 = `as.logical`(hasGroup9);
    if c67 then L339() else L71();
  D63():
    deopt 262 [i30, allLabels2];
  D65():
    deopt 267 [i36, r171];
  D89():
    deopt 350 [r211];
  L71():
    sym32 = ldf rep;
    base32 = ldf rep in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L360() else L361();
  L78():
    _duplicateClassesExist = ldf `.duplicateClassesExist`;
    check L362() else D100();
  L295():
    allLabels3 = force? allLabels2;
    checkMissing(allLabels3);
    list2 = ldf list in base;
    r170 = dyn list2(allLabels3);
    check L296() else D64();
  L297():
    goto L57(i36, r171);
  L336():
    goto L70();
  L339():
    _getGroupMethods1 = ldf `.getGroupMethods`;
    check L340() else D91();
  D64():
    deopt 265 [i30, r170];
  D91():
    deopt 356 [];
  D100():
    deopt 397 [];
  L79(r237):
    st fromGroup = r237;
    goto L78();
  L296():
    goto L58(i30, r170);
  L340():
    p45 = prom<V +>{
      labels16 = ld labels;
      labels17 = force? labels16;
      checkMissing(labels17);
      return labels17;
    };
    p46 = prom<V +>{
      groupGenerics4 = ld groupGenerics;
      groupGenerics5 = force? groupGenerics4;
      checkMissing(groupGenerics5);
      return groupGenerics5;
    };
    p47 = prom<V +>{
      found2 = ld found;
      found3 = force? found2;
      checkMissing(found3);
      return found3;
    };
    r216 = dyn _getGroupMethods1(p45, p46, p47);
    check L341() else D92();
  L360():
    rep3 = ldf rep in base;
    r238 = dyn rep3(FALSE, <lang length(methods)>);
    goto L79(r238);
  L361():
    r236 = dyn base32(FALSE, <lang length(methods)>);
    goto L79(r236);
  L362():
    r239 = dyn _duplicateClassesExist();
    check L363() else D101();
  D92():
    deopt 360 [r216];
  D101():
    deopt 398 [r239];
  L341():
    st groupmethods = r216;
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L342() else L343();
  L363():
    c71 = `as.logical`(r239);
    if c71 then L364() else L80();
  L72(r218):
    st fromGroup = r218;
    verbose9 = ld verbose;
    check L349() else D94();
  L80():
    goto L98();
  L98():
    doExcluded4 = ld doExcluded;
    check L416() else D125();
  L342():
    sym28 = ldf rep;
    base28 = ldf rep in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L344() else L345();
  L343():
    r217 = dyn base27(<lang rep(FALSE, length(methods))>, <lang rep(TRUE, length(groupmethods))>);
    goto L72(r217);
  L364():
    integer = ldf integer;
    check L365() else D102();
  D94():
    deopt 373 [verbose9];
  D102():
    deopt 400 [];
  D125():
    deopt 484 [doExcluded4];
  L73(r220):
    sym29 = ldf rep;
    base29 = ldf rep in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L346() else L347();
  L344():
    rep1 = ldf rep in base;
    r221 = dyn rep1(FALSE, <lang length(methods)>);
    goto L73(r221);
  L345():
    r219 = dyn base28(FALSE, <lang length(methods)>);
    goto L73(r219);
  L349():
    verbose10 = force? verbose9;
    checkMissing(verbose10);
    c69 = `as.logical`(verbose10);
    if c69 then L350() else L75();
  L365():
    r240 = dyn integer();
    check L366() else D103();
  L416():
    doExcluded5 = force? doExcluded4;
    checkMissing(doExcluded5);
    c80 = `as.logical`(doExcluded5);
    if c80 then L417() else L99();
  D103():
    deopt 401 [r240];
  L74(r223):
    c68 = ldf c in base;
    r225 = dyn c68(r220, r223);
    check L348() else D93();
  L75():
    goto L76();
  L76():
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L354() else L355();
  L99():
    goto L105();
  L105():
    sym44 = ldf length;
    base44 = ldf length in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L437() else L438();
  L346():
    rep2 = ldf rep in base;
    r224 = dyn rep2(TRUE, <lang length(groupmethods)>);
    goto L74(r224);
  L347():
    r222 = dyn base29(TRUE, <lang length(groupmethods)>);
    goto L74(r222);
  L350():
    cat4 = ldf cat;
    check L351() else D95();
  L366():
    st found = r240;
    sym33 = ldf names;
    base33 = ldf names in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L367() else L368();
  L417():
    methods18 = ld methods;
    check L418() else D126();
  D93():
    deopt 371 [r225];
  D95():
    deopt 376 [];
  D126():
    deopt 486 [methods18];
  L77(r233):
    st methods = r233;
    goto L78();
  L81(r242):
    st nm = r242;
    sym34 = ldf seq_along;
    base34 = ldf seq_along in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L371() else L372();
  L106(r294):
    r296 = `>`(r294, 1);
    c82 = `as.logical`(r296);
    if c82 then L441() else L107();
  L348():
    goto L72(r225);
  L351():
    p48 = prom<V +>{
      sym30 = ldf length;
      base30 = ldf length in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r227):
      return r227;
    L1():
      groupmethods = ld groupmethods;
      groupmethods1 = force? groupmethods;
      checkMissing(groupmethods1);
      length8 = ldf length in base;
      r228 = dyn length8(groupmethods1);
      goto L0(r228);
    L2():
      r226 = dyn base30(<sym groupmethods>);
      goto L0(r226);
    };
    r230 = dyn cat4(" .fI> #{additional group methods}:", p48, "\n");
    check L352() else D96();
  L354():
    methods2 = ld methods;
    check L356() else D97();
  L355():
    r232 = dyn base31(<sym methods>, <sym groupmethods>);
    goto L77(r232);
  L367():
    methods4 = ld methods;
    check L369() else D104();
  L368():
    r241 = dyn base33(<sym methods>);
    goto L81(r241);
  L418():
    methods19 = force? methods18;
    checkMissing(methods19);
    c81 = `is.object`(methods19);
    if c81 then L419() else L420(methods19);
  L437():
    methods36 = ld methods;
    check L439() else D133();
  L438():
    r293 = dyn base44(<sym methods>);
    goto L106(r293);
  D96():
    deopt 380 [r230];
  D97():
    deopt 385 [methods2];
  D104():
    deopt 405 [methods4];
  D133():
    deopt 516 [methods36];
  L82(r245):
    s1 = toForSeq(r245);
    l7 = length(s1);
    i38 = 0;
    goto L83(i38);
  L100(dx29):
    st methods = dx29;
    goto L105();
  L107():
    goto L114();
  L114():
    sym48 = ldf length;
    base48 = ldf length in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L466() else L467();
  L352():
    goto L76();
  L356():
    methods3 = force? methods2;
    checkMissing(methods3);
    groupmethods2 = ld groupmethods;
    check L357() else D98();
  L369():
    methods5 = force? methods4;
    checkMissing(methods5);
    names1 = ldf names in base;
    r243 = dyn names1(methods5);
    check L370() else D105();
  L371():
    methods6 = ld methods;
    check L373() else D106();
  L372():
    r244 = dyn base34(<sym methods>);
    goto L82(r244);
  L419():
    dr28 = tryDispatchBuiltin.1("[", methods19);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L421() else L420(dr28);
  L420(methods21):
    sym40 = ldf `is.na`;
    base40 = ldf `is.na` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L422() else L423();
  L439():
    methods37 = force? methods36;
    checkMissing(methods37);
    length10 = ldf length in base;
    r295 = dyn length10(methods37);
    check L440() else D134();
  L441():
    paste1 = ldf paste;
    check L442() else D135();
  D98():
    deopt 387 [groupmethods2];
  D105():
    deopt 408 [r243];
  D106():
    deopt 411 [methods6];
  D134():
    deopt 519 [r295];
  D135():
    deopt 523 [];
  L83(i39):
    i40 = `+`.1(i39, 1);
    c72 = `<`.1(l7, i40);
    if c72 then L374() else L90();
  L101(methods24, r281):
    __17 = ldf `[` in base;
    r292 = dyn __17(methods24, r281);
    goto L100(r292);
  L115(r314):
    r316 = `>`(r314, 1);
    c86 = `as.logical`(r316);
    if c86 then L470() else L116();
  L357():
    groupmethods3 = force? groupmethods2;
    checkMissing(groupmethods3);
    c70 = ldf c in base;
    r234 = dyn c70(methods3, groupmethods3);
    check L358() else D99();
  L370():
    goto L81(r243);
  L373():
    methods7 = force? methods6;
    checkMissing(methods7);
    r246 = seq_along(methods7);
    goto L82(r246);
  L421():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L100(dx28);
  L422():
    sym41 = ldf match;
    base41 = ldf match in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L424() else L425();
  L423():
    r280 = dyn base40(<lang match(names(methods), as.character(excluded))>);
    goto L101(methods21, r280);
  L440():
    goto L106(r295);
  L442():
    p53 = prom<V +>{
      sym45 = ldf `rep.int`;
      base45 = ldf `rep.int` in base;
      guard45 = `==`.4(sym45, base45);
      if guard45 then L1() else L2();
    L0(r298):
      return r298;
    L1():
      nargs8 = ld nargs;
      nargs9 = force? nargs8;
      checkMissing(nargs9);
      rep_int = ldf `rep.int` in base;
      r299 = dyn rep_int("ANY", nargs9);
      goto L0(r299);
    L2():
      r297 = dyn base45("ANY", <sym nargs>);
      goto L0(r297);
    };
    r301 = dyn paste1[, collapse](p53, "#");
    check L443() else D136();
  L466():
    methods44 = ld methods;
    check L468() else D146();
  L467():
    r313 = dyn base48(<sym methods>);
    goto L115(r313);
  D99():
    deopt 390 [r234];
  D136():
    deopt 527 [r301];
  D146():
    deopt 568 [methods44];
  L90():
    x1 = `[[`(s1, i40, NULL, TRUE);
    st i = x1;
    methods8 = ld methods;
    check L375() else D107();
  L102(methods27, r283):
    is_na1 = ldf `is.na` in base;
    r291 = dyn is_na1(r283);
    check L435() else D132();
  L116():
    goto L130();
  L130():
    simpleOnly5 = ld simpleOnly;
    check L513() else D170();
  L358():
    goto L77(r234);
  L374():
    sym37 = ldf length;
    base37 = ldf length in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L397() else L398();
  L424():
    sym42 = ldf names;
    base42 = ldf names in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L426() else L427();
  L425():
    r282 = dyn base41(<lang names(methods)>, <lang as.character(excluded)>);
    goto L102(methods21, r282);
  L443():
    st defaultLabel = r301;
    sym46 = ldf match;
    base46 = ldf match in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L444() else L445();
  L468():
    methods45 = force? methods44;
    checkMissing(methods45);
    length11 = ldf length in base;
    r315 = dyn length11(methods45);
    check L469() else D147();
  L470():
    verbose11 = ld verbose;
    check L471() else D148();
  D107():
    deopt 414 [i40, methods8];
  D132():
    deopt 509 [methods27, r291];
  D147():
    deopt 571 [r315];
  D148():
    deopt 574 [verbose11];
  D170():
    deopt 655 [simpleOnly5];
  L91(r266):
    c78 = `as.logical`(r266);
    if c78 then L401() else L92();
  L103(methods30, r285):
    sym43 = ldf `as.character`;
    base43 = ldf `as.character` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L430() else L431();
  L108(r303):
    st i = r303;
    i68 = ld i;
    check L452() else D141();
  L375():
    methods9 = force? methods8;
    checkMissing(methods9);
    c73 = `is.object`(methods9);
    if c73 then L376() else L377(i40, methods9);
  L397():
    found6 = ld found;
    check L399() else D117();
  L398():
    r265 = dyn base37(<sym found>);
    goto L91(r265);
  L426():
    methods31 = ld methods;
    check L428() else D127();
  L427():
    r284 = dyn base42(<sym methods>);
    goto L103(methods21, r284);
  L435():
    goto L101(methods27, r291);
  L444():
    defaultLabel = ld defaultLabel;
    check L446() else D137();
  L445():
    r302 = dyn base46(<sym defaultLabel>, <lang names(methods)>, 0);
    goto L108(r302);
  L469():
    goto L115(r315);
  L471():
    verbose12 = force? verbose11;
    checkMissing(verbose12);
    c87 = `as.logical`(verbose12);
    if c87 then L472() else L117();
  L513():
    simpleOnly6 = force? simpleOnly5;
    checkMissing(simpleOnly6);
    c94 = `as.logical`(simpleOnly6);
    if c94 then L514() else L131(c94);
  D117():
    deopt 453 [found6];
  D127():
    deopt 494 [methods21, methods31];
  D137():
    deopt 531 [defaultLabel];
  D141():
    deopt 544 [i68];
  L84(i46, dx23):
    st m = dx23;
    sym35 = ldf `is.environment`;
    base35 = ldf `is.environment` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L380() else L381();
  L92():
    goto L93();
  L93():
    sym38 = ldf `is.list`;
    base38 = ldf `is.list` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L405() else L406();
  L104(methods35, r288):
    match1 = ldf match in base;
    r290 = dyn match1(r285, r288, NA_INT, NULL);
    check L434() else D131();
  L117():
    goto L118();
  L118():
    _getBestMethods = ldf `.getBestMethods`;
    check L476() else D151();
  L131(c96):
    c103 = `as.logical`(c96);
    if c103 then L520() else L133();
  L376():
    dr22 = tryDispatchBuiltin.1("[[", methods9);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L378() else L377(i40, dr22);
  L377(i44, methods11):
    i47 = ld i;
    check L379() else D108();
  L399():
    found7 = force? found6;
    checkMissing(found7);
    length9 = ldf length in base;
    r267 = dyn length9(found7);
    check L400() else D118();
  L401():
    unlist = ldf unlist;
    check L402() else D119();
  L428():
    methods32 = force? methods31;
    checkMissing(methods32);
    names2 = ldf names in base;
    r286 = dyn names2(methods32);
    check L429() else D128();
  L430():
    excluded3 = ld excluded;
    check L432() else D129();
  L431():
    r287 = dyn base43(<sym excluded>);
    goto L104(methods30, r287);
  L446():
    defaultLabel1 = force? defaultLabel;
    checkMissing(defaultLabel1);
    sym47 = ldf names;
    base47 = ldf names in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L447() else L448();
  L452():
    i69 = force? i68;
    checkMissing(i69);
    r308 = `>`(i69, 0);
    c83 = `as.logical`(r308);
    if c83 then L453() else L110();
  L472():
    cat5 = ldf cat;
    check L473() else D149();
  L514():
    sym55 = ldf length;
    base55 = ldf length in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L515() else L516();
  D108():
    deopt 416 [i44, methods11, i47];
  D118():
    deopt 456 [r267];
  D119():
    deopt 458 [];
  D128():
    deopt 497 [methods21, r286];
  D129():
    deopt 500 [methods30, excluded3];
  D131():
    deopt 507 [methods35, r290];
  D149():
    deopt 577 [];
  D151():
    deopt 585 [];
  L85(i51, r249):
    c74 = `as.logical`(r249);
    if c74 then L384() else L86();
  L94(r272):
    r274 = `!`(r272);
    c79 = `as.logical`(r274);
    if c79 then L409() else L95();
  L109(r305):
    match2 = ldf match in base;
    r307 = dyn match2(defaultLabel1, r305, 0, NULL);
    check L451() else D140();
  L110():
    goto L113(NULL);
  L113(dx35):
    goto L114();
  L132(c99, r370):
    r372 = `==`(r370, 0);
    c100 = `as.logical`(r372);
    c101 = `&&`(c99, c100);
    goto L131(c101);
  L133():
    goto L137();
  L137():
    sym57 = ldf length;
    base57 = ldf length in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L532() else L533();
  L378():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L84(i40, dx22);
  L379():
    i48 = force? i47;
    __15 = ldf `[[` in base;
    r247 = dyn __15(methods11, i48);
    goto L84(i44, r247);
  L380():
    m6 = ld m;
    check L382() else D109();
  L381():
    r248 = dyn base35(<sym m>);
    goto L85(i46, r248);
  L400():
    goto L91(r267);
  L402():
    p52 = prom<V +>{
      methods12 = ld methods;
      methods13 = force? methods12;
      checkMissing(methods13);
      return methods13;
    };
    r269 = dyn unlist[, recursive](p52, FALSE);
    check L403() else D120();
  L405():
    methods14 = ld methods;
    check L407() else D121();
  L406():
    r271 = dyn base38(<sym methods>);
    goto L94(r271);
  L429():
    goto L103(methods21, r286);
  L432():
    excluded4 = force? excluded3;
    checkMissing(excluded4);
    as_character = ldf `as.character` in base;
    r289 = dyn as_character(excluded4);
    check L433() else D130();
  L434():
    goto L102(methods35, r290);
  L447():
    methods38 = ld methods;
    check L449() else D138();
  L448():
    r304 = dyn base47(<sym methods>);
    goto L109(r304);
  L453():
    methods40 = ld methods;
    check L454() else D142();
  L473():
    p54 = prom<V +>{
      sym49 = ldf length;
      base49 = ldf length in base;
      guard49 = `==`.4(sym49, base49);
      if guard49 then L1() else L2();
    L0(r318):
      return r318;
    L1():
      methods46 = ld methods;
      methods47 = force? methods46;
      checkMissing(methods47);
      length12 = ldf length in base;
      r319 = dyn length12(methods47);
      goto L0(r319);
    L2():
      r317 = dyn base49(<sym methods>);
      goto L0(r317);
    };
    r321 = dyn cat5(" .fI> length(methods) = ", p54, " --> ambiguity\n");
    check L474() else D150();
  L476():
    p55 = prom<V +>{
      methods48 = ld methods;
      methods49 = force? methods48;
      checkMissing(methods49);
      return methods49;
    };
    p56 = prom<V +>{
      supersList2 = ld supersList;
      supersList3 = force? supersList2;
      checkMissing(supersList3);
      return supersList3;
    };
    p57 = prom<V +>{
      fromGroup4 = ld fromGroup;
      fromGroup5 = force? fromGroup4;
      checkMissing(fromGroup5);
      return fromGroup5;
    };
    p58 = prom<V +>{
      verbose13 = ld verbose;
      verbose14 = force? verbose13;
      checkMissing(verbose14);
      return verbose14;
    };
    r327 = dyn _getBestMethods[, , , verbose](p55, p56, p57, p58);
    check L477() else D152();
  L515():
    methods56 = ld methods;
    check L517() else D171();
  L516():
    r369 = dyn base55(<sym methods>);
    goto L132(c94, r369);
  L520():
    Recall = ldf Recall;
    check L521() else D173();
  D109():
    deopt 422 [i46, m6];
  D120():
    deopt 462 [r269];
  D121():
    deopt 468 [methods14];
  D130():
    deopt 503 [methods30, r289];
  D138():
    deopt 535 [methods38];
  D140():
    deopt 542 [r307];
  D142():
    deopt 548 [methods40];
  D150():
    deopt 581 [r321];
  D152():
    deopt 591 [r327];
  D171():
    deopt 659 [c94, methods56];
  D173():
    deopt 667 [];
  L86():
    goto L89(i51);
  L89(i67):
    goto L83(i67);
  L95():
    goto L97(NULL);
  L97(r278):
    goto L98();
  L138(r396):
    c105 = `as.logical`(r396);
    if c105 then L536() else L139();
  L382():
    m7 = force? m6;
    checkMissing(m7);
    is_environment2 = ldf `is.environment` in base;
    r250 = dyn is_environment2(m7);
    check L383() else D110();
  L384():
    _checkDuplicateMethodClasses = ldf `.checkDuplicateMethodClasses`;
    check L385() else D111();
  L403():
    st methods = r269;
    goto L93();
  L407():
    methods15 = force? methods14;
    checkMissing(methods15);
    is_list = ldf `is.list` in base;
    r273 = dyn is_list(methods15);
    check L408() else D122();
  L409():
    sym39 = ldf list;
    base39 = ldf list in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L410() else L411();
  L433():
    goto L104(methods30, r289);
  L449():
    methods39 = force? methods38;
    checkMissing(methods39);
    names3 = ldf names in base;
    r306 = dyn names3(methods39);
    check L450() else D139();
  L451():
    goto L108(r307);
  L454():
    methods41 = force? methods40;
    checkMissing(methods41);
    c84 = `is.object`(methods41);
    if c84 then L455() else L456(methods41);
  L474():
    goto L118();
  L477():
    st select = r327;
    sym50 = ldf length;
    base50 = ldf length in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L478() else L479();
  L517():
    methods57 = force? methods56;
    checkMissing(methods57);
    length15 = ldf length in base;
    r371 = dyn length15(methods57);
    check L518() else D172();
  L521():
    p73 = prom<V +>{
      classes17 = ld classes;
      classes18 = force? classes17;
      checkMissing(classes18);
      return classes18;
    };
    p74 = prom<V +>{
      fdef11 = ld fdef;
      fdef12 = force? fdef11;
      checkMissing(fdef12);
      return fdef12;
    };
    p75 = prom<V +>{
      mtable5 = ld mtable;
      mtable6 = force? mtable5;
      checkMissing(mtable6);
      return mtable6;
    };
    p76 = prom<V +>{
      table7 = ld table;
      table8 = force? table7;
      checkMissing(table8);
      return table8;
    };
    p77 = prom<V +>{
      excluded5 = ld excluded;
      excluded6 = force? excluded5;
      checkMissing(excluded6);
      return excluded6;
    };
    p78 = prom<V +>{
      useInherited11 = ld useInherited;
      useInherited12 = force? useInherited11;
      checkMissing(useInherited12);
      return useInherited12;
    };
    p79 = prom<V +>{
      simpleOnly7 = ld simpleOnly;
      simpleOnly8 = force? simpleOnly7;
      checkMissing(simpleOnly8);
      return simpleOnly8;
    };
    p80 = prom<V +>{
      verbose19 = ld verbose;
      verbose20 = force? verbose19;
      checkMissing(verbose20);
      return verbose20;
    };
    r381 = dyn Recall(p73, p74, p75, p76, p77, p78, p79, p80, FALSE);
    check L522() else D174();
  L532():
    methods60 = ld methods;
    check L534() else D179();
  L533():
    r395 = dyn base57(<sym methods>);
    goto L138(r395);
  D110():
    deopt 425 [i46, r250];
  D111():
    deopt 427 [i51];
  D122():
    deopt 471 [r273];
  D139():
    deopt 538 [r306];
  D172():
    deopt 662 [c94, r371];
  D174():
    deopt 677 [r381];
  D179():
    deopt 699 [methods60];
  L96(r276):
    st methods = r276;
    goto L97(r276);
  L111(dx32):
    st methods = dx32;
    fromGroup = ld fromGroup;
    check L459() else D144();
  L119(r329):
    r331 = `>`(r329, 1);
    c88 = `as.logical`(r331);
    if c88 then L482() else L120();
  L139():
    goto L151();
  L151():
    methods66 = ld methods;
    check L576() else D203();
  L383():
    goto L85(i46, r250);
  L385():
    p49 = prom<V +>{
      classDefs = ld classDefs;
      classDefs1 = force? classDefs;
      checkMissing(classDefs1);
      return classDefs1;
    };
    p50 = prom<V +>{
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      return m9;
    };
    p51 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      c75 = `is.object`(nm1);
      if c75 then L1() else L2(nm1);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("[[", nm1);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(nm3):
      i54 = ld i;
      i55 = force? i54;
      __16 = ldf `[[` in base;
      r253 = dyn __16(nm3, i55);
      goto L0(r253);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r255 = dyn _checkDuplicateMethodClasses(p49, p50, p51);
    check L386() else D112();
  L408():
    goto L94(r273);
  L410():
    methods16 = ld methods;
    check L412() else D123();
  L411():
    r275 = dyn base39(<sym methods>);
    goto L96(r275);
  L450():
    goto L109(r306);
  L455():
    dr30 = tryDispatchBuiltin.1("[", methods41);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L457() else L456(dr30);
  L456(methods43):
    i70 = ld i;
    check L458() else D143();
  L478():
    select = ld select;
    check L480() else D153();
  L479():
    r328 = dyn base50(<sym select>);
    goto L119(r328);
  L518():
    goto L132(c94, r371);
  L522():
    st methods = r381;
    sym56 = ldf length;
    base56 = ldf length in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L523() else L524();
  L534():
    methods61 = force? methods60;
    checkMissing(methods61);
    length17 = ldf length in base;
    r397 = dyn length17(methods61);
    check L535() else D180();
  L536():
    _sigLabel1 = ldf `.sigLabel`;
    check L537() else D181();
  D112():
    deopt 431 [i51, r255];
  D123():
    deopt 475 [methods16];
  D143():
    deopt 550 [methods43, i70];
  D144():
    deopt 555 [fromGroup];
  D153():
    deopt 595 [select];
  D180():
    deopt 702 [r397];
  D181():
    deopt 704 [];
  D203():
    deopt 781 [methods66];
  L120():
    goto L128();
  L128():
    methods52 = ld methods;
    check L507() else D168();
  L134(r383):
    r385 = `>`(r383, 0);
    c104 = `as.logical`(r385);
    if c104 then L527() else L135();
  L386():
    l8 = ld methods;
    c76 = `is.object`(l8);
    if c76 then L387() else L388(i51, r255, l8);
  L412():
    methods17 = force? methods16;
    checkMissing(methods17);
    list3 = ldf list in base;
    r277 = dyn list3(methods17);
    check L413() else D124();
  L457():
    dx31 = getTryDispatchBuiltinValue(dr30);
    goto L111(dx31);
  L458():
    i71 = force? i70;
    checkMissing(i71);
    r309 = `-`(<missing>, i71);
    __18 = ldf `[` in base;
    r310 = dyn __18(methods43, r309);
    goto L111(r310);
  L459():
    fromGroup1 = force? fromGroup;
    checkMissing(fromGroup1);
    c85 = `is.object`(fromGroup1);
    if c85 then L460() else L461(fromGroup1);
  L480():
    select1 = force? select;
    checkMissing(select1);
    length13 = ldf length in base;
    r330 = dyn length13(select1);
    check L481() else D154();
  L482():
    verbose15 = ld verbose;
    check L483() else D155();
  L523():
    methods58 = ld methods;
    check L525() else D175();
  L524():
    r382 = dyn base56(<sym methods>);
    goto L134(r382);
  L535():
    goto L138(r397);
  L537():
    p84 = prom<V +>{
      classes19 = ld classes;
      classes20 = force? classes19;
      checkMissing(classes20);
      return classes20;
    };
    r399 = dyn _sigLabel1(p84);
    check L538() else D182();
  L576():
    methods67 = force? methods66;
    checkMissing(methods67);
    popenv;
    return methods67;
  D124():
    deopt 478 [r277];
  D154():
    deopt 598 [r330];
  D155():
    deopt 601 [verbose15];
  D168():
    deopt 647 [methods52];
  D175():
    deopt 681 [methods58];
  D182():
    deopt 706 [r399];
  L87(i59, dx27):
    st methods = dx27;
    sym36 = ldf c;
    base36 = ldf c in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L391() else L392();
  L112(dx34):
    st fromGroup = dx34;
    goto L113(dx34);
  L135():
    goto L136(NULL);
  L136(r393):
    goto L137();
  L387():
    dr26 = tryDispatchBuiltin.0("[[<-", l8, r255);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L389() else L388(i51, r255, dr26);
  L388(i57, r257, l10):
    i60 = ld i;
    check L390() else D113();
  L413():
    goto L96(r277);
  L460():
    dr32 = tryDispatchBuiltin.1("[", fromGroup1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L462() else L461(dr32);
  L461(fromGroup3):
    i72 = ld i;
    check L463() else D145();
  L481():
    goto L119(r330);
  L483():
    verbose16 = force? verbose15;
    checkMissing(verbose16);
    c89 = `as.logical`(verbose16);
    if c89 then L484() else L121();
  L507():
    methods53 = force? methods52;
    checkMissing(methods53);
    c93 = `is.object`(methods53);
    if c93 then L508() else L509(methods53);
  L525():
    methods59 = force? methods58;
    checkMissing(methods59);
    length16 = ldf length in base;
    r384 = dyn length16(methods59);
    check L526() else D176();
  L527():
    message = ldf message;
    check L528() else D177();
  L538():
    st tlabel = r399;
    methods62 = ld methods;
    check L539() else D183();
  D113():
    deopt 433 [i57, r257, l10, r255, i60];
  D145():
    deopt 557 [fromGroup3, i72];
  D176():
    deopt 684 [r384];
  D177():
    deopt 688 [];
  D183():
    deopt 708 [methods62];
  L88(i64, r262):
    st found = r262;
    goto L89(i64);
  L121():
    goto L122();
  L122():
    getOption = ldf getOption;
    check L488() else D158();
  L129(dx38):
    st methods = dx38;
    goto L130();
  L389():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L87(i51, dx26);
  L390():
    i61 = force? i60;
    ____2 = ldf `[[<-` in base;
    r260 = dyn ____2(l10, r255, i61);
    goto L87(i57, r260);
  L391():
    found4 = ld found;
    check L393() else D114();
  L392():
    r261 = dyn base36(<sym found>, <sym i>);
    goto L88(i59, r261);
  L462():
    dx33 = getTryDispatchBuiltinValue(dr32);
    goto L112(dx33);
  L463():
    i73 = force? i72;
    checkMissing(i73);
    r311 = `-`(<missing>, i73);
    __19 = ldf `[` in base;
    r312 = dyn __19(fromGroup3, r311);
    goto L112(r312);
  L484():
    cat6 = ldf cat;
    check L485() else D156();
  L508():
    dr34 = tryDispatchBuiltin.1("[", methods53);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L510() else L509(dr34);
  L509(methods55):
    select6 = ld select;
    check L511() else D169();
  L526():
    goto L134(r384);
  L528():
    p83 = prom<V +>{
      gettextf2 = ldf gettextf;
      p82 = prom<V +>{
        sQuote1 = ldf sQuote;
        p81 = prom<V +>{
          __22 = ldf `@` in base;
          r386 = dyn __22(<sym fdef>, <sym generic>);
          return r386;
        };
        r388 = dyn sQuote1(p81);
        return r388;
      };
      r390 = dyn gettextf2("No simply inherited methods found for function %s; using non-simple method", p82);
      return r390;
    };
    r392 = dyn message[, domain](p83, NA_LGL);
    check L529() else D178();
  L539():
    methods63 = force? methods62;
    checkMissing(methods63);
    c106 = `is.object`(methods63);
    if c106 then L540() else L541(methods63);
  D114():
    deopt 439 [i59, found4];
  D156():
    deopt 604 [];
  D158():
    deopt 612 [];
  D169():
    deopt 649 [methods55, select6];
  D178():
    deopt 692 [r392];
  L140(dx41):
    st m = dx41;
    is1 = ldf is;
    check L543() else D184();
  L393():
    found5 = force? found4;
    checkMissing(found5);
    i65 = ld i;
    check L394() else D115();
  L485():
    p59 = prom<V +>{
      sym51 = ldf length;
      base51 = ldf length in base;
      guard51 = `==`.4(sym51, base51);
      if guard51 then L1() else L2();
    L0(r333):
      return r333;
    L1():
      select2 = ld select;
      select3 = force? select2;
      checkMissing(select3);
      length14 = ldf length in base;
      r334 = dyn length14(select3);
      goto L0(r334);
    L2():
      r332 = dyn base51(<sym select>);
      goto L0(r332);
    };
    r336 = dyn cat6(" .fI> found", p59, " best methods\n");
    check L486() else D157();
  L488():
    r338 = dyn getOption("ambiguousMethodSelection");
    check L489() else D159();
  L510():
    dx37 = getTryDispatchBuiltinValue(dr34);
    goto L129(dx37);
  L511():
    select7 = force? select6;
    __21 = ldf `[` in base;
    r368 = dyn __21(methods55, select7);
    goto L129(r368);
  L529():
    goto L136(r392);
  L540():
    dr36 = tryDispatchBuiltin.1("[[", methods63);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L542() else L541(dr36);
  L541(methods65):
    __23 = ldf `[[` in base;
    r400 = dyn __23(methods65, 1);
    goto L140(r400);
  D115():
    deopt 441 [i59, i65];
  D157():
    deopt 608 [r336];
  D159():
    deopt 614 [r338];
  D184():
    deopt 715 [];
  L394():
    i66 = force? i65;
    checkMissing(i66);
    c77 = ldf c in base;
    r263 = dyn c77(found5, i66);
    check L395() else D116();
  L486():
    goto L122();
  L489():
    st condAction = r338;
    sym52 = ldf `is.null`;
    base52 = ldf `is.null` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L490() else L491();
  L542():
    dx40 = getTryDispatchBuiltinValue(dr36);
    goto L140(dx40);
  L543():
    p85 = prom<V +>{
      m10 = ld m;
      m11 = force? m10;
      checkMissing(m11);
      return m11;
    };
    r402 = dyn is1(p85, "MethodDefinition");
    check L544() else D185();
  D116():
    deopt 444 [i59, r263];
  D185():
    deopt 718 [r402];
  L123(r340):
    c91 = `as.logical`(r340);
    if c91 then L493() else L124();
  L395():
    goto L88(i59, r263);
  L490():
    condAction = ld condAction;
    check L492() else D160();
  L491():
    r339 = dyn base52(<sym condAction>);
    goto L123(r339);
  L544():
    c107 = `as.logical`(r402);
    if c107 then L545() else L141();
  D160():
    deopt 617 [condAction];
  L124():
    sym53 = ldf `is.function`;
    base53 = ldf `is.function` in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L496() else L497();
  L125():
    withCallingHandlers = ldf withCallingHandlers;
    check L504() else D166();
  L141():
    goto L146();
  L146():
    doCache5 = ld doCache;
    check L565() else D197();
  L492():
    condAction1 = force? condAction;
    checkMissing(condAction1);
    c90 = `==`(condAction1, NULL);
    goto L123(c90);
  L493():
    _ambiguousMethodMessage = ld `.ambiguousMethodMessage`;
    check L494() else D161();
  L545():
    _newSignature = ldf `.newSignature`;
    check L546() else D186();
  D161():
    deopt 620 [_ambiguousMethodMessage];
  D166():
    deopt 639 [];
  D186():
    deopt 720 [];
  D197():
    deopt 760 [doCache5];
  L126(r342):
    r344 = `!`(r342);
    c92 = `as.logical`(r344);
    if c92 then L500() else L127();
  L494():
    _ambiguousMethodMessage1 = force? _ambiguousMethodMessage;
    checkMissing(_ambiguousMethodMessage1);
    st condAction = _ambiguousMethodMessage1;
    goto L125();
  L496():
    condAction2 = ld condAction;
    check L498() else D162();
  L497():
    r341 = dyn base53(<sym condAction>);
    goto L126(r341);
  L504():
    p71 = prom<V +>{
      _disambiguateMethods = ldf `.disambiguateMethods`;
      p63 = prom<V +>{
        classes15 = ld classes;
        classes16 = force? classes15;
        checkMissing(classes16);
        return classes16;
      };
      p64 = prom<V +>{
        select4 = ld select;
        select5 = force? select4;
        checkMissing(select5);
        return select5;
      };
      p65 = prom<V +>{
        __20 = ldf `@` in base;
        r356 = dyn __20(<sym fdef>, <sym generic>);
        return r356;
      };
      p66 = prom<V +>{
        methods50 = ld methods;
        methods51 = force? methods50;
        checkMissing(methods51);
        return methods51;
      };
      p67 = prom<V +>{
        supersList4 = ld supersList;
        supersList5 = force? supersList4;
        checkMissing(supersList5);
        return supersList5;
      };
      p68 = prom<V +>{
        fromGroup6 = ld fromGroup;
        fromGroup7 = force? fromGroup6;
        checkMissing(fromGroup7);
        return fromGroup7;
      };
      p69 = prom<V +>{
        classDefs2 = ld classDefs;
        classDefs3 = force? classDefs2;
        checkMissing(classDefs3);
        return classDefs3;
      };
      p70 = prom<V +>{
        verbose17 = ld verbose;
        verbose18 = force? verbose17;
        checkMissing(verbose18);
        return verbose18;
      };
      r363 = dyn _disambiguateMethods(p63, p64, p65, p66, p67, p68, p69, p70);
      return r363;
    };
    p72 = prom<V +>{
      condAction6 = ld condAction;
      condAction7 = force? condAction6;
      checkMissing(condAction7);
      return condAction7;
    };
    r366 = dyn withCallingHandlers[, ambiguousMethodSelection](p71, p72);
    check L505() else D167();
  L546():
    p86 = prom<V +>{
      classes21 = ld classes;
      classes22 = force? classes21;
      checkMissing(classes22);
      return classes22;
    };
    p87 = prom<V +>{
      __24 = ldf `@` in base;
      r404 = dyn __24(<sym fdef>, <sym signature>);
      return r404;
    };
    r406 = dyn _newSignature(p86, p87);
    check L547() else D187();
  L565():
    doCache6 = force? doCache5;
    checkMissing(doCache6);
    c111 = `as.logical`(doCache6);
    if c111 then L566() else L147();
  D162():
    deopt 625 [condAction2];
  D167():
    deopt 643 [r366];
  D187():
    deopt 723 [r406];
  L127():
    goto L125();
  L147():
    goto L150(NULL);
  L150(r427):
    goto L151();
  L498():
    condAction3 = force? condAction2;
    checkMissing(condAction3);
    is_function = ldf `is.function` in base;
    r343 = dyn is_function(condAction3);
    check L499() else D163();
  L500():
    stop2 = ldf stop;
    check L501() else D164();
  L505():
    st select = r366;
    goto L128();
  L547():
    l11 = ld m;
    ___ = ldf `@<-`;
    check L548() else D188();
  L566():
    verbose21 = ld verbose;
    check L567() else D198();
  D163():
    deopt 628 [r343];
  D164():
    deopt 631 [];
  D188():
    deopt 725 [r406, l11, r406];
  D198():
    deopt 762 [verbose21];
  L499():
    goto L126(r343);
  L501():
    p62 = prom<V +>{
      gettextf1 = ldf gettextf;
      p61 = prom<V +>{
        dQuote = ldf dQuote;
        p60 = prom<V +>{
          sym54 = ldf class;
          base54 = ldf class in base;
          guard54 = `==`.4(sym54, base54);
          if guard54 then L1() else L2();
        L0(r346):
          return r346;
        L1():
          condAction4 = ld condAction;
          condAction5 = force? condAction4;
          checkMissing(condAction5);
          class = ldf class in base;
          r347 = dyn class(condAction5);
          goto L0(r347);
        L2():
          r345 = dyn base54(<sym condAction>);
          goto L0(r345);
        };
        r349 = dyn dQuote(p60);
        return r349;
      };
      r351 = dyn gettextf1("the \"ambiguousMethodSelection\" option should be a function to be called as the condition action; got an object of class %s", p61);
      return r351;
    };
    r353 = dyn stop2[, domain](p62, NA_LGL);
    check L502() else D165();
  L548():
    r407 = dyn ___(l11, NULL, "target", r406);
    check L549() else D189();
  L567():
    verbose22 = force? verbose21;
    checkMissing(verbose22);
    c112 = `as.logical`(verbose22);
    if c112 then L568() else L148();
  D165():
    deopt 635 [r353];
  D189():
    deopt 728 [r406, r407];
  L148():
    goto L149();
  L149():
    assign1 = ldf assign;
    check L572() else D201();
  L502():
    goto L125();
  L549():
    st m = r407;
    _inheritedArgsExpression = ldf `.inheritedArgsExpression`;
    check L550() else D190();
  L568():
    cat7 = ldf cat;
    check L569() else D199();
  D190():
    deopt 731 [];
  D199():
    deopt 765 [];
  D201():
    deopt 771 [];
  L550():
    p88 = prom<V +>{
      __25 = ldf `@` in base;
      r408 = dyn __25(<sym m>, <sym target>);
      return r408;
    };
    p89 = prom<V +>{
      __26 = ldf `@` in base;
      r410 = dyn __26(<sym m>, <sym defined>);
      return r410;
    };
    p91 = prom<V +>{
      body = ldf body;
      p90 = prom<V +>{
        m12 = ld m;
        m13 = force? m12;
        checkMissing(m13);
        return m13;
      };
      r413 = dyn body(p90);
      return r413;
    };
    r415 = dyn _inheritedArgsExpression(p88, p89, p91);
    check L551() else D191();
  L569():
    r421 = dyn cat7(" .fI> caching newly found methods ..\n");
    check L570() else D200();
  L572():
    p92 = prom<V +>{
      tlabel = ld tlabel;
      tlabel1 = force? tlabel;
      checkMissing(tlabel1);
      return tlabel1;
    };
    p93 = prom<V +>{
      m21 = ld m;
      m22 = force? m21;
      checkMissing(m22);
      return m22;
    };
    p94 = prom<V +>{
      mtable7 = ld mtable;
      mtable8 = force? mtable7;
      checkMissing(mtable8);
      return mtable8;
    };
    r426 = dyn assign1[, , envir](p92, p93, p94);
    check L573() else D202();
  D191():
    deopt 735 [r415];
  D200():
    deopt 767 [r421];
  D202():
    deopt 776 [r426];
  L551():
    st coerce = r415;
    sym58 = ldf `is.null`;
    base58 = ldf `is.null` in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L552() else L553();
  L570():
    goto L149();
  L573():
    goto L150(r426);
  L142(r417):
    r418 = `!`(r417);
    c109 = `as.logical`(r418);
    if c109 then L555() else L143();
  L552():
    coerce = ld coerce;
    check L554() else D192();
  L553():
    r416 = dyn base58(<sym coerce>);
    goto L142(r416);
  D192():
    deopt 738 [coerce];
  L143():
    goto L144();
  L144():
    m14 = ld m;
    check L560() else D196();
  L554():
    coerce1 = force? coerce;
    checkMissing(coerce1);
    c108 = `==`(coerce1, NULL);
    goto L142(c108);
  L555():
    coerce2 = ld coerce;
    check L556() else D193();
  D193():
    deopt 742 [coerce2];
  D196():
    deopt 751 [m14];
  L556():
    coerce3 = force? coerce2;
    checkMissing(coerce3);
    l12 = ld m;
    body__ = ldf `body<-`;
    check L557() else D194();
  L560():
    m15 = force? m14;
    checkMissing(m15);
    l13 = ld methods;
    c110 = `is.object`(l13);
    if c110 then L561() else L562(m15, l13);
  D194():
    deopt 745 [coerce3, l12, coerce3];
  L145(m19, dx43):
    st methods = dx43;
    goto L146();
  L557():
    r419 = dyn body__(l12, NULL, coerce3);
    check L558() else D195();
  L561():
    dr38 = tryDispatchBuiltin.0("[[<-", l13, m15);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L563() else L562(m15, dr38);
  L562(m17, l15):
    ____3 = ldf `[[<-` in base;
    r420 = dyn ____3(l15, m15, 1);
    goto L145(m17, r420);
  D195():
    deopt 747 [coerce3, r419];
  L558():
    st m = r419;
    goto L144();
  L563():
    dx42 = getTryDispatchBuiltinValue(dr38);
    goto L145(m15, dx42);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    paste = ldf paste;
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
    r1 = dyn paste[, collapse](p, ", ");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}