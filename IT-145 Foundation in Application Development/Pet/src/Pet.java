import java.util.ArrayList;
import java.util.Scanner;

public class Pet {
    private String petType;
    private String petName;
    private double petWeight;
    private int petAge;
    private int daysStay;
    private double amountDue;

    static int dogSpaces = 30;
    static int catSpaces = 12;

    private static ArrayList<Pet> pets = new ArrayList<Pet>();

    // Pet Type
    public String getPetType() {
        return this.petType;
    }

    public void setPetType(String type) {
        this.petType = type;
    }

    // Pet name
    public String getPetName() {
        return this.petName;
    }

    public void setPetName(String name) {
        this.petName = name;
    }

    // Pet weight
    public double getPetWeight() {
        return this.petWeight;
    }

    public void setPetWeight(double weight) {
        this.petWeight = weight;
    }

    // Pet age
    public int getPetAge() {
        return this.petAge;
    }

    public void setPetAge(int age) {
        this.petAge = age;
    }

    // Dog spaces available
    public int getDogSpaces() {
        return this.dogSpaces;
    }

    public void setDogSpaces(int size) {
        this.dogSpaces = size;
    }

    // Cat spaces available
    public int getCatSpaces() {
        return this.catSpaces;
    }

    public void setCatSpaces(int size) {
        this.catSpaces = size;
    }

    // Number of days staying
    public int getDaysStay() {
        return this.daysStay;
    }

    public void setDaysStay(int days) {
        this.daysStay = days;
    }

    // Total amount due
    public double getAmountDue() {
        return this.amountDue;
    }

    public void setAmountDue(double amount) {
        this.amountDue = amount;
    }

    public Pet(String type) {
        this.petType = type;
        this.petName = type + "e";
        this.petAge = 0;
        this.petWeight = 0;
        this.daysStay = 1;
    }

    public Pet(String name, String type, int age, double weight, int stay) {
        this.petType = type;
        this.petName = name;
        this.petAge = age;
        this.petWeight = weight;
        this.daysStay = stay;
    }

    // Checking a pet in
    public Pet() {
        // Make new Scanner to get User input
        Scanner input = new Scanner(System.in);

        // Ask the user for type of pet
        System.out.println("What kind of pet is being checked in?");
        String type = input.next().toLowerCase();

        // Checking for available space using a switch
        switch(type) {
            case "dog":
                if(dogSpaces <= 0) {
                    System.out.println("Unable to accomodate anymore dogs currently.");

                    return;
                }
                break;

            case "cat":
                if(catSpaces <= 0) {
                    System.out.println("Unable to accomodate anymore cats currently.");

                    return;
                }
                break;

            default: return;
        }

        // Getting pets name
        System.out.println("What is your " + type + "'s name?");
        String name = input.next();

        // Update returning pet information
        Pet existingPet = new Pet(type);
        boolean hasRecords = false;

        for(Pet pet : pets)
            if(hasRecords = pet.getPetName().equals(name))
                existingPet = pet;

        if(hasRecords) {
            // Update returning pet info
            System.out.println("\nIs " + name + "'s info current?");
            System.out.println("Type: " + existingPet.getPetType());
            System.out.println("Name: " + existingPet.getPetName());
            System.out.println("Age: " + existingPet.getPetAge());
            System.out.println("Weight: " + existingPet.getPetWeight());

            System.out.println("\tY/N: ");

            boolean current = input.next().toLowerCase().charAt(0) == 'y';

            if(!current) {
                System.out.println("Enter the type ('cat' or 'dog'): ");
                existingPet.setPetType(type = input.next());

                System.out.println("Enter the name: ");
                existingPet.setPetName(name = input.next());

                System.out.println("Enter the age (in years): ");
                existingPet.setPetAge(input.nextInt());

                System.out.println("Enter the weight (in pounds): ");
                existingPet.setPetWeight(input.nextDouble());
            }
        } else {
            // Creating new pet and ask for Pet's info
            System.out.println("\nIs " + name + "'s info correct?");
            System.out.println("Type: " + type);
            System.out.println("Name: " + name);

            System.out.println("\tY/N: ");

            boolean correct = input.next().toLowerCase().charAt(0) == 'y';

            if(!correct) {
                System.out.println("Enter " + name + "'s type ('cat' or 'dog'): ");
                existingPet.setPetType(type = input.next());

                System.out.println("Enter " + name + "'s name: ");
                existingPet.setPetName(name = input.next());
            }

            System.out.println("Enter " + name + "'s age (in years): ");
            existingPet.setPetAge(input.nextInt());

            System.out.println("Enter " + name + "'s weight (in pounds): ");
            existingPet.setPetWeight(input.nextDouble());
        }

        // Getting length of stay
        int stay;

        System.out.println("How long will " + name + " be staying with us? ");
        existingPet.setPetAge(stay = input.nextInt());

        // Grooming yes or no
        if(type.equals("dog") && stay > 1) {
            System.out.println("Will " + name + "need to be groomed (Y/N)? ");
            boolean grooming = input.next().toLowerCase().charAt(0) == 'y';
            // if Yes adjust price depending on criteria
            // else No
            //break
        }

        // Assigning pet to space
        // Total amount due
        if(type == "dog")
            --dogSpaces;
        if(type == "cat")
            --catSpaces;
    }
}