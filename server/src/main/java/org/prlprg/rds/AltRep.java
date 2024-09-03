package org.prlprg.rds;

import java.util.HashMap;
import java.util.logging.Logger;
import org.prlprg.sexp.*;

interface AltRep {
  SEXPType getType();

  String getClassName();

  String getPackageName();

  SEXP unserialize(SEXP state);
}

class AltRepUnserializer {
  private static Logger LOGGER = Logger.getLogger(AltRepUnserializer.class.getName());
  private final String className;
  private final String packageName;
  private final SEXPType type;
  private final SEXP state;

  private static HashMap<String, AltRep> altReps = new HashMap<String, AltRep>();

  static {
    // Add here all the alt reps you want to support
    addAltRep(new BaseAltrRep.CompactIntSeq());
  }

  public AltRepUnserializer(ListSXP info, SEXP state) {
    className = ((RegSymSXP) info.get(0).value()).name();
    packageName = ((RegSymSXP) info.get(1).value()).name();
    type = SEXPType.valueOf(((IntSXP) info.get(2).value()).get(0));

    //    LOGGER.info(
    //        "Reading ALTREP with class "
    //            + className
    //            + " from package "
    //            + packageName
    //            + " with type "
    //            + type);

    this.state = state;
  }

  public static void addAltRep(AltRep altRepClass) {
    altReps.put(
        altRepClass.getClassName() + altRepClass.getPackageName() + altRepClass.getType(),
        altRepClass);
  }

  public SEXP unserialize() {
    var altRep = altReps.get(className + packageName + type);
    if (altRep == null) {
      throw new UnsupportedOperationException(
          "AltRep "
              + className
              + " in package "
              + packageName
              + " for type "
              + type
              + " not implemented");
    }

    return altRep.unserialize(state);
  }
}
