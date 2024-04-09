// swift-tools-version: 5.10
import PackageDescription


let package = Package(
    name: "Tivio",
    defaultLocalization: "en",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "Tivio",
            targets: ["Tivio"])
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
//        .target(
//            name: "sdk-tvos"
//        ),
//        .binaryTarget(
//            name: "SomeRemoteBinaryPackage",
//            url: "https://url/to/some/remote/xcframework.zip",
//            checksum: "The checksum of the ZIP archive that contains the XCFramework."
//        ),
        .binaryTarget(
            name: "Tivio",
            path: "Tivio.xcframework"
        )
    ]
)
