import UIKit

enum typeOfCars {
    case sedan
    case suv
    case truck
}

protocol Cars {
    var name: String { get }
    var color: String { get }
    var transmisson: String { get }
    
    func driveOn()
}

class Sedan: Cars {
    
    var name: String = "BMW M3"
    
    var color: String = "White"
    
    var transmisson: String = "RWD"
    
    func driveOn() {
        print("По улице едет \(name). Ее цвет: \(color). Привод: \(transmisson)")
    }
}
    
    class Suv: Cars {
        
        var name: String = "Volkswagen Tiguan"
        
        var color: String = "Grey"
        
        var transmisson: String = "4WD"
        
        func driveOn() {
            print("По улице едет \(name). Ее цвет: \(color). Привод: \(transmisson)")
        }
    }
    
    class Truck: Cars {
        
        var name: String = "Volvo"
        
        var color: String = "Blue"
        
        var transmisson: String = "AWD"
        
        func driveOn() {
            print("По улице едет \(name). Ее цвет: \(color). Привод: \(transmisson)")
        }
    }
    
class Factory {
    
    static let shared = Factory()
    
    private init() {}
    
    func makeCar(type: typeOfCars) -> Cars {
        switch type {
        case .sedan:
            return Sedan()
        case .suv:
            return Suv()
        case .truck:
            return Truck()
        }
    }
}

let sedan = Factory.shared.makeCar(type: .sedan)
let suv = Factory.shared.makeCar(type: .suv)
let truck = Factory.shared.makeCar(type: .truck)
sedan.driveOn()
suv.driveOn()
truck.driveOn()
